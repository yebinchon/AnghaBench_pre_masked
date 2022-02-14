
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int flags; int name; struct bpa10x_data* driver_data; } ;
struct bpa10x_data {int rx_anchor; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct hci_dev *VAR_1)
{
 struct bpa10x_data *VAR_2 = VAR_1->driver_data;
 int VAR_3;

 FUNC_0("%s", VAR_1->name);

 if (FUNC_4(VAR_0, &VAR_1->flags))
  return 0;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 < 0)
  goto error;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 < 0)
  goto error;

 return 0;

error:
 FUNC_5(&VAR_2->rx_anchor);

 FUNC_3(VAR_0, &VAR_1->flags);

 return VAR_3;
}
