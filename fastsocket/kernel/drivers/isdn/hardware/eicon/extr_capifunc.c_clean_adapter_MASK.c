
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_8__ {struct TYPE_8__* coef_table; struct TYPE_8__* flag_table; } ;
struct TYPE_7__ {int li_channels; int li_base; scalar_t__ request; scalar_t__ plci; } ;
typedef int LI_CONFIG ;
typedef TYPE_1__ DIVA_CAPI_ADAPTER ;


 TYPE_1__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct list_head*,struct list_head*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_3(int VAR_4, struct list_head *VAR_5)
{
 DIVA_CAPI_ADAPTER *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = &VAR_0[VAR_4];
 VAR_8 = VAR_2 - VAR_6->li_channels;
 if (VAR_8 == 0) {
  if (VAR_1) {
   FUNC_0((struct list_head *)VAR_1, VAR_5);
   VAR_1 = ((void*)0);
  }
 } else {
  if (VAR_6->li_base < VAR_8) {
   FUNC_1(&VAR_1[VAR_6->li_base],
    &VAR_1[VAR_6->li_base + VAR_6->li_channels],
    (VAR_8 - VAR_6->li_base) * sizeof(LI_CONFIG));
   for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
    FUNC_1(&VAR_1[VAR_7].flag_table[VAR_6->li_base],
     &VAR_1[VAR_7].flag_table[VAR_6->li_base + VAR_6->li_channels],
     VAR_8 - VAR_6->li_base);
    FUNC_1(&VAR_1[VAR_7].
     coef_table[VAR_6->li_base],
     &VAR_1[VAR_7].coef_table[VAR_6->li_base + VAR_6->li_channels],
     VAR_8 - VAR_6->li_base);
   }
  }
 }
 VAR_2 = VAR_8;
 for (VAR_7 = VAR_4; VAR_7 < VAR_3; VAR_7++) {
  if (VAR_0[VAR_7].request)
   VAR_0[VAR_7].li_base -= VAR_6->li_channels;
 }
 if (VAR_6->plci)
  FUNC_0((struct list_head *)VAR_6->plci, VAR_5);

 FUNC_2(VAR_6, 0x00, sizeof(DIVA_CAPI_ADAPTER));
 while ((VAR_3 != 0) && !VAR_0[VAR_3 - 1].request)
  VAR_3--;
}
