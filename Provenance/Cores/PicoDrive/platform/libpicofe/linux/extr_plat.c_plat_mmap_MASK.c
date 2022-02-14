
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,void*,void*,...) ;
 void* FUNC_1 (void*,size_t,int,int,int,int ) ;
 int VAR_10 ;

void *FUNC_2(unsigned long VAR_11, size_t VAR_12, int VAR_13, int VAR_14)
{
 static int VAR_15;
 int VAR_16 = VAR_7 | VAR_8;
 int VAR_17 = VAR_5 | VAR_1;
 void *VAR_18, *VAR_19;

 VAR_18 = (void *)VAR_11;
 if (VAR_13)
  VAR_16 |= VAR_6;
 if (VAR_14)
  VAR_17 |= VAR_3;
 if (VAR_12 >= VAR_0)
  VAR_17 |= VAR_4;

 VAR_19 = FUNC_1(VAR_18, VAR_12, VAR_16, VAR_17, -1, 0);
 if (VAR_19 == VAR_2 && (VAR_17 & VAR_4)) {
  if (!VAR_15) {
   FUNC_0(VAR_10,
    "warning: failed to do hugetlb mmap (%p, %zu): %d\n",
    VAR_18, VAR_12, VAR_9);
   VAR_15 = 1;
  }
  VAR_17 &= ~VAR_4;
  VAR_19 = FUNC_1(VAR_18, VAR_12, VAR_16, VAR_17, -1, 0);
 }
 if (VAR_19 == VAR_2)
  return ((void*)0);

 if (VAR_18 != ((void*)0) && VAR_19 != VAR_18)
  FUNC_0(VAR_10,
   "warning: mmaped to %p, requested %p\n", VAR_19, VAR_18);

 return VAR_19;
}
