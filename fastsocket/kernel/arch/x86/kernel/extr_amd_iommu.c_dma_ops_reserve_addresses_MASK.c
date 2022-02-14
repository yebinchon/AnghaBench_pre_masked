
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_ops_domain {unsigned int aperture_size; TYPE_1__** aperture; } ;
struct TYPE_2__ {int bitmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct dma_ops_domain *VAR_2,
          unsigned long VAR_3,
          unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6 = VAR_2->aperture_size >> VAR_1;

 if (VAR_3 + VAR_4 > VAR_6)
  VAR_4 = VAR_6 - VAR_3;

 for (VAR_5 = VAR_3; VAR_5 < VAR_3 + VAR_4; ++VAR_5) {
  int VAR_7 = VAR_5 / VAR_0;
  int VAR_8 = VAR_5 % VAR_0;
  FUNC_0(VAR_8, VAR_2->aperture[VAR_7]->bitmap);
 }
}
