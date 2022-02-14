
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int driver_data; int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0("%s", VAR_0->name);
 FUNC_1(VAR_0->driver_data);
}
