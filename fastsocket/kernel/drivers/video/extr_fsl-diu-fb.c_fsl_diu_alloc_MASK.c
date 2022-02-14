
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (size_t,int) ;
 int FUNC_1 (char*,void*,...) ;
 scalar_t__ FUNC_2 (void*) ;

__attribute__((used)) static void *FUNC_3(size_t VAR_2, phys_addr_t *VAR_3)
{
 void *VAR_4;

 FUNC_1("size=%zu\n", VAR_2);

 VAR_4 = FUNC_0(VAR_2, VAR_0 | VAR_1);
 if (VAR_4) {
  *VAR_3 = FUNC_2(VAR_4);
  FUNC_1("virt=%p phys=%llx\n", VAR_4,
   (unsigned long long)*VAR_3);
 }

 return VAR_4;
}
