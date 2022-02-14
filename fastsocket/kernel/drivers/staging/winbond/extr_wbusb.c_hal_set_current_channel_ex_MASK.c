
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wb35_reg {int M28_MacControl; } ;
struct hw_data {int Channel; int band; scalar_t__ SurpriseRemove; struct wb35_reg reg; } ;
typedef int s8 ;
struct TYPE_4__ {int band; int ChanNo; } ;
typedef TYPE_1__ ChanInfo ;


 int FUNC_0 (struct hw_data*,TYPE_1__) ;
 int FUNC_1 (struct hw_data*,int,int,int *,int) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct hw_data *VAR_0, ChanInfo VAR_1)
{
 struct wb35_reg *VAR_2 = &VAR_0->reg;

 if (VAR_0->SurpriseRemove)
  return;

 FUNC_2("Going to channel: %d/%d\n", VAR_1.band, VAR_1.ChanNo);

 FUNC_0(VAR_0, VAR_1);
 VAR_0->Channel = VAR_1.ChanNo;
 VAR_0->band = VAR_1.band;




 VAR_2->M28_MacControl &= ~0xff;
 VAR_2->M28_MacControl |= VAR_1.ChanNo;
 FUNC_1(VAR_0, 0x0828, VAR_2->M28_MacControl,
           (s8 *) & VAR_1, sizeof(ChanInfo));
}
