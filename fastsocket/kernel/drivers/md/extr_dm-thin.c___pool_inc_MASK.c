
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pool {int ref_count; } ;
struct TYPE_2__ {int mutex; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct pool *VAR_1)
{
 FUNC_0(!FUNC_1(&VAR_0.mutex));
 VAR_1->ref_count++;
}
