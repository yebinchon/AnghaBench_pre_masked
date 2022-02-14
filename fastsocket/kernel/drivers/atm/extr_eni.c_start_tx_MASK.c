
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eni_dev {TYPE_1__* tx; int tx_queue; int * ubr; int tx_wait; int tx_mult; int tx_bw; scalar_t__ lost; } ;
struct atm_dev {int dummy; } ;
struct TYPE_2__ {int index; int * send; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct eni_dev* FUNC_0 (struct atm_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct atm_dev *VAR_4)
{
 struct eni_dev *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_4);
 VAR_5->lost = 0;
 VAR_5->tx_bw = VAR_0;
 VAR_5->tx_mult = VAR_1;
 FUNC_2(&VAR_5->tx_wait);
 VAR_5->ubr = ((void*)0);
 FUNC_3(&VAR_5->tx_queue);
 FUNC_1(0,VAR_2);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5->tx[VAR_6].send = ((void*)0);
  VAR_5->tx[VAR_6].index = VAR_6;
 }
 return 0;
}
