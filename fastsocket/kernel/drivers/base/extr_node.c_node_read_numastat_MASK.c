
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_attribute {int dummy; } ;
struct sys_device {int id; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct sys_device * VAR_6,
    struct sysdev_attribute *VAR_7, char * VAR_8)
{
 return FUNC_1(VAR_8,
         "numa_hit %lu\n"
         "numa_miss %lu\n"
         "numa_foreign %lu\n"
         "interleave_hit %lu\n"
         "local_node %lu\n"
         "other_node %lu\n",
         FUNC_0(VAR_6->id, VAR_1),
         FUNC_0(VAR_6->id, VAR_4),
         FUNC_0(VAR_6->id, VAR_0),
         FUNC_0(VAR_6->id, VAR_2),
         FUNC_0(VAR_6->id, VAR_3),
         FUNC_0(VAR_6->id, VAR_5));
}
