
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_dvb_adapter {long last_jiffies; } ;


 int FUNC_0 (long) ;
 long VAR_0 ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct pd_dvb_adapter *VAR_1)
{
 long VAR_2 = VAR_0 - VAR_1->last_jiffies;
 unsigned int VAR_3 ;

 VAR_3 = FUNC_1(FUNC_0(VAR_2));
 return VAR_3 > 800 ? 1 : 0;
}
