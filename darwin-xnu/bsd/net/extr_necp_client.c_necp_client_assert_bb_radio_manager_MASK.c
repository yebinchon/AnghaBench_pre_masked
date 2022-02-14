
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
struct necp_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct necp_client*) ;
 int FUNC_4 (struct necp_client*,int) ;
 struct necp_client* FUNC_5 (int ) ;

int
FUNC_6(uuid_t VAR_2, bool VAR_3)
{
 struct necp_client *VAR_4;
 int VAR_5 = 0;

 FUNC_1();

 VAR_4 = FUNC_5(VAR_2);

 if (VAR_4) {

  VAR_5 = FUNC_4(VAR_4, VAR_3);

  FUNC_3(VAR_4);
 } else {
  FUNC_0(VAR_1, "Couldn't find client");
  VAR_5 = VAR_0;
 }

 FUNC_2();

 return (VAR_5);
}
