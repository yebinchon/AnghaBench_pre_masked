
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct carlu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct carlu*,int ,int *) ;
 int FUNC_3 (struct carlu*,int ,int) ;
 int FUNC_4 (char*,int ) ;

int FUNC_5(struct carlu *VAR_3)
{
 uint32_t VAR_4;
 do { int VAR_5 = FUNC_2(VAR_3, VAR_2, &VAR_4); if ((VAR_5)) return VAR_5; } while (0);
 FUNC_4("GPIO state:%x\n", VAR_4);


 do { int VAR_6 = FUNC_3(VAR_3, VAR_2, VAR_0 | VAR_1); if ((VAR_6)) return VAR_6; } while (0);


 FUNC_1(700);

 do { int VAR_7 = FUNC_2(VAR_3, VAR_2, &VAR_4); if ((VAR_7)) return VAR_7; } while (0);
 FUNC_4("GPIO state:%x\n", VAR_4);


 do { int VAR_8 = FUNC_3(VAR_3, VAR_2, 0); if ((VAR_8)) return VAR_8; } while (0);

 do { int VAR_9 = FUNC_2(VAR_3, VAR_2, &VAR_4); if ((VAR_9)) return VAR_9; } while (0);
 FUNC_4("GPIO state:%x\n", VAR_4);
}
