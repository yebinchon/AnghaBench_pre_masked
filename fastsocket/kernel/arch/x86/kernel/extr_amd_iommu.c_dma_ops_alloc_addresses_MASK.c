
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dma_ops_domain {int need_flush; unsigned long aperture_size; scalar_t__ next_address; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (struct device*,struct dma_ops_domain*,unsigned int,unsigned long,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static unsigned long FUNC_3(struct device *VAR_2,
          struct dma_ops_domain *VAR_3,
          unsigned int VAR_4,
          unsigned long VAR_5,
          u64 VAR_6)
{
 unsigned long VAR_7;






 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_3->next_address);

 if (VAR_7 == -1) {
  VAR_3->next_address = 0;
  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
          VAR_6, 0);
  VAR_3->need_flush = 1;
 }

 if (FUNC_2(VAR_7 == -1))
  VAR_7 = VAR_1;

 FUNC_0((VAR_7 + (VAR_0*VAR_4)) > VAR_3->aperture_size);

 return VAR_7;
}
