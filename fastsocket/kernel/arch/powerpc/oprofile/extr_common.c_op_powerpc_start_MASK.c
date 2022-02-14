
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* global_start ) (int ) ;scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 VAR_3 = 0;

 if (VAR_2->global_start)
  return VAR_2->global_start(VAR_1);
 if (VAR_2->start) {
  FUNC_0(VAR_4, ((void*)0), 1);
  return VAR_3;
 }
 return -VAR_0;

}
