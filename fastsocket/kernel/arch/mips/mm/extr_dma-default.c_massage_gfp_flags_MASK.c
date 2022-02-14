
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ coherent_dma_mask; } ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static gfp_t FUNC_1(const struct device *VAR_4, gfp_t VAR_5)
{

 VAR_5 &= ~(VAR_0 | VAR_1 | VAR_2);
  ;


 VAR_5 |= VAR_3;

 return VAR_5;
}
