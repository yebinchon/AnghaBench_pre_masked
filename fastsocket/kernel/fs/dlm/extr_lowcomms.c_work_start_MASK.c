
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_2;
 VAR_0 = FUNC_1("dlm_recv");
 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2) {
  FUNC_3("can't start dlm_recv %d", VAR_2);
  return VAR_2;
 }

 VAR_1 = FUNC_1("dlm_send");
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2) {
  FUNC_3("can't start dlm_send %d", VAR_2);
  FUNC_2(VAR_0);
  return VAR_2;
 }

 return 0;
}
