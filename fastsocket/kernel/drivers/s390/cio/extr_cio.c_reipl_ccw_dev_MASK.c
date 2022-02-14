
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int dummy; } ;
struct ccw_dev_id {int dummy; } ;
typedef int __u32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct ccw_dev_id*,struct subchannel_id*) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(struct ccw_dev_id *VAR_0)
{
 struct subchannel_id VAR_1;

 FUNC_3(((void*)0), ((void*)0));
 if (FUNC_2(VAR_0, &VAR_1) != 0)
  FUNC_1("IPL Device not found\n");
 FUNC_0(*((__u32*)&VAR_1));
}
