
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrng {int (* data_present ) (struct hwrng*,int) ;} ;


 int FUNC_0 (struct hwrng*,int) ;

__attribute__((used)) static inline int FUNC_1(struct hwrng *VAR_0, int VAR_1)
{
 if (!VAR_0->data_present)
  return 1;
 return VAR_0->data_present(VAR_0, VAR_1);
}
