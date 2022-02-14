
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rt2x00_dev {int * rf; TYPE_1__* ops; } ;
struct TYPE_2__ {int rf_size; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct rt2x00_dev *VAR_0,
      const unsigned int VAR_1, u32 *VAR_2)
{
 FUNC_0(VAR_1 < 1 || VAR_1 > VAR_0->ops->rf_size / sizeof(u32));
 *VAR_2 = VAR_0->rf[VAR_1 - 1];
}
