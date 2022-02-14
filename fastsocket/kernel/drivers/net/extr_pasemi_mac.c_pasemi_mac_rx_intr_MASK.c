
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasemi_dmachan {int* status; int chno; } ;
struct pasemi_mac_rxring {struct pasemi_dmachan chan; struct pasemi_mac* mac; } ;
struct pasemi_mac {int napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 const struct pasemi_mac_rxring *VAR_9 = VAR_8;
 struct pasemi_mac *VAR_10 = VAR_9->mac;
 const struct pasemi_dmachan *VAR_11 = &VAR_9->chan;
 unsigned int VAR_12;

 if (!(*VAR_11->status & VAR_4))
  return VAR_1;





 VAR_12 = 0;
 if (*VAR_11->status & VAR_6)
  VAR_12 |= VAR_3;
 if (*VAR_11->status & VAR_5)
  VAR_12 |= VAR_2;

 FUNC_1(&VAR_10->napi);

 FUNC_2(FUNC_0(VAR_11->chno), VAR_12);

 return VAR_0;
}
