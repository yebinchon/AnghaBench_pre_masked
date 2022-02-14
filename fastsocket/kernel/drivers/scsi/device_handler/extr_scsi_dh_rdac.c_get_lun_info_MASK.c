
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct scsi_device {int dummy; } ;
struct c8_inquiry {int page_code; char* page_id; char* array_user_label; int array_uniq_id_len; int array_unique_id; int * lun; } ;
struct TYPE_2__ {struct c8_inquiry c8; } ;
struct rdac_dh_data {int lun; TYPE_1__ inq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct scsi_device*,int,int,struct rdac_dh_data*) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_4, struct rdac_dh_data *VAR_5,
   char *VAR_6, u8 *VAR_7)
{
 int VAR_8, VAR_9;
 struct c8_inquiry *VAR_10;

 VAR_8 = FUNC_2(VAR_4, 0xC8, sizeof(struct c8_inquiry), VAR_5);
 if (VAR_8 == VAR_2) {
  VAR_10 = &VAR_5->inq.c8;
  if (VAR_10->page_code != 0xc8)
   return VAR_1;
  if (VAR_10->page_id[0] != 'e' || VAR_10->page_id[1] != 'd' ||
      VAR_10->page_id[2] != 'i' || VAR_10->page_id[3] != 'd')
   return VAR_1;
  VAR_5->lun = VAR_10->lun[7];

  for(VAR_9=0; VAR_9<VAR_0-1; ++VAR_9)
   *(VAR_6+VAR_9) = VAR_10->array_user_label[(2*VAR_9)+1];

  *(VAR_6+VAR_0-1) = '\0';
  FUNC_1(VAR_7, 0, VAR_3);
  FUNC_0(VAR_7, VAR_10->array_unique_id, VAR_10->array_uniq_id_len);
 }
 return VAR_8;
}
