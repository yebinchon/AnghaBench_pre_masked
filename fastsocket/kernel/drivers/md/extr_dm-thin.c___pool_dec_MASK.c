
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pool {int ref_count; } ;
struct TYPE_2__ {int mutex; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pool*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pool *VAR_1)
{
 FUNC_0(!FUNC_2(&VAR_0.mutex));
 FUNC_0(!VAR_1->ref_count);
 if (!--VAR_1->ref_count)
  FUNC_1(VAR_1);
}
