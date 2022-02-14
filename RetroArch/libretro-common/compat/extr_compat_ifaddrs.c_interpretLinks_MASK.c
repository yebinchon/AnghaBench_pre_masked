
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nlmsghdr {scalar_t__ nlmsg_type; scalar_t__ nlmsg_seq; scalar_t__ nlmsg_pid; } ;
struct ifaddrs {int dummy; } ;
typedef scalar_t__ pid_t ;
struct TYPE_3__ {unsigned int m_size; struct nlmsghdr* m_data; struct TYPE_3__* m_next; } ;
typedef TYPE_1__ NetlinkList ;


 scalar_t__ VAR_0 ;
 struct nlmsghdr* FUNC_0 (struct nlmsghdr*,unsigned int) ;
 scalar_t__ FUNC_1 (struct nlmsghdr*,unsigned int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct nlmsghdr*,struct ifaddrs**) ;

__attribute__((used)) static int FUNC_4(int VAR_2, NetlinkList *VAR_3,
      struct ifaddrs **VAR_4)
{
   int VAR_5 = 0;
   pid_t VAR_6 = FUNC_2();
   for(; VAR_3; VAR_3 = VAR_3->m_next)
   {
      struct nlmsghdr *VAR_7 = ((void*)0);
      unsigned int VAR_8 = VAR_3->m_size;

      for(VAR_7 = VAR_3->m_data; FUNC_1(VAR_7, VAR_8); VAR_7 = FUNC_0(VAR_7, VAR_8))
      {
         if((pid_t)VAR_7->nlmsg_pid != VAR_6 || (int)VAR_7->nlmsg_seq != VAR_2)
            continue;

         if(VAR_7->nlmsg_type == VAR_0)
            break;

         if(VAR_7->nlmsg_type == VAR_1)
         {
            if(FUNC_3(VAR_7, VAR_4) == -1)
               return -1;
            ++VAR_5;
         }
      }
   }
   return VAR_5;
}
