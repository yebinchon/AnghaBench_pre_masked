
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_data {int rx_status; int rxwaitq; int wsem; int rxdata; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct channel_data *VAR_0)
{
 if (VAR_0->rx_status) {
  FUNC_0(VAR_0->rxdata);
  FUNC_1(&VAR_0->wsem);
 }
 VAR_0->rx_status = 1;
 FUNC_2(&VAR_0->rxwaitq);
 return 1;
}
