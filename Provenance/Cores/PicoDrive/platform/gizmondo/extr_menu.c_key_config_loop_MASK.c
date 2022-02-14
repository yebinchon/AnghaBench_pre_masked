
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mask; } ;
typedef TYPE_1__ me_bind_action ;
struct TYPE_6__ {int* KeyBinds; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int,int) ;
 TYPE_4__ VAR_6 ;
 int FUNC_1 (TYPE_1__ const*,int,int,int) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(const me_bind_action *VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10 = 0, VAR_11 = VAR_8, VAR_12 = 0, VAR_13;
 unsigned long VAR_14 = 0;

 for (;;)
 {
  FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10);
  VAR_14 = FUNC_2(VAR_0|VAR_2);
  if (!(VAR_14 & VAR_2)) {
   VAR_12 = 0;
   if(VAR_14 & VAR_5 ) { VAR_10--; if (VAR_10 < 0) VAR_10 = VAR_11; continue; }
   if(VAR_14 & VAR_1) { VAR_10++; if (VAR_10 > VAR_11) VAR_10 = 0; continue; }
  }
  if (VAR_10 >= VAR_8) {
   if (VAR_14 & (VAR_3|VAR_4)) break;
   else continue;
  }

  if ((VAR_14 & VAR_2) && !VAR_12)
   FUNC_3(VAR_7[VAR_10].mask);
  VAR_12 = VAR_14 & VAR_2;
  VAR_14 &= VAR_0;
  VAR_14 &= ~VAR_2;
  for (VAR_13 = 0; VAR_13 < 32; VAR_13++)
   if (VAR_14 & (1 << VAR_13)) {
    if (FUNC_0(VAR_7[VAR_10].mask, VAR_9) >= 2)
         VAR_6.KeyBinds[VAR_13] &= ~VAR_7[VAR_10].mask;
    else VAR_6.KeyBinds[VAR_13] ^= VAR_7[VAR_10].mask;
    if (VAR_9 >= 0 && (VAR_6.KeyBinds[VAR_13] & VAR_7[VAR_10].mask)) {
     VAR_6.KeyBinds[VAR_13] &= ~(3 << 16);
     VAR_6.KeyBinds[VAR_13] |= VAR_9 << 16;
    }
   }
 }
}
