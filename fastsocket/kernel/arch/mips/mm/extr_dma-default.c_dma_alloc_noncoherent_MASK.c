
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (struct device*,int ) ;
 int FUNC_3 (void*,int ,size_t) ;
 int FUNC_4 (struct device*,void*,size_t) ;

void *FUNC_5(struct device *VAR_0, size_t VAR_1,
 dma_addr_t * VAR_2, gfp_t VAR_3)
{
 void *VAR_4;

 VAR_3 = FUNC_2(VAR_0, VAR_3);

 VAR_4 = (void *) FUNC_0(VAR_3, FUNC_1(VAR_1));

 if (VAR_4 != ((void*)0)) {
  FUNC_3(VAR_4, 0, VAR_1);
  *VAR_2 = FUNC_4(VAR_0, VAR_4, VAR_1);
 }

 return VAR_4;
}
