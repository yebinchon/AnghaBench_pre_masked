
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cgroup {int dummy; } ;
struct cftype {int private; } ;
struct blkio_cgroup {int weight; } ;
typedef enum blkio_policy_id { ____Placeholder_blkio_policy_id } blkio_policy_id ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;


 int FUNC_2 () ;
 struct blkio_cgroup* FUNC_3 (struct cgroup*) ;

__attribute__((used)) static u64 FUNC_4 (struct cgroup *VAR_0, struct cftype *VAR_1) {
 struct blkio_cgroup *VAR_2;
 enum blkio_policy_id VAR_3 = FUNC_1(VAR_1->private);
 int VAR_4 = FUNC_0(VAR_1->private);

 VAR_2 = FUNC_3(VAR_0);

 switch(VAR_3) {
 case 129:
  switch(VAR_4) {
  case 128:
   return (u64)VAR_2->weight;
  }
  break;
 default:
  FUNC_2();
 }
 return 0;
}
