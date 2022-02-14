
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned long,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (unsigned long,int) ;

__attribute__((used)) static inline void *FUNC_4(struct pci_dev *VAR_4,
   unsigned long VAR_5,
   struct pci_dev **VAR_6,
   struct pci_dev **VAR_7)
{
 gfp_t VAR_8;
 void *VAR_9;
 unsigned long VAR_10 = 0;
 int VAR_11 = 0;
 *VAR_7 = *VAR_6 = ((void*)0);

 if (FUNC_1())
  VAR_8 = VAR_0 | VAR_1;
 else
  VAR_8 = VAR_2 | VAR_1;
realloc:
 VAR_9 = FUNC_3((VAR_5), VAR_8);
 if (VAR_9 == ((void*)0))
  return VAR_9;
 VAR_10 = (unsigned long)FUNC_0((unsigned long)VAR_9,
    VAR_3);
 if (VAR_11)
  goto out;

 if (VAR_10) {



  FUNC_2((void *) VAR_9);
  VAR_5 += VAR_3;
  VAR_11 = 1;
  goto realloc;
 }
out:
 *(unsigned long *)VAR_7 = VAR_10;
 VAR_9 = (void *)((u8 *)VAR_9 + VAR_10);
 return VAR_9;
}
