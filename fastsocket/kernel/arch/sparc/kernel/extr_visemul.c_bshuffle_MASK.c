
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct fpustate {int dummy; } ;
struct TYPE_2__ {unsigned long* gsr; } ;


 struct fpustate* VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 TYPE_1__* FUNC_3 () ;
 unsigned long* FUNC_4 (struct fpustate*,int ) ;
 unsigned long FUNC_5 (struct fpustate*,int ) ;

__attribute__((used)) static void FUNC_6(struct pt_regs *VAR_1, unsigned int VAR_2)
{
 struct fpustate *VAR_3 = VAR_0;
 unsigned long VAR_4, VAR_5, VAR_6;
 unsigned long VAR_7, VAR_8;

 VAR_7 = FUNC_3()->gsr[0] >> 32UL;

 VAR_4 = FUNC_5(VAR_3, FUNC_1(VAR_2));
 VAR_5 = FUNC_5(VAR_3, FUNC_2(VAR_2));

 VAR_6 = 0UL;
 for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
  unsigned long VAR_9 = (VAR_7 >> (VAR_8 * 4)) & 0xf;
  unsigned long VAR_10;

  if (VAR_9 < 8)
   VAR_10 = (VAR_4 >> (VAR_9 * 8)) & 0xff;
  else
   VAR_10 = (VAR_5 >> ((VAR_9-8)*8)) & 0xff;
  VAR_6 |= (VAR_10 << (VAR_8 * 8));
 }

 *FUNC_4(VAR_3, FUNC_0(VAR_2)) = VAR_6;
}
