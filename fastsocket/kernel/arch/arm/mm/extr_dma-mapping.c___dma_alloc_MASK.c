
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device {int dummy; } ;
typedef int pgprot_t ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 void* FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct device*,void*) ;

__attribute__((used)) static void *
FUNC_3(struct device *VAR_1, size_t VAR_2, dma_addr_t *VAR_3, gfp_t VAR_4,
     pgprot_t VAR_5)
{
 void *VAR_6;
 u64 VAR_7 = FUNC_0(VAR_1);

 if (!VAR_7)
  goto error;

 if (VAR_7 < 0xffffffffULL)
  VAR_4 |= VAR_0;
 VAR_6 = FUNC_1(VAR_2, VAR_4);
 if (!VAR_6)
  goto error;

 *VAR_3 = FUNC_2(VAR_1, VAR_6);
 return VAR_6;

error:
 *VAR_3 = ~0;
 return ((void*)0);
}
