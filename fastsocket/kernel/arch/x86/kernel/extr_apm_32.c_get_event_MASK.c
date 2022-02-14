
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apm_eventinfo_t ;
typedef int apm_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int*,int *) ;

__attribute__((used)) static apm_event_t FUNC_2(void)
{
 int VAR_2;
 apm_event_t VAR_3 = VAR_0;
 apm_eventinfo_t VAR_4;

 static int VAR_5;


 VAR_2 = FUNC_1(&VAR_3, &VAR_4);
 if (VAR_2 == VAR_1)
  return VAR_3;

 if ((VAR_2 != VAR_0) && (VAR_5++ == 0))
  FUNC_0("get_event", VAR_2);

 return 0;
}
