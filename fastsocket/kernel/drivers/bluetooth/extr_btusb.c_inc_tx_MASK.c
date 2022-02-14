
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btusb_data {int txlock; int tx_in_flight; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct btusb_data *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_0(&VAR_1->txlock, VAR_2);
 VAR_3 = FUNC_2(VAR_0, &VAR_1->flags);
 if (!VAR_3)
  VAR_1->tx_in_flight++;
 FUNC_1(&VAR_1->txlock, VAR_2);

 return VAR_3;
}
