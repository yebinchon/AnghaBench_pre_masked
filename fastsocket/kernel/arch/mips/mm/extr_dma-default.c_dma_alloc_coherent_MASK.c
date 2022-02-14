
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 void* FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct device*,size_t,int *,void**) ;
 int FUNC_3 (unsigned long,size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (struct device*,int ) ;
 int FUNC_6 (void*,int ,size_t) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*,void*,size_t) ;

void *FUNC_9(struct device *VAR_0, size_t VAR_1,
 dma_addr_t * VAR_2, gfp_t VAR_3)
{
 void *VAR_4;

 if (FUNC_2(VAR_0, VAR_1, VAR_2, &VAR_4))
  return VAR_4;

 VAR_3 = FUNC_5(VAR_0, VAR_3);

 VAR_4 = (void *) FUNC_1(VAR_3, FUNC_4(VAR_1));

 if (VAR_4) {
  FUNC_6(VAR_4, 0, VAR_1);
  *VAR_2 = FUNC_8(VAR_0, VAR_4, VAR_1);

  if (!FUNC_7(VAR_0)) {
   FUNC_3((unsigned long) VAR_4, VAR_1);
   VAR_4 = FUNC_0(VAR_4);
  }
 }

 return VAR_4;
}
