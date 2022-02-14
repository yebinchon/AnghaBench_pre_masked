
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_dvb_adapter {int dvb_adap; int dvb_fe; int dmxdev; int active_feed; int users; } ;
struct poseidon {struct pd_dvb_adapter dvb_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct poseidon*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct poseidon *VAR_2)
{
 struct pd_dvb_adapter *VAR_3 = &VAR_2->dvb_data;

 while (FUNC_0(&VAR_3->users) != 0
  || FUNC_0(&VAR_3->active_feed) != 0) {
  FUNC_6(VAR_1);
  FUNC_5(VAR_0);
 }
 FUNC_1(&VAR_3->dmxdev);
 FUNC_3(&VAR_3->dvb_fe);
 FUNC_2(&VAR_3->dvb_adap);
 FUNC_4(VAR_2);
}
