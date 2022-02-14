
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i2c_algo_iop3xx_data {int lock; scalar_t__ SR_received; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline u32
FUNC_2(struct i2c_algo_iop3xx_data *VAR_0)
{
 unsigned long VAR_1;
 u32 VAR_2;

 FUNC_0(&VAR_0->lock, VAR_1);
 VAR_2 = VAR_0->SR_received;
 VAR_0->SR_received = 0;
 FUNC_1(&VAR_0->lock, VAR_1);

 return VAR_2;
}
