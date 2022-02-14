
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dac_info {TYPE_1__* dacops; } ;
struct TYPE_2__ {int (* dac_set_mode ) (struct dac_info*,int) ;} ;


 int FUNC_0 (struct dac_info*,int) ;

__attribute__((used)) static inline int FUNC_1(struct dac_info *VAR_0, int VAR_1)
{
 return VAR_0->dacops->dac_set_mode(VAR_0, VAR_1);
}
