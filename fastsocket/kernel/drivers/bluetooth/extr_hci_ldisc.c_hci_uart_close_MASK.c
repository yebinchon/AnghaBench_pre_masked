
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int * flush; int flags; } ;


 int FUNC_0 (char*,struct hci_dev*) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct hci_dev *VAR_1)
{
 FUNC_0("hdev %p", VAR_1);

 if (!FUNC_2(VAR_0, &VAR_1->flags))
  return 0;

 FUNC_1(VAR_1);
 VAR_1->flush = ((void*)0);
 return 0;
}
