
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_map_cb {int dummy; } ;
struct cgroup {int dummy; } ;
struct cftype {int private; } ;
struct blkio_cgroup {int dummy; } ;
typedef enum blkio_policy_id { ____Placeholder_blkio_policy_id } blkio_policy_id ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;


 int FUNC_2 () ;
 int FUNC_3 (struct blkio_cgroup*,struct cftype*,struct cgroup_map_cb*,int ,int,int) ;
 struct blkio_cgroup* FUNC_4 (struct cgroup*) ;

__attribute__((used)) static int FUNC_5(struct cgroup *VAR_13, struct cftype *VAR_14,
    struct cgroup_map_cb *VAR_15)
{
 struct blkio_cgroup *VAR_16;
 enum blkio_policy_id VAR_17 = FUNC_1(VAR_14->private);
 int VAR_18 = FUNC_0(VAR_14->private);

 VAR_16 = FUNC_4(VAR_13);

 switch(VAR_17) {
 case 144:
  switch(VAR_18) {
  case 130:
   return FUNC_3(VAR_16, VAR_14, VAR_15,
      VAR_11, 0, 0);
  case 131:
   return FUNC_3(VAR_16, VAR_14, VAR_15,
      VAR_1, 0, 1);
  case 135:
   return FUNC_3(VAR_16, VAR_14, VAR_15,
     VAR_3, 1, 1);
  case 133:
   return FUNC_3(VAR_16, VAR_14, VAR_15,
      VAR_2, 1, 1);
  case 134:
   return FUNC_3(VAR_16, VAR_14, VAR_15,
      VAR_10, 1, 0);
  case 132:
   return FUNC_3(VAR_16, VAR_14, VAR_15,
      VAR_12, 1, 0);
  case 137:
   return FUNC_3(VAR_16, VAR_14, VAR_15,
      VAR_8, 1, 0);
  case 136:
   return FUNC_3(VAR_16, VAR_14, VAR_15,
      VAR_9, 1, 0);
  default:
   FUNC_2();
  }
  break;
 case 143:
  switch(VAR_18){
  case 129:
   return FUNC_3(VAR_16, VAR_14, VAR_15,
      VAR_3, 1, 1);
  case 128:
   return FUNC_3(VAR_16, VAR_14, VAR_15,
      VAR_2, 1, 1);
  default:
   FUNC_2();
  }
  break;
 default:
  FUNC_2();
 }

 return 0;
}
