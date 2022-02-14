
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int pc; } ;
typedef TYPE_1__ arm_saved_state64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static void
FUNC_3(arm_saved_state64_t *VAR_0, uint32_t VAR_1, uint32_t VAR_2, int VAR_3, user_addr_t *VAR_4)
{
 uint32_t VAR_5;
 uint64_t VAR_6;
 uint64_t VAR_7;


 VAR_5 = (VAR_2 & 0x1f);
 FUNC_0(VAR_5 <= 31);
 VAR_6 = FUNC_2(VAR_0, VAR_5, 1);


 if (VAR_1 == 32) {
  VAR_6 &= 0xFFFFFFFFULL;
 }


 VAR_7 = FUNC_1(VAR_2, 5, 19);


 if ((VAR_3 && VAR_6 == 0) || ((!VAR_3) && VAR_6 != 0)) {

  *VAR_4 = VAR_0->pc + VAR_7;
 } else {

  *VAR_4 = VAR_0->pc + 4;
 }
}
