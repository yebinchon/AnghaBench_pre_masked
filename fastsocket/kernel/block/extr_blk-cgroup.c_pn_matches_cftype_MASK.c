
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cftype {int private; } ;
struct blkio_policy_node {int plid; int fileid; } ;
typedef enum blkio_policy_id { ____Placeholder_blkio_policy_id } blkio_policy_id ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(struct cftype *VAR_0,
   struct blkio_policy_node *VAR_1)
{
 enum blkio_policy_id VAR_2 = FUNC_1(VAR_0->private);
 int VAR_3 = FUNC_0(VAR_0->private);

 return (VAR_2 == VAR_1->plid && VAR_3 == VAR_1->fileid);
}
