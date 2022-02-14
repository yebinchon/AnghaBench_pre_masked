
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float phys_gravity; } ;


 TYPE_1__ VAR_0 ;
 float FUNC_0 (int) ;

int FUNC_1(void)
{
 float VAR_1, VAR_2, VAR_3;

 VAR_1 = FUNC_0(30 * 10000);
 VAR_2 = VAR_0.phys_gravity;
 VAR_3 = VAR_1 / VAR_2;
 return 0.5 * VAR_2 * VAR_3 * VAR_3;
}
