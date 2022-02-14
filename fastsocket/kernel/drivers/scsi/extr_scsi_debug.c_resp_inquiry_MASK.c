
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdebug_dev_info {scalar_t__ lun; int channel; int target; scalar_t__ wlun; TYPE_2__* sdbg_host; } ;
struct scsi_cmnd {scalar_t__ cmnd; } ;
struct TYPE_4__ {TYPE_1__* shost; } ;
struct TYPE_3__ {int host_no; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct scsi_cmnd*,unsigned char*,int) ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 unsigned char FUNC_2 (unsigned char*,int,int,int,char*,int) ;
 unsigned char FUNC_3 (unsigned char*) ;
 unsigned char FUNC_4 (unsigned char*) ;
 unsigned char FUNC_5 (unsigned char*,int) ;
 int FUNC_6 (unsigned char*) ;
 unsigned char FUNC_7 (unsigned char*) ;
 unsigned char FUNC_8 (unsigned char*) ;
 unsigned char FUNC_9 (unsigned char*) ;
 int FUNC_10 (unsigned char*) ;
 unsigned char* FUNC_11 (int,int ) ;
 int FUNC_12 (unsigned char*,char*,int) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (struct sdebug_dev_info*,int ,int ,int ) ;
 int FUNC_15 (char*,int,char*,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_16 () ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 unsigned char VAR_14 ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static int FUNC_17(struct scsi_cmnd * VAR_16, int VAR_17,
   struct sdebug_dev_info * VAR_18)
{
 unsigned char VAR_19;
 unsigned char * VAR_20;
 unsigned char *VAR_21 = (unsigned char *)VAR_16->cmnd;
 int VAR_22, VAR_23, VAR_24;

 VAR_22 = (VAR_21[3] << 8) + VAR_21[4];
 VAR_20 = FUNC_11(VAR_5, VAR_1);
 if (! VAR_20)
  return VAR_0 << 16;
 if (VAR_18->wlun)
  VAR_19 = 0x1e;
 else if (VAR_12 && (0 == VAR_18->lun))
  VAR_19 = 0x7f;
 else
  VAR_19 = (VAR_13 & 0x1f);
 VAR_20[0] = VAR_19;
 if (0x2 & VAR_21[1]) {
  FUNC_14(VAR_18, VAR_2, VAR_3,
           0);
  FUNC_10(VAR_20);
  return VAR_7;
 } else if (0x1 & VAR_21[1]) {
  int VAR_25, VAR_26, VAR_27, VAR_28;
  char VAR_29[6];
  int VAR_30 = VAR_18->sdbg_host->shost->host_no;

  VAR_26 = (((VAR_30 + 1) & 0x7f) << 8) +
      (VAR_18->channel & 0x7f);
  if (0 == VAR_15)
   VAR_30 = 0;
  VAR_25 = VAR_18->wlun ? -1 : (((VAR_30 + 1) * 2000) +
       (VAR_18->target * 1000) + VAR_18->lun);
  VAR_27 = ((VAR_30 + 1) * 2000) +
     (VAR_18->target * 1000) - 3;
  VAR_28 = FUNC_15(VAR_29, 6, "%d", VAR_25);
  if (0 == VAR_21[2]) {
   VAR_20[1] = VAR_21[2];
   VAR_23 = 4;
   VAR_20[VAR_23++] = 0x0;
   VAR_20[VAR_23++] = 0x80;
   VAR_20[VAR_23++] = 0x83;
   VAR_20[VAR_23++] = 0x84;
   VAR_20[VAR_23++] = 0x85;
   VAR_20[VAR_23++] = 0x86;
   VAR_20[VAR_23++] = 0x87;
   VAR_20[VAR_23++] = 0x88;
   VAR_20[VAR_23++] = 0x89;
   VAR_20[VAR_23++] = 0xb0;
   VAR_20[VAR_23++] = 0xb1;
   if (FUNC_16())
    VAR_20[VAR_23++] = 0xb2;
   VAR_20[3] = VAR_23 - 4;
  } else if (0x80 == VAR_21[2]) {
   VAR_20[1] = VAR_21[2];
   VAR_20[3] = VAR_28;
   FUNC_12(&VAR_20[4], VAR_29, VAR_28);
  } else if (0x83 == VAR_21[2]) {
   VAR_20[1] = VAR_21[2];
   VAR_20[3] = FUNC_2(&VAR_20[4], VAR_26,
       VAR_27, VAR_25,
       VAR_29, VAR_28);
  } else if (0x84 == VAR_21[2]) {
   VAR_20[1] = VAR_21[2];
   VAR_20[3] = FUNC_3(&VAR_20[4]);
  } else if (0x85 == VAR_21[2]) {
   VAR_20[1] = VAR_21[2];
   VAR_20[3] = FUNC_4(&VAR_20[4]);
  } else if (0x86 == VAR_21[2]) {
   VAR_20[1] = VAR_21[2];
   VAR_20[3] = 0x3c;
   if (VAR_11 == VAR_6)
    VAR_20[4] = 0x4;
   else if (VAR_11)
    VAR_20[4] = 0x5;
   else
    VAR_20[4] = 0x0;
   VAR_20[5] = 0x7;
  } else if (0x87 == VAR_21[2]) {
   VAR_20[1] = VAR_21[2];
   VAR_20[3] = 0x8;
   VAR_20[4] = 0x2;
   VAR_20[6] = 0x80;
   VAR_20[8] = 0x18;
   VAR_20[10] = 0x82;
  } else if (0x88 == VAR_21[2]) {
   VAR_20[1] = VAR_21[2];
   VAR_20[3] = FUNC_5(&VAR_20[4], VAR_27);
  } else if (0x89 == VAR_21[2]) {
   VAR_20[1] = VAR_21[2];
   VAR_23 = FUNC_6(&VAR_20[4]);
   VAR_20[2] = (VAR_23 >> 8);
   VAR_20[3] = (VAR_23 & 0xff);
  } else if (0xb0 == VAR_21[2]) {
   VAR_20[1] = VAR_21[2];
   VAR_20[3] = FUNC_7(&VAR_20[4]);
  } else if (0xb1 == VAR_21[2]) {
   VAR_20[1] = VAR_21[2];
   VAR_20[3] = FUNC_8(&VAR_20[4]);
  } else if (0xb2 == VAR_21[2]) {
   VAR_20[1] = VAR_21[2];
   VAR_20[3] = FUNC_9(&VAR_20[4]);
  } else {

   FUNC_14(VAR_18, VAR_2,
     VAR_3, 0);
   FUNC_10(VAR_20);
   return VAR_7;
  }
  VAR_28 = FUNC_13(((VAR_20[2] << 8) + VAR_20[3]) + 4, VAR_22);
  VAR_24 = FUNC_1(VAR_16, VAR_20,
       FUNC_13(VAR_28, VAR_5));
  FUNC_10(VAR_20);
  return VAR_24;
 }

 VAR_20[1] = FUNC_0(VAR_17) ? 0x80 : 0;
 VAR_20[2] = VAR_14;
 VAR_20[3] = 2;
 VAR_20[4] = VAR_4 - 5;
 VAR_20[5] = VAR_11 ? 1 : 0;
 if (0 == VAR_15)
  VAR_20[5] = 0x10;
 VAR_20[6] = 0x10;

 VAR_20[7] = 0xa;
 FUNC_12(&VAR_20[8], VAR_10, 8);
 FUNC_12(&VAR_20[16], VAR_8, 16);
 FUNC_12(&VAR_20[32], VAR_9, 4);

 VAR_20[58] = 0x0; VAR_20[59] = 0x77;
 VAR_20[60] = 0x3; VAR_20[61] = 0x14;
 VAR_23 = 62;
 if (VAR_13 == 0) {
  VAR_20[VAR_23++] = 0x3; VAR_20[VAR_23++] = 0x3d;
 } else if (VAR_13 == 1) {
  VAR_20[VAR_23++] = 0x3; VAR_20[VAR_23++] = 0x60;
 }
 VAR_20[VAR_23++] = 0xc; VAR_20[VAR_23++] = 0xf;
 VAR_24 = FUNC_1(VAR_16, VAR_20,
       FUNC_13(VAR_22, VAR_4));
 FUNC_10(VAR_20);
 return VAR_24;
}
