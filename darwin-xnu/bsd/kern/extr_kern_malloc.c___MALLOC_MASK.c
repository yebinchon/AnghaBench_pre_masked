
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vm_size_t ;
typedef int vm_allocation_site_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,size_t) ;
 scalar_t__ FUNC_1 (size_t*,int ,int *) ;
 int FUNC_2 (char*,...) ;

void *
FUNC_3(
 size_t VAR_6,
 int VAR_7,
 int VAR_8,
 vm_allocation_site_t *VAR_9)
{
 void *VAR_10 = ((void*)0);
 vm_size_t VAR_11 = VAR_6;

 if (VAR_7 >= VAR_1)
  FUNC_2("_malloc TYPE");

 if (VAR_6 == 0)
  return (((void*)0));

 if (VAR_11 != VAR_6) {
  FUNC_2("Requested size to __MALLOC is too large (%llx)!\n", (uint64_t)VAR_6);
 }

 if (VAR_8 & VAR_2) {
  VAR_10 = (void *)FUNC_1(&VAR_11, VAR_0, VAR_9);
 } else {
  VAR_10 = (void *)FUNC_1(&VAR_11, VAR_5, VAR_9);
  if (VAR_10 == ((void*)0)) {
   if (VAR_8 & VAR_3) {
    return ((void*)0);
   }
   FUNC_2("_MALLOC: kalloc returned NULL (potential leak), size %llu", (uint64_t) VAR_6);
  }
 }
 if (!VAR_10)
  return (0);

 if (VAR_8 & VAR_4)
  FUNC_0(VAR_10, VAR_6);

 return (VAR_10);
}
