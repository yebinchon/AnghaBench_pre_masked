
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_domain {int rbroot; } ;
struct iova {unsigned long pfn_hi; unsigned long pfn_lo; } ;


 struct iova* FUNC_0 () ;
 int FUNC_1 (int *,struct iova*) ;

__attribute__((used)) static struct iova *
FUNC_2(struct iova_domain *VAR_0,
 unsigned long VAR_1, unsigned long VAR_2)
{
 struct iova *VAR_3;

 VAR_3 = FUNC_0();
 if (!VAR_3)
  return VAR_3;

 VAR_3->pfn_hi = VAR_2;
 VAR_3->pfn_lo = VAR_1;
 FUNC_1(&VAR_0->rbroot, VAR_3);
 return VAR_3;
}
