
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct cgroup_map_cb {int (* fill ) (struct cgroup_map_cb*,char*,scalar_t__) ;} ;
struct blkio_group {int dummy; } ;
typedef enum stat_type_cpu { ____Placeholder_stat_type_cpu } stat_type_cpu ;
typedef enum stat_sub_type { ____Placeholder_stat_sub_type } stat_sub_type ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,int,scalar_t__,struct cgroup_map_cb*,int ) ;
 int FUNC_1 (int,int ,char*,int,int) ;
 scalar_t__ FUNC_2 (struct blkio_group*,int,int) ;
 int FUNC_3 (struct cgroup_map_cb*,char*,scalar_t__) ;
 int FUNC_4 (struct cgroup_map_cb*,char*,scalar_t__) ;

__attribute__((used)) static uint64_t FUNC_5(struct blkio_group *VAR_5,
  struct cgroup_map_cb *VAR_6, dev_t VAR_7, enum stat_type_cpu VAR_8)
{
 uint64_t VAR_9, VAR_10;
 char VAR_11[VAR_4];
 enum stat_sub_type VAR_12;

 if (VAR_8 == VAR_0) {
  VAR_10 = FUNC_2(VAR_5, VAR_8, 0);
  return FUNC_0(VAR_11, VAR_4 - 1, VAR_10, VAR_6, VAR_7);
 }

 for (VAR_12 = VAR_1; VAR_12 < VAR_2;
   VAR_12++) {
  FUNC_1(VAR_12, VAR_7, VAR_11, VAR_4, 0);
  VAR_10 = FUNC_2(VAR_5, VAR_8, VAR_12);
  VAR_6->fill(VAR_6, VAR_11, VAR_10);
 }

 VAR_9 = FUNC_2(VAR_5, VAR_8, VAR_1) +
   FUNC_2(VAR_5, VAR_8, VAR_3);

 FUNC_1(VAR_2, VAR_7, VAR_11, VAR_4, 0);
 VAR_6->fill(VAR_6, VAR_11, VAR_9);
 return VAR_9;
}
