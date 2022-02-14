
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct nlmsghdr {int dummy; } ;
struct TYPE_5__ {struct TYPE_5__* m_next; } ;
typedef TYPE_1__ NetlinkList ;


 int FUNC_0 (TYPE_1__*) ;
 struct nlmsghdr* FUNC_1 (int,int*,int*) ;
 scalar_t__ FUNC_2 (int,int) ;
 TYPE_1__* FUNC_3 (struct nlmsghdr*,int) ;

__attribute__((used)) static NetlinkList *FUNC_4(int VAR_0, int VAR_1)
{
   if(FUNC_2(VAR_0, VAR_1) < 0)
      return ((void*)0);

   NetlinkList *VAR_2 = ((void*)0);
   NetlinkList *VAR_3 = ((void*)0);
   int VAR_4;
   int VAR_5 = 0;
   while(!VAR_5)
   {
      NetlinkList *VAR_6 = ((void*)0);
      struct nlmsghdr *VAR_7 = FUNC_1(VAR_0, &VAR_4, &VAR_5);
      if(!VAR_7)
         goto error;

      VAR_6 = FUNC_3(VAR_7, VAR_4);
      if (!VAR_6)
         goto error;

      if(!VAR_2)
         VAR_2 = VAR_6;
      else
         VAR_3->m_next = VAR_6;
      VAR_3 = VAR_6;
   }

   return VAR_2;

error:
   FUNC_0(VAR_2);
   return ((void*)0);
}
