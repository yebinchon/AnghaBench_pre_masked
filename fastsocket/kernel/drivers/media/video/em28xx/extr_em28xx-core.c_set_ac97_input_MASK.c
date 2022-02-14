
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct em28xx {int ctl_ainput; } ;
typedef enum em28xx_amux { ____Placeholder_em28xx_amux } em28xx_amux ;
struct TYPE_3__ {int mux; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct em28xx*,int ,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct em28xx *VAR_3)
{
 int VAR_4, VAR_5;
 enum em28xx_amux VAR_6 = VAR_3->ctl_ainput;




 if (VAR_6 == VAR_1)
  VAR_6 = VAR_0;


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  if (VAR_6 == VAR_2[VAR_5].mux)
   VAR_4 = FUNC_2(VAR_3, VAR_2[VAR_5].reg, 0x0808);
  else
   VAR_4 = FUNC_2(VAR_3, VAR_2[VAR_5].reg, 0x8000);

  if (VAR_4 < 0)
   FUNC_1("couldn't setup AC97 register %d\n",
         VAR_2[VAR_5].reg);
 }
 return 0;
}
