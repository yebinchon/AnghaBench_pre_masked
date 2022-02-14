
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int flags; int name; struct btsdio_data* driver_data; } ;
struct btsdio_data {int func; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ,int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct hci_dev *VAR_2)
{
 struct btsdio_data *VAR_3 = VAR_2->driver_data;

 FUNC_0("%s", VAR_2->name);

 if (!FUNC_6(VAR_0, &VAR_2->flags))
  return 0;

 FUNC_1(VAR_3->func);

 FUNC_5(VAR_3->func, 0x00, VAR_1, ((void*)0));

 FUNC_4(VAR_3->func);
 FUNC_2(VAR_3->func);

 FUNC_3(VAR_3->func);

 return 0;
}
