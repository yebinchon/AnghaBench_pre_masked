
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {scalar_t__ c; } ;
typedef TYPE_1__ REF ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;

UINT FUNC_5(REF *VAR_4)
{
 UINT VAR_5;

 if (VAR_4 == ((void*)0))
 {
  return 0;
 }


 FUNC_4(VAR_3);
 FUNC_3(VAR_0);

 VAR_5 = FUNC_0(VAR_4->c);
 if (VAR_5 == 0)
 {

  FUNC_3(VAR_1);
  FUNC_4(VAR_2);

  FUNC_1(VAR_4->c);
  VAR_4->c = 0;
  FUNC_2(VAR_4);
 }
 return VAR_5;
}
