
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct nouveau_cli {int mutex; int base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,int ,int ,int ,int,void**) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static int
FUNC_4(struct pci_dev *VAR_2, const char *VAR_3,
     int VAR_4, void **VAR_5)
{
 struct nouveau_cli *VAR_6;
 int VAR_7;

 *VAR_5 = ((void*)0);
 VAR_7 = FUNC_1(VAR_3, FUNC_3(VAR_2), VAR_0,
         VAR_1, VAR_4, VAR_5);
 VAR_6 = *VAR_5;
 if (VAR_7) {
  if (VAR_6)
   FUNC_2(&VAR_6->base);
  *VAR_5 = ((void*)0);
  return VAR_7;
 }

 FUNC_0(&VAR_6->mutex);
 return 0;
}
