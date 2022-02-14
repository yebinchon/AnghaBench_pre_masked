
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static inline void FUNC_7(int VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_4(FUNC_1(VAR_2));


 if (FUNC_2()) {
  FUNC_5(0, FUNC_0(VAR_2));

  VAR_3 |= 1 << 14;
 }

 if (FUNC_3()) {
  FUNC_6(VAR_2);

  VAR_3 &= ~(1 << 15);
 }

 FUNC_5(VAR_3, FUNC_1(VAR_2));
 VAR_1[VAR_2].flags &= ~VAR_0;
}
