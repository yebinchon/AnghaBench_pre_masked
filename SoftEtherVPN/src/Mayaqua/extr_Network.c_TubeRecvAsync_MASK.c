
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Queue; } ;
typedef int TUBEDATA ;
typedef TYPE_1__ TUBE ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

TUBEDATA *FUNC_4(TUBE *VAR_0)
{
 TUBEDATA *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 if (FUNC_1(VAR_0) == 0)
 {
  return ((void*)0);
 }

 FUNC_2(VAR_0->Queue);
 {
  VAR_1 = FUNC_0(VAR_0->Queue);
 }
 FUNC_3(VAR_0->Queue);

 return VAR_1;
}
