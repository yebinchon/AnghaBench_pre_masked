
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* c_slot_mapping_t ;
struct TYPE_3__ {scalar_t__ s_cseg; int s_cindx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*,int,int*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

int
FUNC_4(int *VAR_3, int VAR_4)
{
 c_slot_mapping_t VAR_5;
 int VAR_6 = 1;
 int VAR_7;

 FUNC_1(VAR_4 == 0 || VAR_4 == VAR_0);

 VAR_5 = (c_slot_mapping_t)VAR_3;

 if (VAR_5->s_cseg == VAR_1) {

  FUNC_3(VAR_5->s_cindx);
  FUNC_0(-1, &VAR_2);

  *VAR_3 = 0;
  return (0);
 }
 VAR_7 = FUNC_2(((void*)0), VAR_5, VAR_4, &VAR_6);





 if (VAR_7 == 0)
  *VAR_3 = 0;
 else
  FUNC_1(VAR_7 == -2);

 return (VAR_7);
}
