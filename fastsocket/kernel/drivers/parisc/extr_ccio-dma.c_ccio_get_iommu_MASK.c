
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parisc_device {int hw_path; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 struct parisc_device* FUNC_1 (struct parisc_device const*,int ) ;

void * FUNC_2(const struct parisc_device *VAR_1)
{
 VAR_1 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_1)
  return ((void*)0);

 return FUNC_0(VAR_1->hw_path);
}
