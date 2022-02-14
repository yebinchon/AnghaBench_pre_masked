
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cadet {int io; } ;


 int FUNC_0 (struct cadet*) ;
 int FUNC_1 (struct cadet*,int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int,int,char*) ;

__attribute__((used)) static void FUNC_4(struct cadet *VAR_0)
{
 static int VAR_1[8] = { 0x330, 0x332, 0x334, 0x336, 0x338, 0x33a, 0x33c, 0x33e };
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  VAR_0->io = VAR_1[VAR_2];
  if (FUNC_3(VAR_0->io, 2, "cadet-probe")) {
   FUNC_1(VAR_0, 1410);
   if (FUNC_0(VAR_0) == 1410) {
    FUNC_2(VAR_0->io, 2);
    return;
   }
   FUNC_2(VAR_0->io, 2);
  }
 }
 VAR_0->io = -1;
}
