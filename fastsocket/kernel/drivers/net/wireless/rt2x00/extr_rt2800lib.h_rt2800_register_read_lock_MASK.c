
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rt2x00_dev {TYPE_1__* ops; } ;
struct rt2800_ops {int (* register_read_lock ) (struct rt2x00_dev*,unsigned int const,int *) ;} ;
struct TYPE_2__ {struct rt2800_ops* drv; } ;


 int FUNC_0 (struct rt2x00_dev*,unsigned int const,int *) ;

__attribute__((used)) static inline void FUNC_1(struct rt2x00_dev *VAR_0,
          const unsigned int VAR_1,
          u32 *VAR_2)
{
 const struct rt2800_ops *VAR_3 = VAR_0->ops->drv;

 VAR_3->register_read_lock(VAR_0, VAR_1, VAR_2);
}
