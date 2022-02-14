
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrng {int (* init ) (struct hwrng*) ;} ;


 int FUNC_0 (struct hwrng*) ;

__attribute__((used)) static inline int FUNC_1(struct hwrng *VAR_0)
{
 if (!VAR_0->init)
  return 0;
 return VAR_0->init(VAR_0);
}
