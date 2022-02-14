
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ace_device {TYPE_1__* reg_ops; } ;
struct TYPE_2__ {int (* out ) (struct ace_device*,int,int ) ;} ;


 int FUNC_0 (struct ace_device*,int,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ace_device *VAR_0, int VAR_1, u16 VAR_2)
{
 VAR_0->reg_ops->out(VAR_0, VAR_1, VAR_2);
}
