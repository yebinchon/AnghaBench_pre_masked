
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
struct TYPE_3__ {scalar_t__ pci_cfg; } ;
struct TYPE_4__ {TYPE_1__ diva; } ;
struct IsdnCardState {int lock; TYPE_2__ hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct IsdnCardState*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static irqreturn_t
FUNC_3(int VAR_3, void *VAR_4)
{
 struct IsdnCardState *VAR_5 = VAR_4;
 u_char VAR_6;
 u_char *VAR_7;
 u_long VAR_8;

 FUNC_1(&VAR_5->lock, VAR_8);
 VAR_7 = (u_char *) VAR_5->hw.diva.pci_cfg;
 VAR_6 = *VAR_7;
 if (!(VAR_6 &VAR_2)) {
  FUNC_2(&VAR_5->lock, VAR_8);
  return VAR_1;
 }
  FUNC_0(VAR_5);
 *VAR_7 = VAR_2;
 FUNC_2(&VAR_5->lock, VAR_8);
 return VAR_0;
}
