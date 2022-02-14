
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct device*,void*,size_t,int ) ;
 int FUNC_2 (size_t) ;
 int VAR_1 ;
 int FUNC_3 (void*,int ,size_t) ;

__attribute__((used)) static void *
FUNC_4(struct device *VAR_2, size_t VAR_3, dma_addr_t *VAR_4, gfp_t VAR_5)
{
      void *VAR_6;
        VAR_6 = (void *) FUNC_0(VAR_5, FUNC_2(VAR_3));

 if (VAR_6) {
  FUNC_3(VAR_6, 0, VAR_3);
  *VAR_4 = FUNC_1(VAR_2, VAR_6, VAR_3, VAR_0);
 }

 return VAR_6;
}
