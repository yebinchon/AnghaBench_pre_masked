
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 unsigned long FUNC_0 (unsigned long,unsigned long,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_6, unsigned long *VAR_7,
      unsigned long *VAR_8)
{
 if (!FUNC_1(VAR_4) && (VAR_6 & VAR_0)) {
  unsigned long VAR_9;







  *VAR_7 = 0x40000000;
  *VAR_8 = 0x80000000;
  if (VAR_5->flags & VAR_1) {
   VAR_9 = FUNC_0(*VAR_7, *VAR_7 + 0x02000000, 0);
   if (VAR_9)
    *VAR_7 = VAR_9;
  }
 } else {
  *VAR_7 = VAR_3;
  *VAR_8 = VAR_2;
 }
}
