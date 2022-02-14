
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kimage {int nr_segments; TYPE_1__* segment; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int hpte_clear_all; } ;
struct TYPE_3__ {unsigned long mem; unsigned long memsz; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 struct device_node* FUNC_1 (struct device_node*,char*) ;
 void* FUNC_2 (struct device_node*,char*,int *) ;
 TYPE_2__ VAR_5 ;

int FUNC_3(struct kimage *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8, VAR_9;
 unsigned long VAR_10, VAR_11;
 struct device_node *VAR_12;
 const unsigned long *VAR_13;
 const unsigned int *VAR_14;

 if (!VAR_5.hpte_clear_all)
  return -VAR_0;






 for (VAR_7 = 0; VAR_7 < VAR_6->nr_segments; VAR_7++)
  if (VAR_6->segment[VAR_7].mem < FUNC_0(VAR_2))
   return -VAR_1;
 if (VAR_3) {
  VAR_10 = FUNC_0(VAR_3);
  VAR_11 = VAR_10 + VAR_4;

  for (VAR_7 = 0; VAR_7 < VAR_6->nr_segments; VAR_7++) {
   VAR_8 = VAR_6->segment[VAR_7].mem;
   VAR_9 = VAR_8 + VAR_6->segment[VAR_7].memsz;

   if ((VAR_8 < VAR_11) && (VAR_9 > VAR_10))
    return -VAR_1;
  }
 }


 for (VAR_12 = FUNC_1(((void*)0), "pci"); VAR_12 != ((void*)0);
   VAR_12 = FUNC_1(VAR_12, "pci")) {
  VAR_13 = FUNC_2(VAR_12, "linux,tce-base", ((void*)0));
  VAR_14 = FUNC_2(VAR_12, "linux,tce-size", ((void*)0));
  if (VAR_13 == ((void*)0) || VAR_14 == ((void*)0))
   continue;

  VAR_10 = *VAR_13;
  VAR_11 = VAR_10 + (*VAR_14);

  for (VAR_7 = 0; VAR_7 < VAR_6->nr_segments; VAR_7++) {
   VAR_8 = VAR_6->segment[VAR_7].mem;
   VAR_9 = VAR_8 + VAR_6->segment[VAR_7].memsz;

   if ((VAR_8 < VAR_11) && (VAR_9 > VAR_10))
    return -VAR_1;
  }
 }

 return 0;
}
