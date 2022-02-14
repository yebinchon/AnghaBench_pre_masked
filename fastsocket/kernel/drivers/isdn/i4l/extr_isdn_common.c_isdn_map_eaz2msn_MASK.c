
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** msn2eaz; } ;
typedef TYPE_1__ isdn_driver_t ;
struct TYPE_4__ {TYPE_1__** drv; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*) ;

char *
FUNC_1(char *VAR_1, int VAR_2)
{
 isdn_driver_t *VAR_3 = VAR_0->drv[VAR_2];
 int VAR_4;

 if (FUNC_0(VAR_1) == 1) {
  VAR_4 = VAR_1[0] - '0';
  if ((VAR_4 >= 0) && (VAR_4 <= 9))
   if (FUNC_0(VAR_3->msn2eaz[VAR_4]))
    return (VAR_3->msn2eaz[VAR_4]);
 }
 return (VAR_1);
}
