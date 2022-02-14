
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ehea_mr {int dummy; } ;
struct ehea_adapter {int dummy; } ;
struct TYPE_4__ {TYPE_1__** top; } ;
struct TYPE_3__ {int * dir; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_0 (int,int,scalar_t__*,struct ehea_adapter*,struct ehea_mr*) ;

__attribute__((used)) static u64 FUNC_1(int VAR_4, u64 *VAR_5,
        struct ehea_adapter *VAR_6,
        struct ehea_mr *VAR_7)
{
 u64 VAR_8 = VAR_2;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if (!VAR_3->top[VAR_4]->dir[VAR_9])
   continue;

  VAR_8 = FUNC_0(VAR_4, VAR_9, VAR_5, VAR_6, VAR_7);
  if ((VAR_8 != VAR_2) && (VAR_8 != VAR_1))
   return VAR_8;
 }
 return VAR_8;
}
