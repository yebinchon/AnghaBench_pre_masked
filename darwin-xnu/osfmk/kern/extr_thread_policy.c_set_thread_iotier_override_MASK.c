
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct TYPE_3__ {int iotier_override; int uthread; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

void FUNC_3(thread_t VAR_1, int VAR_2)
{
 int VAR_3;


 do {
  VAR_3 = VAR_1->iotier_override;

  if (VAR_3 != VAR_0)
   VAR_2 = FUNC_0(VAR_3, VAR_2);

  if (VAR_3 == VAR_2) {

   return;
  }
 } while (!FUNC_1(VAR_3, VAR_2, &VAR_1->iotier_override));






 FUNC_2(VAR_1->uthread);
}
