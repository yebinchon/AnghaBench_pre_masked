
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum mcs_op { ____Placeholder_mcs_op } mcs_op ;
struct TYPE_2__ {unsigned long max; int total; int count; } ;


 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_3(enum mcs_op VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 FUNC_2(&VAR_0[VAR_1].count);
 FUNC_1(VAR_3, &VAR_0[VAR_1].total);
 if (VAR_0[VAR_1].max < VAR_3)
  VAR_0[VAR_1].max = VAR_3;
}
