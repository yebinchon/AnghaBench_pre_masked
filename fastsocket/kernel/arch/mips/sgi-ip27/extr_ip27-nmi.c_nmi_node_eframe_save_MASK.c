
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ nasid_t ;
typedef scalar_t__ cnodeid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int) ;

void FUNC_4(cnodeid_t VAR_2)
{
 nasid_t VAR_3;
 int VAR_4;


 if (VAR_2 == VAR_0)
  return;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == VAR_1)
  return;


 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_4); VAR_4++) {
  FUNC_2(VAR_3, VAR_4);
  FUNC_3(VAR_3, VAR_4);
 }
}
