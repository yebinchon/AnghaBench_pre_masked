
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; struct bpa10x_data* driver_data; } ;
struct bpa10x_data {int tx_anchor; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct hci_dev *VAR_0)
{
 struct bpa10x_data *VAR_1 = VAR_0->driver_data;

 FUNC_0("%s", VAR_0->name);

 FUNC_1(&VAR_1->tx_anchor);

 return 0;
}
