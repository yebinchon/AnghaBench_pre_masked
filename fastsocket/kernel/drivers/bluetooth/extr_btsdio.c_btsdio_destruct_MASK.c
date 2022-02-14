
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; struct btsdio_data* driver_data; } ;
struct btsdio_data {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct btsdio_data*) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_0)
{
 struct btsdio_data *VAR_1 = VAR_0->driver_data;

 FUNC_0("%s", VAR_0->name);

 FUNC_1(VAR_1);
}
