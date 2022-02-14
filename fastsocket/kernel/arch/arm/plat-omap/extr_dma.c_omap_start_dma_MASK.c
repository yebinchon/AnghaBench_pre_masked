
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
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 TYPE_1__* VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 () ;

void FUNC_12(int VAR_5)
{
 u32 VAR_6;

 if (!FUNC_9() && VAR_4[VAR_5].next_lch != -1) {
  int VAR_7, VAR_8;
  char VAR_9[VAR_1];

  VAR_9[VAR_5] = 1;

  FUNC_7(VAR_5);

  FUNC_8(VAR_9, 0, sizeof(VAR_9));
  VAR_8 = VAR_4[VAR_5].next_lch;
  do {
   VAR_7 = VAR_4[VAR_8].next_lch;


   if (VAR_9[VAR_8])
    break;

   VAR_9[VAR_8] = 1;

   FUNC_7(VAR_8);
   FUNC_10(VAR_8);

   VAR_8 = VAR_7;
  } while (VAR_7 != -1);
 } else if (FUNC_2() ||
  (FUNC_3() && FUNC_11() <= VAR_0)) {


  FUNC_6(VAR_5, FUNC_1(VAR_5));
 }

 FUNC_10(VAR_5);

 VAR_6 = FUNC_5(FUNC_0(VAR_5));





 if (FUNC_4())
  VAR_6 |= VAR_3;

 VAR_6 |= VAR_3;
 FUNC_6(VAR_6, FUNC_0(VAR_5));

 VAR_4[VAR_5].flags |= VAR_2;
}
