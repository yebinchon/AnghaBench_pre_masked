
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fritzcard {int name; } ;
struct bchannel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bchannel*,int) ;
 struct bchannel* FUNC_1 (struct fritzcard*,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct fritzcard*,int) ;

__attribute__((used)) static inline void
FUNC_4(struct fritzcard *VAR_1)
{
 u32 VAR_2;
 struct bchannel *VAR_3;

 VAR_2 = FUNC_3(VAR_1, 1);
 if (VAR_2 & VAR_0) {
  VAR_3 = FUNC_1(VAR_1, 1);
  if (VAR_3)
   FUNC_0(VAR_3, VAR_2);
  else
   FUNC_2("%s: spurious ch1 IRQ\n", VAR_1->name);
 }
 VAR_2 = FUNC_3(VAR_1, 2);
 if (VAR_2 & VAR_0) {
  VAR_3 = FUNC_1(VAR_1, 2);
  if (VAR_3)
   FUNC_0(VAR_3, VAR_2);
  else
   FUNC_2("%s: spurious ch2 IRQ\n", VAR_1->name);
 }
}
