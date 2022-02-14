
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pll_ofreq; } ;
struct TYPE_4__ {int nr; } ;
struct bttv {size_t tvnorm; scalar_t__ input; scalar_t__ dig; TYPE_2__ pll; TYPE_1__ c; } ;
struct TYPE_6__ {int sram; int Fsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int** VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct bttv*) ;

__attribute__((used)) static void FUNC_3(struct bttv *VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8 = VAR_4[VAR_5->tvnorm].sram;
 int VAR_9 = VAR_4[VAR_5->tvnorm].Fsc;

 if (VAR_5->input == VAR_5->dig) {
  FUNC_1("bttv%d: load digital timing table (table_idx=%d)\n",
   VAR_5->c.nr,VAR_8);


  FUNC_0(0x00, VAR_1);
  FUNC_0(0x02, VAR_1);
  FUNC_0(0x00, VAR_1);

  VAR_7=VAR_3[VAR_8][0];
  for(VAR_6 = 1; VAR_6 <= VAR_7; VAR_6++)
   FUNC_0(VAR_3[VAR_8][VAR_6],VAR_2);
  VAR_5->pll.pll_ofreq = 27000000;

  FUNC_2(VAR_5);
  FUNC_0(0x11, VAR_1);
  FUNC_0(0x41, VAR_0);
 } else {
  VAR_5->pll.pll_ofreq = VAR_9;
  FUNC_2(VAR_5);
  FUNC_0(0x0, VAR_0);
 }
}
