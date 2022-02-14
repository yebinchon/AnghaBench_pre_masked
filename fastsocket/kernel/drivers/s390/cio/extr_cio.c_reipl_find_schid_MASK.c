
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int dummy; } ;
struct ccw_dev_id {int dummy; } ;
struct sch_match_id {int rc; struct subchannel_id schid; struct ccw_dev_id devid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct sch_match_id*) ;

__attribute__((used)) static int FUNC_1(struct ccw_dev_id *VAR_2,
       struct subchannel_id *VAR_3)
{
 struct sch_match_id VAR_4;

 VAR_4.devid = *VAR_2;
 VAR_4.rc = -VAR_0;
 FUNC_0(VAR_1, &VAR_4);
 if (VAR_4.rc == 0)
  *VAR_3 = VAR_4.schid;
 return VAR_4.rc;
}
