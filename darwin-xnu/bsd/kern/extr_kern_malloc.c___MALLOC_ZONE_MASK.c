
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vm_size_t ;
typedef int vm_allocation_site_t ;
struct kmzones {scalar_t__ kz_zalloczone; size_t kz_elemsize; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,size_t) ;
 scalar_t__ FUNC_1 (size_t*,int ,int *) ;
 struct kmzones* VAR_6 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

void *
FUNC_5(
 size_t VAR_7,
 int VAR_8,
 int VAR_9,
 vm_allocation_site_t *VAR_10)
{
 struct kmzones *VAR_11;
 void *VAR_12;

 if (VAR_8 >= VAR_2)
  FUNC_2("_malloc_zone TYPE");

 VAR_11 = &VAR_6[VAR_8];
 if (VAR_11->kz_zalloczone == VAR_1)
  FUNC_2("_malloc_zone ZONE: type = %d", VAR_8);


 if (VAR_11->kz_elemsize == (size_t)(-1))
  FUNC_2("_malloc_zone XXX");

 if (VAR_7 == VAR_11->kz_elemsize)
  if (VAR_9 & VAR_3) {
     VAR_12 = (void *)FUNC_4(VAR_11->kz_zalloczone);
  } else {
     VAR_12 = (void *)FUNC_3(VAR_11->kz_zalloczone);
  }
 else {
  vm_size_t VAR_13 = VAR_7;
  if (VAR_7 > VAR_13) {
   VAR_12 = ((void*)0);
  } else if (VAR_9 & VAR_3) {
   VAR_12 = (void *)FUNC_1(&VAR_13, VAR_0, VAR_10);
  } else {
   VAR_12 = (void *)FUNC_1(&VAR_13, VAR_5, VAR_10);
  }
 }

 if (VAR_12 && (VAR_9 & VAR_4))
  FUNC_0(VAR_12, VAR_7);

 return (VAR_12);
}
