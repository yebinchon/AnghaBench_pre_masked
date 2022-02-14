
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parisc_device {char hw_path; } ;
struct hardware_path {char mod; char* bc; } ;
struct device {int dummy; } ;


 struct parisc_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, int VAR_1,
  struct hardware_path *VAR_2)
{
 struct parisc_device *VAR_3 = FUNC_0(VAR_0);
 char VAR_4 = (VAR_1 == 6) ? VAR_2->mod : VAR_2->bc[VAR_1];

 return (VAR_3->hw_path == VAR_4);
}
