
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sh_mobile_lcdc_priv {TYPE_1__* ch; } ;
struct TYPE_3__ {int enabled; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (struct sh_mobile_lcdc_priv*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (struct sh_mobile_lcdc_priv*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct sh_mobile_lcdc_priv *VAR_4,
          int VAR_5)
{
 unsigned long VAR_6 = FUNC_2(VAR_4, VAR_2);
 int VAR_7;


 if (VAR_5)
  FUNC_4(VAR_4, VAR_2, VAR_6 | VAR_1);
 else
  FUNC_4(VAR_4, VAR_2, VAR_6 & ~VAR_1);


 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4->ch); VAR_7++)
  if (FUNC_2(VAR_4, VAR_2) & VAR_4->ch[VAR_7].enabled)
   while (1) {
    VAR_6 = FUNC_3(&VAR_4->ch[VAR_7], VAR_0) & 3;
    if (VAR_5 && VAR_6 == 3)
     break;
    if (!VAR_5 && VAR_6 == 0)
     break;
    FUNC_1();
   }

 if (!VAR_5)
  FUNC_4(VAR_4, VAR_3, 1);
}
