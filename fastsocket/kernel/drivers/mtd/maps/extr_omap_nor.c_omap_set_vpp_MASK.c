
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct map_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct map_info *VAR_2, int VAR_3)
{
 static int VAR_4;
 u32 VAR_5;

 if (FUNC_0()) {
  if (VAR_3) {
   if (VAR_4++ == 0) {
    VAR_5 = FUNC_1(VAR_0);
    VAR_5 |= VAR_1;
    FUNC_2(VAR_5, VAR_0);
   }
  } else {
   if (VAR_4 && (--VAR_4 == 0)) {
    VAR_5 = FUNC_1(VAR_0);
    VAR_5 &= ~VAR_1;
    FUNC_2(VAR_5, VAR_0);
   }
  }
 }
}
