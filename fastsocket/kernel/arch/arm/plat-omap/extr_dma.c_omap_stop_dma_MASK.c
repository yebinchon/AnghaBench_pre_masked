
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int dma_chan_link_map ;
struct TYPE_2__ {int next_lch; int flags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 () ;

void FUNC_8(int VAR_4)
{
 u32 VAR_5;


 if (FUNC_2())
  FUNC_5(0, FUNC_1(VAR_4));

 VAR_5 = FUNC_4(FUNC_0(VAR_4));
 VAR_5 &= ~VAR_2;
 FUNC_5(VAR_5, FUNC_0(VAR_4));

 if (!FUNC_7() && VAR_3[VAR_4].next_lch != -1) {
  int VAR_6, VAR_7 = VAR_4;
  char VAR_8[VAR_0];

  FUNC_6(VAR_8, 0, sizeof(VAR_8));
  do {

   if (VAR_8[VAR_7])
    break;

   VAR_8[VAR_7] = 1;

   FUNC_3(VAR_7);

   VAR_6 = VAR_3[VAR_7].next_lch;
   VAR_7 = VAR_6;
  } while (VAR_6 != -1);
 }

 VAR_3[VAR_4].flags &= ~VAR_1;
}
