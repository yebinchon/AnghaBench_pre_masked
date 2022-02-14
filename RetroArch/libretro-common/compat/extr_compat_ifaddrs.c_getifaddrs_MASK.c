
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddrs {int dummy; } ;
typedef int NetlinkList ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int,int *,struct ifaddrs**,int) ;
 int FUNC_4 (int,int *,struct ifaddrs**) ;
 int FUNC_5 () ;

int FUNC_6(struct ifaddrs **VAR_2)
{
   int VAR_3 = 0;
   int VAR_4 = 0;
   if(!VAR_2)
      return -1;
   *VAR_2 = ((void*)0);

   VAR_3 = FUNC_5();
   if(VAR_3 < 0)
      return -1;

   NetlinkList *VAR_5 = FUNC_2(VAR_3, VAR_1);
   if(!VAR_5)
   {
      FUNC_0(VAR_3);
      return -1;
   }

   NetlinkList *VAR_6 = FUNC_2(VAR_3, VAR_0);
   if(!VAR_6)
   {
      FUNC_0(VAR_3);
      FUNC_1(VAR_5);
      return -1;
   }

   int VAR_7 = FUNC_4(VAR_3, VAR_5, VAR_2);

   if(VAR_7 == -1 || FUNC_3(VAR_3, VAR_6, VAR_2, VAR_7) == -1)
      VAR_4 = -1;

   FUNC_1(VAR_5);
   FUNC_1(VAR_6);
   FUNC_0(VAR_3);
   return VAR_4;
}
