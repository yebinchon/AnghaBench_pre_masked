
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int kern_return_t ;
struct TYPE_8__ {scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

kern_return_t
FUNC_4(
 thread_t VAR_5)
{
 kern_return_t VAR_6 = VAR_1;

 if (VAR_5 == VAR_4)
  return (VAR_0);

 FUNC_2(VAR_5);

 if (VAR_5->active) {
  FUNC_0(VAR_5);
  FUNC_1(VAR_5, VAR_3);
 }
 else
  VAR_6 = VAR_2;

 FUNC_3(VAR_5);

 return (VAR_6);
}
