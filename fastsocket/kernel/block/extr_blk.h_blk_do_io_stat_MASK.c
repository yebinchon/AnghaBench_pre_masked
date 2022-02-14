
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int cmd_flags; scalar_t__ cmd_type; scalar_t__ rq_disk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct request *VAR_2)
{
 return VAR_2->rq_disk &&
        (VAR_2->cmd_flags & VAR_0) &&
  (VAR_2->cmd_type == VAR_1);
}
