
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int pci_fn; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (struct tg3*,int,int) ;
 scalar_t__ FUNC_1 (struct tg3*) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_5)
{
 int VAR_6;
 u32 VAR_7, VAR_8;

 if (FUNC_1(VAR_5) == VAR_1)
  VAR_7 = VAR_3;
 else
  VAR_7 = VAR_4;


 for (VAR_6 = 131; VAR_6 <= VAR_2; VAR_6++) {
  switch (VAR_6) {
  case 131:
  case 130:
  case 129:
  case 128:
   VAR_8 = VAR_0;
   break;
  default:
   if (!VAR_5->pci_fn)
    VAR_8 = VAR_0;
   else
    VAR_8 = 1 << VAR_5->pci_fn;
  }
  FUNC_0(VAR_5, VAR_7 + 4 * VAR_6, VAR_8);
 }

}
