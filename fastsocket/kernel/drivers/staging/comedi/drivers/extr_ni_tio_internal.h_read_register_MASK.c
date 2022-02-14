
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_gpct {TYPE_1__* counter_dev; } ;
typedef enum ni_gpct_register { ____Placeholder_ni_gpct_register } ni_gpct_register ;
struct TYPE_2__ {int (* read_register ) (struct ni_gpct*,int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ni_gpct*,int) ;

__attribute__((used)) static inline unsigned FUNC_2(struct ni_gpct *VAR_1,
         enum ni_gpct_register VAR_2)
{
 FUNC_0(VAR_2 >= VAR_0);
 return VAR_1->counter_dev->read_register(VAR_1, VAR_2);
}
