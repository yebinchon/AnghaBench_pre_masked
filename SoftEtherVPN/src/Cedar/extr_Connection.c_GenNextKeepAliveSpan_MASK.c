
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {TYPE_1__* Session; } ;
struct TYPE_4__ {int Timeout; } ;
typedef TYPE_2__ CONNECTION ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 () ;

UINT FUNC_2(CONNECTION *VAR_1)
{
 UINT VAR_2, VAR_3;

 if (VAR_1 == ((void*)0))
 {
  return VAR_0;
 }

 VAR_2 = VAR_1->Session->Timeout;
 VAR_3 = FUNC_1() % (VAR_2 / 2);
 VAR_3 = FUNC_0(VAR_3, VAR_2 / 5);

 return VAR_3;
}
