
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwrng {int (* data_read ) (struct hwrng*,int *) ;} ;


 int FUNC_0 (struct hwrng*,int *) ;

__attribute__((used)) static inline int FUNC_1(struct hwrng *VAR_0, u32 *VAR_1)
{
 return VAR_0->data_read(VAR_0, VAR_1);
}
