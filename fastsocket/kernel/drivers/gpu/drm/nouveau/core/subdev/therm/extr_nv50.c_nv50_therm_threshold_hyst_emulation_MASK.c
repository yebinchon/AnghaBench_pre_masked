
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u8 ;
struct nvbios_therm_threshold {int temp; int hysteresis; } ;
struct nouveau_therm {int (* temp_get ) (struct nouveau_therm*) ;} ;
typedef enum nouveau_therm_thrs_state { ____Placeholder_nouveau_therm_thrs_state } nouveau_therm_thrs_state ;
typedef enum nouveau_therm_thrs_direction { ____Placeholder_nouveau_therm_thrs_direction } nouveau_therm_thrs_direction ;
typedef enum nouveau_therm_thrs { ____Placeholder_nouveau_therm_thrs } nouveau_therm_thrs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nouveau_therm*,int,int) ;
 int FUNC_1 (struct nouveau_therm*,int) ;
 int FUNC_2 (struct nouveau_therm*,int,int) ;
 int FUNC_3 (struct nouveau_therm*,int ) ;
 int FUNC_4 (struct nouveau_therm*,int ,int) ;
 int FUNC_5 (struct nouveau_therm*) ;

__attribute__((used)) static void
FUNC_6(struct nouveau_therm *VAR_4,
       uint32_t VAR_5, u8 VAR_6,
       const struct nvbios_therm_threshold *VAR_7,
       enum nouveau_therm_thrs VAR_8)
{
 enum nouveau_therm_thrs_direction VAR_9;
 enum nouveau_therm_thrs_state VAR_10, VAR_11;
 int VAR_12, VAR_13;

 VAR_10 = FUNC_1(VAR_4, VAR_8);
 VAR_12 = FUNC_3(VAR_4, VAR_5);


 if (VAR_12 == VAR_7->temp) {
  FUNC_4(VAR_4, VAR_5, VAR_7->temp - VAR_7->hysteresis);
  VAR_11 = VAR_1;
 } else {
  FUNC_4(VAR_4, VAR_5, VAR_7->temp);
  VAR_11 = VAR_2;
 }


 VAR_13 = VAR_4->temp_get(VAR_4);
 if (VAR_11 == VAR_2 && VAR_13 > VAR_7->temp)
  VAR_11 = VAR_1;
 else if (VAR_11 == VAR_1 &&
  VAR_13 < VAR_7->temp - VAR_7->hysteresis)
  VAR_11 = VAR_2;
 FUNC_2(VAR_4, VAR_8, VAR_11);


 if (VAR_10 < VAR_11)
  VAR_9 = VAR_3;
 else if (VAR_10 > VAR_11)
  VAR_9 = VAR_0;
 else
  return;


 FUNC_0(VAR_4, VAR_8, VAR_9);
}
