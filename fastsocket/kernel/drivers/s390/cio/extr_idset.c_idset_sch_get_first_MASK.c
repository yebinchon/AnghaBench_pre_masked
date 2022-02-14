
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int ssid; int sch_no; } ;
struct idset {int dummy; } ;


 int FUNC_0 (struct idset*,int*,int*) ;
 int FUNC_1 (struct subchannel_id*) ;

int FUNC_2(struct idset *VAR_0, struct subchannel_id *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, &VAR_2, &VAR_3);
 if (VAR_4) {
  FUNC_1(VAR_1);
  VAR_1->ssid = VAR_2;
  VAR_1->sch_no = VAR_3;
 }
 return VAR_4;
}
