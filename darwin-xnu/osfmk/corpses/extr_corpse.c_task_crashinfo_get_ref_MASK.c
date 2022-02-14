
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
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static kern_return_t
FUNC_3(uint16_t VAR_8)
{
 union corpse_creation_gate VAR_9, VAR_10;

 FUNC_0(VAR_8 & VAR_0);

 VAR_9.value = FUNC_2(&VAR_6, VAR_7);
 for (;;) {
  VAR_10 = VAR_9;
  if (VAR_8 & VAR_1) {
   if (VAR_10.user_faults++ >= VAR_5) {
    return VAR_2;
   }
  }
  if (VAR_10.corpses++ >= VAR_4) {
   return VAR_2;
  }


  if (FUNC_1(&VAR_6,
    &VAR_9.value, VAR_10.value, VAR_7,
    VAR_7)) {
   return VAR_3;
  }
 }
}
