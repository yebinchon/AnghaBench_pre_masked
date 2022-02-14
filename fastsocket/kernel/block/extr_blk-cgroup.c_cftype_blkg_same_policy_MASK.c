
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cftype {int private; } ;
struct blkio_group {int plid; } ;
typedef enum blkio_policy_id { ____Placeholder_blkio_policy_id } blkio_policy_id ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct cftype *VAR_0,
   struct blkio_group *VAR_1)
{
 enum blkio_policy_id VAR_2 = FUNC_0(VAR_0->private);

 if (VAR_1->plid == VAR_2)
  return 1;

 return 0;
}
