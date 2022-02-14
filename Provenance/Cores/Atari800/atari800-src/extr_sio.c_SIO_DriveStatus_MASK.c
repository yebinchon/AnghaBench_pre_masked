
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* sec_stat_buff; } ;
typedef TYPE_1__ vapi_additional_info_t ;
typedef int UBYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int FUNC_1 (int,int) ;
 scalar_t__* VAR_9 ;
 int ** VAR_10 ;
 int FUNC_2 (int*,int,int,int *) ;
 scalar_t__* VAR_11 ;
 int* VAR_12 ;

int FUNC_3(int VAR_13, UBYTE *VAR_14)
{
 if (VAR_0) {
  VAR_14[0] = 16 + 8;
  VAR_14[1] = 255;
  VAR_14[2] = 1;
  VAR_14[3] = 0 ;
  return 'C';
 }

 if (VAR_6[VAR_13] == VAR_4)
  return 0;


 if (VAR_12[VAR_13] != 0 && VAR_11[VAR_13] == VAR_1) {
  int VAR_15 = VAR_12[VAR_13];
  FUNC_1(VAR_13, VAR_15);
  if (FUNC_2(VAR_14, 1, 4, VAR_10[VAR_13]) < 4) {
   FUNC_0("SIO_DriveStatus: failed to read sector header");
  }
  return 'C';
 }
 else if (VAR_12[VAR_13] != 0 && VAR_11[VAR_13] == VAR_2 &&
    VAR_6[VAR_13] != VAR_3) {
  vapi_additional_info_t *VAR_16;
  VAR_16 = (vapi_additional_info_t *)VAR_9[VAR_13];
  VAR_14[0] = VAR_16->sec_stat_buff[0];
  VAR_14[1] = VAR_16->sec_stat_buff[1];
  VAR_14[2] = VAR_16->sec_stat_buff[2];
  VAR_14[3] = VAR_16->sec_stat_buff[3];
  FUNC_0("Drive Status unit %d %x %x %x %x",VAR_13,VAR_14[0], VAR_14[1], VAR_14[2], VAR_14[3]);
  return 'C';
 }
 VAR_14[0] = 16;
 VAR_14[1] = VAR_10[VAR_13] != ((void*)0) ? 255 : 127 ;
 if (VAR_12[VAR_13] != 0)
  VAR_14[0] |= 4;
 if (VAR_6[VAR_13] == VAR_5)
  VAR_14[0] |= 8;
 if (VAR_8[VAR_13] == 256)
  VAR_14[0] |= 32;
 if (VAR_7[VAR_13] == 1040)
  VAR_14[0] |= 128;
 VAR_14[2] = 1;
 VAR_14[3] = 0;
 return 'C';
}
