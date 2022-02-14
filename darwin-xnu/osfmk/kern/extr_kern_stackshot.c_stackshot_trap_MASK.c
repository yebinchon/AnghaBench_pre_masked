
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int kern_return_t ;
struct TYPE_2__ {scalar_t__ cpu_rendezvous_in_progress; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int *,int ,int *,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;

__attribute__((used)) static kern_return_t
FUNC_5()
{
 kern_return_t VAR_3;
 if (FUNC_1()->cpu_rendezvous_in_progress == VAR_2) {
  FUNC_4("Calling stackshot from a rendezvous is not allowed!");
 }

 FUNC_2();


 VAR_3 = FUNC_0(VAR_0, ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0), VAR_1, 0);


 FUNC_3();

 return (VAR_3);
}
