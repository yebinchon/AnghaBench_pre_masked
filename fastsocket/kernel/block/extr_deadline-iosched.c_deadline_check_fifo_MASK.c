
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct deadline_data {TYPE_1__* fifo_list; } ;
struct TYPE_2__ {int next; } ;


 int VAR_0 ;
 struct request* FUNC_0 (int ) ;
 int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static inline int FUNC_3(struct deadline_data *VAR_1, int VAR_2)
{
 struct request *VAR_3 = FUNC_0(VAR_1->fifo_list[VAR_2].next);




 if (FUNC_2(VAR_0, FUNC_1(VAR_3)))
  return 1;

 return 0;
}
