
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buffer_head {TYPE_1__* b_assoc_map; int b_assoc_buffers; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct buffer_head *VAR_1)
{
 FUNC_2(&VAR_1->b_assoc_buffers);
 FUNC_0(!VAR_1->b_assoc_map);
 if (FUNC_1(VAR_1))
  FUNC_3(VAR_0, &VAR_1->b_assoc_map->flags);
 VAR_1->b_assoc_map = ((void*)0);
}
