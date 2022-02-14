
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lun {scalar_t__ sense_data; scalar_t__ unit_attention_data; scalar_t__ info_valid; scalar_t__ sense_data_info; } ;
struct fsg_dev {int* cmnd; int cmnd_size; scalar_t__ data_dir; int data_size; int data_size_from_cmnd; int phase_error; int residue; int usb_amount_left; int lun; int nluns; scalar_t__ bad_lun_okay; struct lun* curlun; struct lun* luns; } ;
typedef enum data_direction { ____Placeholder_data_direction } data_direction ;
struct TYPE_2__ {scalar_t__ protocol_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fsg_dev*,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct fsg_dev*,char*,char const*,int,char const,int,int,char*) ;
 int FUNC_2 (struct lun*) ;
 TYPE_1__ VAR_9 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,char*,char const,int) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct fsg_dev *VAR_10, int VAR_11,
  enum data_direction VAR_12, unsigned int VAR_13,
  int VAR_14, const char *VAR_15)
{
 int VAR_16;
 int VAR_17 = VAR_10->cmnd[1] >> 5;
 static const char VAR_18[4] = {'u', 'o', 'i', 'n'};
 char VAR_19[20];
 struct lun *VAR_20;



 if (FUNC_3())
  ;



 else if (VAR_9.protocol_type == VAR_8) {
  if (VAR_10->cmnd_size == 12)
   VAR_11 = 12;


 } else
  VAR_11 = 12;

 VAR_19[0] = 0;
 if (VAR_10->data_dir != VAR_1)
  FUNC_4(VAR_19, ", H%c=%u", VAR_18[(int) VAR_10->data_dir],
    VAR_10->data_size);
 FUNC_1(VAR_10, "SCSI command: %s;  Dc=%d, D%c=%u;  Hc=%d%s\n",
   VAR_15, VAR_11, VAR_18[(int) VAR_12],
   VAR_10->data_size_from_cmnd, VAR_10->cmnd_size, VAR_19);



 if (VAR_10->data_size_from_cmnd == 0)
  VAR_12 = VAR_0;
 if (VAR_10->data_dir == VAR_1) {
  VAR_10->data_dir = VAR_12;
  VAR_10->data_size = VAR_10->data_size_from_cmnd;

 } else {
  if (VAR_10->data_size < VAR_10->data_size_from_cmnd) {




   VAR_10->data_size_from_cmnd = VAR_10->data_size;
   VAR_10->phase_error = 1;
  }
 }
 VAR_10->residue = VAR_10->usb_amount_left = VAR_10->data_size;


 if (VAR_10->data_dir != VAR_12 && VAR_10->data_size_from_cmnd > 0) {
  VAR_10->phase_error = 1;
  return -VAR_2;
 }


 if (VAR_11 != VAR_10->cmnd_size) {
  if (VAR_11 <= VAR_10->cmnd_size) {
   FUNC_0(VAR_10, "%s is buggy! Expected length %d "
     "but we got %d\n", VAR_15,
     VAR_11, VAR_10->cmnd_size);
   VAR_11 = VAR_10->cmnd_size;
  } else {
   VAR_10->phase_error = 1;
   return -VAR_2;
  }
 }


 if (FUNC_5()) {
  if (VAR_10->lun != VAR_17)
   FUNC_0(VAR_10, "using LUN %d from CBW, "
     "not LUN %d from CDB\n",
     VAR_10->lun, VAR_17);
 } else
  VAR_10->lun = VAR_17;


 if (VAR_10->lun >= 0 && VAR_10->lun < VAR_10->nluns) {
  VAR_10->curlun = VAR_20 = &VAR_10->luns[VAR_10->lun];
  if (VAR_10->cmnd[0] != VAR_4) {
   VAR_20->sense_data = VAR_7;
   VAR_20->sense_data_info = 0;
   VAR_20->info_valid = 0;
  }
 } else {
  VAR_10->curlun = VAR_20 = ((void*)0);
  VAR_10->bad_lun_okay = 0;



  if (VAR_10->cmnd[0] != VAR_3 &&
    VAR_10->cmnd[0] != VAR_4) {
   FUNC_0(VAR_10, "unsupported LUN %d\n", VAR_10->lun);
   return -VAR_2;
  }
 }



 if (VAR_20 && VAR_20->unit_attention_data != VAR_7 &&
   VAR_10->cmnd[0] != VAR_3 &&
   VAR_10->cmnd[0] != VAR_4) {
  VAR_20->sense_data = VAR_20->unit_attention_data;
  VAR_20->unit_attention_data = VAR_7;
  return -VAR_2;
 }


 VAR_10->cmnd[1] &= 0x1f;
 for (VAR_16 = 1; VAR_16 < VAR_11; ++VAR_16) {
  if (VAR_10->cmnd[VAR_16] && !(VAR_13 & (1 << VAR_16))) {
   if (VAR_20)
    VAR_20->sense_data = VAR_5;
   return -VAR_2;
  }
 }



 if (VAR_20 && !FUNC_2(VAR_20) && VAR_14) {
  VAR_20->sense_data = VAR_6;
  return -VAR_2;
 }

 return 0;
}
