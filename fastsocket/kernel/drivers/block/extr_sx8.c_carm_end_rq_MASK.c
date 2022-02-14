
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carm_request {int dummy; } ;
struct carm_host {scalar_t__ n_msgs; scalar_t__ hw_sg_used; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct carm_host*,struct carm_request*,int) ;
 int FUNC_1 (struct carm_host*) ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_2(struct carm_host *VAR_3, struct carm_request *VAR_4,
          int VAR_5)
{
 FUNC_0(VAR_3, VAR_4, VAR_5);
 if (VAR_2 == 1)
  FUNC_1(VAR_3);
 else if ((VAR_3->n_msgs <= VAR_0) &&
   (VAR_3->hw_sg_used <= VAR_1)) {
  FUNC_1(VAR_3);
 }
}
