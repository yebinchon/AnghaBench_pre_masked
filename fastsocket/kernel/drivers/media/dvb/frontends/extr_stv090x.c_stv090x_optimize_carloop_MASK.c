
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stv090x_state {int srate; TYPE_1__* internal; } ;
struct stv090x_long_frame_crloop {int modcod; int crl_pilots_on_2; int crl_pilots_on_5; int crl_pilots_on_10; int crl_pilots_on_20; int crl_pilots_on_30; int crl_pilots_off_2; int crl_pilots_off_5; int crl_pilots_off_10; int crl_pilots_off_20; int crl_pilots_off_30; } ;
typedef int s32 ;
typedef enum stv090x_modcod { ____Placeholder_stv090x_modcod } stv090x_modcod ;
struct TYPE_2__ {int dev_ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct stv090x_long_frame_crloop* VAR_3 ;
 struct stv090x_long_frame_crloop* VAR_4 ;
 struct stv090x_long_frame_crloop* VAR_5 ;
 struct stv090x_long_frame_crloop* VAR_6 ;
 struct stv090x_long_frame_crloop* VAR_7 ;
 struct stv090x_long_frame_crloop* VAR_8 ;

__attribute__((used)) static u8 FUNC_0(struct stv090x_state *VAR_9, enum stv090x_modcod VAR_10, s32 VAR_11)
{
 u8 VAR_12 = 0x29;
 s32 VAR_13;
 struct stv090x_long_frame_crloop *VAR_14, *VAR_15, *VAR_16;

 if (VAR_9->internal->dev_ver == 0x20) {
  VAR_14 = VAR_5;
  VAR_15 = VAR_7;
  VAR_16 = VAR_3;
 } else {

  VAR_14 = VAR_6;
  VAR_15 = VAR_8;
  VAR_16 = VAR_4;
 }

 if (VAR_10 < VAR_1) {
  VAR_13 = 0;
  while ((VAR_13 < 3) && (VAR_10 != VAR_15[VAR_13].modcod))
   VAR_13++;

  if (VAR_13 >= 3)
   VAR_13 = 2;

 } else {
  VAR_13 = 0;
  while ((VAR_13 < 14) && (VAR_10 != VAR_14[VAR_13].modcod))
   VAR_13++;

  if (VAR_13 >= 14) {
   VAR_13 = 0;
   while ((VAR_13 < 11) && (VAR_10 != VAR_16[VAR_13].modcod))
    VAR_13++;

   if (VAR_13 >= 11)
    VAR_13 = 10;
  }
 }

 if (VAR_10 <= VAR_2) {
  if (VAR_11) {
   if (VAR_9->srate <= 3000000)
    VAR_12 = VAR_15[VAR_13].crl_pilots_on_2;
   else if (VAR_9->srate <= 7000000)
    VAR_12 = VAR_15[VAR_13].crl_pilots_on_5;
   else if (VAR_9->srate <= 15000000)
    VAR_12 = VAR_15[VAR_13].crl_pilots_on_10;
   else if (VAR_9->srate <= 25000000)
    VAR_12 = VAR_15[VAR_13].crl_pilots_on_20;
   else
    VAR_12 = VAR_15[VAR_13].crl_pilots_on_30;
  } else {
   if (VAR_9->srate <= 3000000)
    VAR_12 = VAR_15[VAR_13].crl_pilots_off_2;
   else if (VAR_9->srate <= 7000000)
    VAR_12 = VAR_15[VAR_13].crl_pilots_off_5;
   else if (VAR_9->srate <= 15000000)
    VAR_12 = VAR_15[VAR_13].crl_pilots_off_10;
   else if (VAR_9->srate <= 25000000)
    VAR_12 = VAR_15[VAR_13].crl_pilots_off_20;
   else
    VAR_12 = VAR_15[VAR_13].crl_pilots_off_30;
  }

 } else if (VAR_10 <= VAR_0) {
  if (VAR_11) {
   if (VAR_9->srate <= 3000000)
    VAR_12 = VAR_14[VAR_13].crl_pilots_on_2;
   else if (VAR_9->srate <= 7000000)
    VAR_12 = VAR_14[VAR_13].crl_pilots_on_5;
   else if (VAR_9->srate <= 15000000)
    VAR_12 = VAR_14[VAR_13].crl_pilots_on_10;
   else if (VAR_9->srate <= 25000000)
    VAR_12 = VAR_14[VAR_13].crl_pilots_on_20;
   else
    VAR_12 = VAR_14[VAR_13].crl_pilots_on_30;
  } else {
   if (VAR_9->srate <= 3000000)
    VAR_12 = VAR_14[VAR_13].crl_pilots_off_2;
   else if (VAR_9->srate <= 7000000)
    VAR_12 = VAR_14[VAR_13].crl_pilots_off_5;
   else if (VAR_9->srate <= 15000000)
    VAR_12 = VAR_14[VAR_13].crl_pilots_off_10;
   else if (VAR_9->srate <= 25000000)
    VAR_12 = VAR_14[VAR_13].crl_pilots_off_20;
   else
    VAR_12 = VAR_14[VAR_13].crl_pilots_off_30;
  }
 } else {
  if (VAR_9->srate <= 3000000)
   VAR_12 = VAR_16[VAR_13].crl_pilots_on_2;
  else if (VAR_9->srate <= 7000000)
   VAR_12 = VAR_16[VAR_13].crl_pilots_on_5;
  else if (VAR_9->srate <= 15000000)
   VAR_12 = VAR_16[VAR_13].crl_pilots_on_10;
  else if (VAR_9->srate <= 25000000)
   VAR_12 = VAR_16[VAR_13].crl_pilots_on_20;
  else
   VAR_12 = VAR_16[VAR_13].crl_pilots_on_30;
 }

 return VAR_12;
}
