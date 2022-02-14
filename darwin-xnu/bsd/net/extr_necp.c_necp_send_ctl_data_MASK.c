
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct necp_session {int control_unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,size_t,int ) ;
 int * VAR_2 ;

__attribute__((used)) static bool
FUNC_1(struct necp_session *VAR_3, u_int8_t *VAR_4, size_t VAR_5)
{
 int VAR_6;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == 0) {
  return (VAR_1);
 }

 VAR_6 = FUNC_0(VAR_2, VAR_3->control_unit, VAR_4, VAR_5, VAR_0);

 return (VAR_6 == 0);
}
