
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int uint64_t ;
struct regs {int dummy; } ;
struct arm_saved_state {int dummy; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct arm_saved_state*,int ) ;
 scalar_t__ FUNC_2 (struct arm_saved_state*,int ) ;
 scalar_t__ FUNC_3 (struct arm_saved_state*) ;

uint64_t
FUNC_4(struct regs * VAR_6, uint_t VAR_7)
{
 struct arm_saved_state *VAR_8 = (struct arm_saved_state *) VAR_6;

 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_5);
  return (0);
 }

 if (FUNC_3(VAR_8)) {

  switch (VAR_7) {
   case 131:
    VAR_7 = VAR_1;
   break;
   case 128:
    VAR_7 = VAR_4;
   break;
   case 130:
    VAR_7 = VAR_2;
   break;
   case 129:
    VAR_7 = VAR_3;
   break;
   case 132:
    VAR_7 = VAR_0;
   break;
  }
 }

 if (!FUNC_1(VAR_8, VAR_7)) {
  FUNC_0(VAR_5);
  return (0);
 }

 return ((uint64_t)FUNC_2(VAR_8, VAR_7));
}
