
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_7__ {scalar_t__ voltags; TYPE_1__* device; } ;
typedef TYPE_2__ scsi_changer ;
typedef int cmd ;
struct TYPE_6__ {int lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int*,int*,int,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int) ;
 int FUNC_5 (char*,int*,int) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(scsi_changer *VAR_6, u_int VAR_7, char *VAR_8)
{
 u_char VAR_9[12];
 u_char *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(512, VAR_4 | VAR_3);
 if(!VAR_10)
  return -VAR_2;

 retry:
 FUNC_6(VAR_9,0,sizeof(VAR_9));
 VAR_9[0] = VAR_5;
 VAR_9[1] = (VAR_6->device->lun << 5) |
  (VAR_6->voltags ? 0x10 : 0) |
  FUNC_1(VAR_6,VAR_7);
 VAR_9[2] = (VAR_7 >> 8) & 0xff;
 VAR_9[3] = VAR_7 & 0xff;
 VAR_9[5] = 1;
 VAR_9[9] = 255;
 if (0 == (VAR_11 = FUNC_0(VAR_6, VAR_9, VAR_10, 256, VAR_0))) {
  if (((VAR_10[16] << 8) | VAR_10[17]) != VAR_7) {
   FUNC_2("asked for element 0x%02x, got 0x%02x\n",
    VAR_7,(VAR_10[16] << 8) | VAR_10[17]);
   FUNC_3(VAR_10);
   return -VAR_1;
  }
  FUNC_5(VAR_8,VAR_10+16,16);
 } else {
  if (VAR_6->voltags) {
   VAR_6->voltags = 0;
   FUNC_7("device has no volume tag support\n");
   goto retry;
  }
  FUNC_2("READ ELEMENT STATUS for element 0x%x failed\n",VAR_7);
 }
 FUNC_3(VAR_10);
 return VAR_11;
}
