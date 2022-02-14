
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_ops_domain {unsigned long next_address; int need_flush; struct aperture_range** aperture; } ;
struct aperture_range {int bitmap; } ;


 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int) ;
 unsigned long VAR_3 ;
 int FUNC_1 (int ,unsigned long,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct dma_ops_domain *VAR_4,
       unsigned long VAR_5,
       unsigned int VAR_6)
{
 unsigned VAR_7 = VAR_5 >> VAR_1;
 struct aperture_range *VAR_8 = VAR_4->aperture[VAR_7];

 FUNC_0(VAR_7 >= VAR_0 || VAR_8 == ((void*)0));






 if (VAR_5 >= VAR_4->next_address)
  VAR_4->need_flush = 1;

 VAR_5 = (VAR_5 % VAR_2) >> VAR_3;

 FUNC_1(VAR_8->bitmap, VAR_5, VAR_6);

}
