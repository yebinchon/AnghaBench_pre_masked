
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct cgroup {int dummy; } ;
struct cftype {int private; } ;
struct blkio_cgroup {int dummy; } ;
typedef enum blkio_policy_id { ____Placeholder_blkio_policy_id } blkio_policy_id ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;







 int FUNC_2 () ;
 int FUNC_3 (struct cftype*,struct blkio_cgroup*,struct seq_file*) ;
 struct blkio_cgroup* FUNC_4 (struct cgroup*) ;

__attribute__((used)) static int FUNC_5(struct cgroup *VAR_0, struct cftype *VAR_1,
    struct seq_file *VAR_2)
{
 struct blkio_cgroup *VAR_3;
 enum blkio_policy_id VAR_4 = FUNC_1(VAR_1->private);
 int VAR_5 = FUNC_0(VAR_1->private);

 VAR_3 = FUNC_4(VAR_0);

 switch(VAR_4) {
 case 134:
  switch(VAR_5) {
  case 132:
   FUNC_3(VAR_1, VAR_3, VAR_2);
   return 0;
  default:
   FUNC_2();
  }
  break;
 case 133:
  switch(VAR_5){
  case 131:
  case 129:
  case 130:
  case 128:
   FUNC_3(VAR_1, VAR_3, VAR_2);
   return 0;
  default:
   FUNC_2();
  }
  break;
 default:
  FUNC_2();
 }

 return 0;
}
