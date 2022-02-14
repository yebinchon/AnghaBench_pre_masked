
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int __u32 ;
struct TYPE_2__ {scalar_t__ pid; } ;


 scalar_t__ FUNC_0 (unsigned int*) ;
 TYPE_1__* VAR_0 ;
 unsigned int* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (unsigned int*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;

unsigned int FUNC_5(void)
{
 __u32 *VAR_4;
 unsigned int VAR_5;

 if (FUNC_0(&VAR_5))
  return VAR_5;

 VAR_4 = FUNC_1(VAR_1);

 VAR_4[0] += VAR_0->pid + VAR_2 + FUNC_2();
 FUNC_3(VAR_4, VAR_3);
 VAR_5 = VAR_4[0];
 FUNC_4(VAR_1);

 return VAR_5;
}
