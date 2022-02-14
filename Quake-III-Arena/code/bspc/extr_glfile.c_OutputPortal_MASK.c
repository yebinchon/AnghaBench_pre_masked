
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_4__ {int * winding; } ;
typedef TYPE_1__ portal_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int *) ;
 int VAR_0 ;

void FUNC_4 (portal_t *VAR_1, FILE *VAR_2)
{
 winding_t *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2 (VAR_1);
 if (!VAR_4)
  return;

 VAR_0++;

 VAR_3 = VAR_1->winding;

 if (VAR_4 == 2)
  VAR_3 = FUNC_3 (VAR_3);

 FUNC_1 (VAR_3, VAR_2);

 if (VAR_4 == 2)
  FUNC_0(VAR_3);
}
