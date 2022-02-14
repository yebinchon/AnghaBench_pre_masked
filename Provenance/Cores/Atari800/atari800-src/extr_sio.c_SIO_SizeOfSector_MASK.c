
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sec_count; int* sec_offset; } ;
typedef TYPE_1__ vapi_sec_info_t ;
struct TYPE_5__ {TYPE_1__* sectors; } ;
typedef TYPE_2__ vapi_additional_info_t ;
typedef int ULONG ;
typedef size_t UBYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__** VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;

void FUNC_0(UBYTE VAR_11, int VAR_12, int *VAR_13, ULONG *VAR_14)
{
 int VAR_15;
 ULONG VAR_16;
 int VAR_17 = (VAR_8[VAR_11] == VAR_3 ? 16 : 0);

 if (VAR_0) {
  if (VAR_13)
   *VAR_13 = 128;
  if (VAR_14)
   *VAR_14 = 0;
  return;
 }

 if (VAR_8[VAR_11] == VAR_4) {
  VAR_15 = 128;
  VAR_16 = 16 + (128+12)*(VAR_12 -1);
 }
 else if (VAR_8[VAR_11] == VAR_5) {
  vapi_additional_info_t *VAR_18;
  vapi_sec_info_t *VAR_19;

  VAR_15 = 128;
  VAR_18 = VAR_6[VAR_11];
  if (VAR_18 == ((void*)0))
   VAR_16 = 0;
  else if (VAR_12 > VAR_9[VAR_11])
   VAR_16 = 0;
  else {
   VAR_19 = &VAR_18->sectors[VAR_12-1];
   if (VAR_19->sec_count == 0 )
    VAR_16 = 0;
   else
    VAR_16 = VAR_19->sec_offset[0];
  }
 }
 else if (VAR_12 < 4) {

  VAR_15 = 128;
  VAR_16 = VAR_17 + (VAR_12 - 1) * (VAR_7[VAR_11] == VAR_2 ? 256 : 128);
 }
 else {
  VAR_15 = VAR_10[VAR_11];
  VAR_16 = VAR_17 + (VAR_7[VAR_11] == VAR_1 ? 0x180 : 0x300) + (VAR_12 - 4) * VAR_15;
 }

 if (VAR_13)
  *VAR_13 = VAR_15;

 if (VAR_14)
  *VAR_14 = VAR_16;
}
