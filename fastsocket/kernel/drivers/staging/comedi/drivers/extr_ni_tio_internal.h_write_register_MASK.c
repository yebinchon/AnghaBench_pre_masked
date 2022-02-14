
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_gpct {TYPE_1__* counter_dev; } ;
typedef enum ni_gpct_register { ____Placeholder_ni_gpct_register } ni_gpct_register ;
struct TYPE_2__ {int (* write_register ) (struct ni_gpct*,unsigned int,int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ni_gpct*,unsigned int,int) ;

__attribute__((used)) static inline void FUNC_2(struct ni_gpct *VAR_1, unsigned VAR_2,
      enum ni_gpct_register VAR_3)
{
 FUNC_0(VAR_3 >= VAR_0);
 VAR_1->counter_dev->write_register(VAR_1, VAR_2, VAR_3);
}
