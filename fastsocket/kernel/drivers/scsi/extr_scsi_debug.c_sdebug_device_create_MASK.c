
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_host_info {int dev_info_list; } ;
struct sdebug_dev_info {int dev_list; struct sdebug_host_info* sdbg_host; } ;
typedef int gfp_t ;


 struct sdebug_dev_info* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static struct sdebug_dev_info *
FUNC_2(struct sdebug_host_info *VAR_0, gfp_t VAR_1)
{
 struct sdebug_dev_info *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_1);
 if (VAR_2) {
  VAR_2->sdbg_host = VAR_0;
  FUNC_1(&VAR_2->dev_list, &VAR_0->dev_info_list);
 }
 return VAR_2;
}
