
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* ant_config; } ;
struct antsel_info {TYPE_1__ antcfg_11n; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct antsel_info*,int) ;

void
FUNC_1(struct antsel_info *VAR_3, bool VAR_4, bool VAR_5,
        u8 VAR_6, u8 VAR_7, u8 *VAR_8,
        u8 *VAR_9)
{
 u8 VAR_10;


 if (VAR_4) {
  *VAR_8 = VAR_3->antcfg_11n.ant_config[VAR_1];
  *VAR_9 = *VAR_8;
  return;
 }

 if (!VAR_5) {
  *VAR_8 = VAR_3->antcfg_11n.ant_config[VAR_2];
  *VAR_9 = *VAR_8;

 } else {
  VAR_10 = VAR_3->antcfg_11n.ant_config[VAR_2];
  if ((VAR_10 & VAR_0) == VAR_0) {
   *VAR_8 = FUNC_0(VAR_3, VAR_6);
   *VAR_9 = FUNC_0(VAR_3, VAR_7);
  } else {
   *VAR_8 =
       VAR_3->antcfg_11n.ant_config[VAR_2];
   *VAR_9 = *VAR_8;
  }
 }
 return;
}
