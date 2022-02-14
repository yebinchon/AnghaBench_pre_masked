
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int mtu; } ;
struct ldc_channel {TYPE_1__ cfg; } ;


 int FUNC_0 (struct ldc_channel*,void const*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct ldc_channel *VAR_0, const void *VAR_1,
   unsigned int VAR_2)
{
 if (VAR_2 > VAR_0->cfg.mtu)
  VAR_2 = VAR_0->cfg.mtu;
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
