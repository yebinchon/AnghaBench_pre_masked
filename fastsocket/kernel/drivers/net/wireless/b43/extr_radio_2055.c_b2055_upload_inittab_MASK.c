
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_wldev {int dummy; } ;
struct b2055_inittab_entry {int flags; int ghz2; int ghz5; } ;


 unsigned int FUNC_0 (struct b2055_inittab_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct b2055_inittab_entry* VAR_3 ;
 int FUNC_1 (struct b43_wldev*,unsigned int,int ) ;
 int FUNC_2 (struct b43_wldev*,int ) ;

void FUNC_3(struct b43_wldev *VAR_4,
     bool VAR_5, bool VAR_6)
{
 const struct b2055_inittab_entry *VAR_7;
 unsigned int VAR_8, VAR_9 = 0;
 u16 VAR_10;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++) {
  VAR_7 = &(VAR_3[VAR_8]);
  if (!(VAR_7->flags & VAR_0))
   continue;
  if ((VAR_7->flags & VAR_1) || VAR_6) {
   if (VAR_5)
    VAR_10 = VAR_7->ghz5;
   else
    VAR_10 = VAR_7->ghz2;
   FUNC_1(VAR_4, VAR_8, VAR_10);
   if (++VAR_9 % 4 == 0)
    FUNC_2(VAR_4, VAR_2);
  }
 }
}
