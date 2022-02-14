
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct parisc_device {struct device dev; } ;
struct hardware_path {int* bc; int mod; } ;


 struct parisc_device* FUNC_0 (struct device*,int) ;
 struct device VAR_0 ;

__attribute__((used)) static struct parisc_device *FUNC_1(struct hardware_path *VAR_1)
{
 int VAR_2;
 struct device *VAR_3 = &VAR_0;
 for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
  if (VAR_1->bc[VAR_2] == -1)
   continue;
  VAR_3 = &FUNC_0(VAR_3, VAR_1->bc[VAR_2])->dev;
 }
 return FUNC_0(VAR_3, VAR_1->mod);
}
