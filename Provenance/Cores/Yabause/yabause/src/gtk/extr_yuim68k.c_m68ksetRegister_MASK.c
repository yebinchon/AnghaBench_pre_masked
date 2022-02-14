
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_4__ {void* PC; void* SR; void** A; void** D; } ;
typedef TYPE_1__ m68kregs_struct ;
typedef int YuiM68k ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2( YuiM68k *VAR_0, int VAR_1, u32 VAR_2 ) {


  m68kregs_struct VAR_3;
  FUNC_0(&VAR_3);

  if ( VAR_1 < 8 ) VAR_3.D[VAR_1] = VAR_2;
  else if ( VAR_1 < 16 ) VAR_3.A[VAR_1-8] = VAR_2;
  if ( VAR_1 == 16 ) VAR_3.SR = VAR_2;
  if ( VAR_1 == 17 ) VAR_3.PC = VAR_2;

  FUNC_1(&VAR_3);
}
