
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrng {int (* cleanup ) (struct hwrng*) ;} ;


 int FUNC_0 (struct hwrng*) ;

__attribute__((used)) static inline void FUNC_1(struct hwrng *VAR_0)
{
 if (VAR_0 && VAR_0->cleanup)
  VAR_0->cleanup(VAR_0);
}
