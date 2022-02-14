
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int do_not_free; int x509; int serial; } ;
typedef TYPE_1__ X ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

void FUNC_4(X *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 FUNC_2(VAR_0);



 FUNC_3(VAR_0->serial);

 if (VAR_0->do_not_free == 0)
 {
  FUNC_1(VAR_0->x509);
 }
 FUNC_0(VAR_0);
}
