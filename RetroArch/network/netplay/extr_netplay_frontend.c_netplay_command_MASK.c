
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netplay_connection {int dummy; } ;
typedef int netplay_t ;
typedef enum netplay_cmd { ____Placeholder_netplay_cmd } netplay_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct netplay_connection*,int,void*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int,int,int,int *,int ,int ) ;

bool FUNC_3(netplay_t* VAR_2, struct netplay_connection *VAR_3,
   enum netplay_cmd VAR_4, void* VAR_5, size_t VAR_6, const char* VAR_7,
   const char* VAR_8)
{
   FUNC_1(VAR_2);

   if (!FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6))
      return 0;

   FUNC_2(VAR_8, 1, 180, 0, ((void*)0), VAR_1, VAR_0);

   return 1;
}
