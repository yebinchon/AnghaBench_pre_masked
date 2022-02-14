
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct cgroup_map_cb {int (* fill ) (struct cgroup_map_cb*,char*,int ) ;} ;
typedef int dev_t ;


 int FUNC_0 (int ,int ,char*,int,int) ;
 int FUNC_1 (struct cgroup_map_cb*,char*,int ) ;

__attribute__((used)) static uint64_t FUNC_2(char *VAR_0, int VAR_1, uint64_t VAR_2,
    struct cgroup_map_cb *VAR_3, dev_t VAR_4)
{
 FUNC_0(0, VAR_4, VAR_0, VAR_1, 1);
 VAR_3->fill(VAR_3, VAR_0, VAR_2);
 return VAR_2;
}
