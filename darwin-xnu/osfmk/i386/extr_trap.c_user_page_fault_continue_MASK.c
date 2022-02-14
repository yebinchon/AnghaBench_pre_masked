
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cr2; } ;
typedef TYPE_1__ x86_saved_state64_t ;
struct TYPE_6__ {scalar_t__ cr2; } ;
typedef TYPE_2__ x86_saved_state32_t ;
typedef scalar_t__ user_addr_t ;
typedef int thread_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static inline void
FUNC_6(
    kern_return_t VAR_1)
{
 thread_t VAR_2 = FUNC_2();
 user_addr_t VAR_3;

 if (FUNC_5(VAR_2)) {
  x86_saved_state64_t *VAR_4;

  VAR_4 = FUNC_1(VAR_2);

  VAR_3 = (user_addr_t)VAR_4->cr2;
 } else {
         x86_saved_state32_t *VAR_5;

  VAR_5 = FUNC_0(VAR_2);

  VAR_3 = VAR_5->cr2;
 }



 FUNC_4( VAR_2, VAR_3, VAR_1 );

 FUNC_3(VAR_0, VAR_1, VAR_3);

}
