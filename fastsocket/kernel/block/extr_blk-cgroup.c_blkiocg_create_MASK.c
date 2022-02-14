
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int dummy; } ;
struct cgroup_subsys {int dummy; } ;
struct cgroup {struct cgroup* parent; } ;
struct blkio_cgroup {struct cgroup_subsys_state css; int policy_list; int blkg_list; int lock; int weight; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cgroup_subsys_state* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct blkio_cgroup VAR_3 ;
 struct blkio_cgroup* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct cgroup_subsys_state *
FUNC_5(struct cgroup_subsys *VAR_4, struct cgroup *VAR_5)
{
 struct blkio_cgroup *VAR_6;
 struct cgroup *VAR_7 = VAR_5->parent;

 if (!VAR_7) {
  VAR_6 = &VAR_3;
  goto done;
 }

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_6->weight = VAR_0;
done:
 FUNC_4(&VAR_6->lock);
 FUNC_1(&VAR_6->blkg_list);

 FUNC_2(&VAR_6->policy_list);
 return &VAR_6->css;
}
