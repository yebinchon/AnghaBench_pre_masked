
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
typedef int pte_t ;
typedef int jmp_buf ;
struct TYPE_3__ {int * fault_catcher; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_1 (struct page*,int ) ;
 int FUNC_2 (struct page*,int ) ;
 int * FUNC_3 (unsigned long,int) ;
 struct page* FUNC_4 (int ) ;
 int FUNC_5 (unsigned long,int,void*) ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_3, int VAR_4, int VAR_5,
   int (*VAR_6)(unsigned long VAR_7, int VAR_8, void *VAR_9), void *VAR_10)
{
 jmp_buf VAR_11;
 struct page *VAR_12;
 pte_t *VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = FUNC_3(VAR_3, VAR_5);
 if (VAR_13 == ((void*)0))
  return -1;

 VAR_12 = FUNC_4(*VAR_13);
 VAR_3 = (unsigned long) FUNC_1(VAR_12, VAR_0) +
  (VAR_3 & ~VAR_1);

 VAR_2->thread.fault_catcher = &VAR_11;

 VAR_15 = FUNC_0(&VAR_11);
 if (VAR_15 == 0)
  VAR_14 = (*VAR_6)(VAR_3, VAR_4, VAR_10);
 else
  VAR_14 = -1;

 VAR_2->thread.fault_catcher = ((void*)0);

 FUNC_2(VAR_12, VAR_0);

 return VAR_14;
}
