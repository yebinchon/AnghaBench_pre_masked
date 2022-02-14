
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int flags; int name; struct bpa10x_data* driver_data; } ;
struct bpa10x_data {int rx_anchor; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hci_dev *VAR_1)
{
 struct bpa10x_data *VAR_2 = VAR_1->driver_data;

 FUNC_0("%s", VAR_1->name);

 if (!FUNC_1(VAR_0, &VAR_1->flags))
  return 0;

 FUNC_2(&VAR_2->rx_anchor);

 return 0;
}
