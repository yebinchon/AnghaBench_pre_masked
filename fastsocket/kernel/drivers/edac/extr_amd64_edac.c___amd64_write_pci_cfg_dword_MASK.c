
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int devfn; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,int ,int) ;
 int FUNC_2 (struct pci_dev*,int,int ) ;

int FUNC_3(struct pci_dev *VAR_0, int VAR_1,
    u32 VAR_2, const char *VAR_3)
{
 int VAR_4 = 0;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  FUNC_1("%s: error writing to F%dx%03x.\n",
      VAR_3, FUNC_0(VAR_0->devfn), VAR_1);

 return VAR_4;
}
