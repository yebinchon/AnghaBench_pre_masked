
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int sch_no; int ssid; } ;
struct schib {int dummy; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct subchannel_id) ;
 int FUNC_2 (struct schib*) ;
 scalar_t__ FUNC_3 (struct subchannel_id,struct schib*) ;

__attribute__((used)) static int FUNC_4(struct subchannel_id VAR_1, int VAR_2)
{
 struct schib VAR_3;

 if (!VAR_2) {

  return -VAR_0;
 }
 if (FUNC_3(VAR_1, &VAR_3) || !FUNC_2(&VAR_3)) {

  return 0;
 }
 FUNC_0(4, "event: sch 0.%x.%04x, new\n", VAR_1.ssid,
        VAR_1.sch_no);

 return FUNC_1(VAR_1);
}
