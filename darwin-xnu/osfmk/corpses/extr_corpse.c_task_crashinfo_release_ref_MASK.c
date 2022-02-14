
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union corpse_creation_gate {int value; int corpses; int user_faults; } ;
typedef int uint16_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static kern_return_t
FUNC_4(uint16_t VAR_5)
{
 union corpse_creation_gate VAR_6, VAR_7;

 FUNC_0(VAR_5 & VAR_0);

 VAR_6.value = FUNC_2(&VAR_3, VAR_4);
 for (;;) {
  VAR_7 = VAR_6;
  if (VAR_5 & VAR_1) {
   if (VAR_7.user_faults-- == 0) {
    FUNC_3("corpse in flight count over-release");
   }
  }
  if (VAR_7.corpses-- == 0) {
   FUNC_3("corpse in flight count over-release");
  }

  if (FUNC_1(&VAR_3,
    &VAR_6.value, VAR_7.value, VAR_4,
    VAR_4)) {
   return VAR_2;
  }
 }
}
