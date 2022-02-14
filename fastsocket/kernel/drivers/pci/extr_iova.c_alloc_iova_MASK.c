
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_domain {int dummy; } ;
struct iova {int dummy; } ;


 int FUNC_0 (struct iova_domain*,unsigned long,unsigned long,struct iova*,int) ;
 unsigned long FUNC_1 (unsigned long) ;
 struct iova* FUNC_2 () ;
 int FUNC_3 (struct iova*) ;

struct iova *
FUNC_4(struct iova_domain *VAR_0, unsigned long VAR_1,
 unsigned long VAR_2,
 bool VAR_3)
{
 struct iova *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2();
 if (!VAR_4)
  return ((void*)0);




 if (VAR_3)
  VAR_1 = FUNC_1(VAR_1);

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2,
   VAR_4, VAR_3);

 if (VAR_5) {
  FUNC_3(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
