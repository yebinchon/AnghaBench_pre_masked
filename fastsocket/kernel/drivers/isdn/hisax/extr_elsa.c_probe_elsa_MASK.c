
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IsdnCardState {int typ; int subtyp; } ;


 int FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static unsigned int
FUNC_1(struct IsdnCardState *VAR_0)
{
 int VAR_1;
 unsigned int VAR_2[] =
 {0x160, 0x170, 0x260, 0x360, 0};

 for (VAR_1 = 0; VAR_2[VAR_1]; VAR_1++) {
  if ((VAR_0->subtyp = FUNC_0(VAR_2[VAR_1], VAR_0->typ)))
   break;
 }
 return (VAR_2[VAR_1]);
}
