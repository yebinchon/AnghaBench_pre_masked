
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_scope_id; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct rtattr {int rta_type; } ;
struct nlmsghdr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifaddrs {char* ifa_name; struct sockaddr* ifa_netmask; struct sockaddr* ifa_addr; struct sockaddr* ifa_broadaddr; struct sockaddr* ifa_dstaddr; int ifa_flags; } ;
struct ifaddrmsg {scalar_t__ ifa_family; unsigned int ifa_prefixlen; int ifa_index; int ifa_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




 struct rtattr* FUNC_0 (struct ifaddrmsg*) ;
 int FUNC_1 (struct in6_addr*) ;
 int FUNC_2 (struct in6_addr*) ;
 size_t FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (struct nlmsghdr*) ;
 size_t FUNC_5 (struct nlmsghdr*,int) ;
 void* FUNC_6 (struct rtattr*) ;
 struct rtattr* FUNC_7 (struct rtattr*,size_t) ;
 scalar_t__ FUNC_8 (struct rtattr*,size_t) ;
 size_t FUNC_9 (struct rtattr*) ;
 int FUNC_10 (struct ifaddrs**,struct ifaddrs*) ;
 size_t FUNC_11 (scalar_t__,size_t) ;
 struct ifaddrs* FUNC_12 (int ,struct ifaddrs**,int) ;
 int FUNC_13 (scalar_t__,struct sockaddr*,char*,unsigned int) ;
 struct ifaddrs* FUNC_14 (int) ;
 int FUNC_15 (struct ifaddrs*,int ,int) ;
 int FUNC_16 (char*,void*,size_t) ;

__attribute__((used)) static int FUNC_17(struct nlmsghdr *VAR_3, struct ifaddrs **VAR_4, int VAR_5)
{
   size_t VAR_6 = 0;
   size_t VAR_7 = 0;
   int VAR_8 = 0;
   struct ifaddrmsg *VAR_9 = (struct ifaddrmsg *)FUNC_4(VAR_3);
   struct ifaddrs *VAR_10 = FUNC_12(VAR_9->ifa_index, VAR_4, VAR_5);

   if(VAR_9->ifa_family == VAR_2)
      return 0;

   size_t VAR_11 = FUNC_5(VAR_3, sizeof(struct ifaddrmsg));
   struct rtattr *VAR_12;

   for(VAR_12 = FUNC_0(VAR_9); FUNC_8(VAR_12, VAR_11); VAR_12 = FUNC_7(VAR_12, VAR_11))
   {
      size_t VAR_13 = FUNC_9(VAR_12);

      switch(VAR_12->rta_type)
      {
         case 131:
         case 128:
            if((VAR_9->ifa_family == VAR_0 || VAR_9->ifa_family == VAR_1) && !VAR_8)
            {

               VAR_7 += FUNC_3(FUNC_11(VAR_9->ifa_family, VAR_13));
               VAR_8 = 1;
            }
         case 130:
            VAR_7 += FUNC_3(FUNC_11(VAR_9->ifa_family, VAR_13));
            break;
         case 129:
            VAR_6 += FUNC_3(VAR_11 + 1);
            break;
         default:
            break;
      }
   }

   struct ifaddrs *VAR_14 = FUNC_14(sizeof(struct ifaddrs) + VAR_6 + VAR_7);
   if (VAR_14 == ((void*)0))
      return -1;

   FUNC_15(VAR_14, 0, sizeof(struct ifaddrs));
   VAR_14->ifa_name = (VAR_10 ? VAR_10->ifa_name : "");

   char *VAR_15 = ((char *)VAR_14) + sizeof(struct ifaddrs);
   char *VAR_16 = VAR_15 + VAR_6;

   VAR_14->ifa_flags = VAR_9->ifa_flags;
   if(VAR_10)
      VAR_14->ifa_flags |= VAR_10->ifa_flags;

   VAR_11 = FUNC_5(VAR_3, sizeof(struct ifaddrmsg));
   for(VAR_12 = FUNC_0(VAR_9); FUNC_8(VAR_12, VAR_11); VAR_12 = FUNC_7(VAR_12, VAR_11))
   {
      void *VAR_17 = FUNC_6(VAR_12);
      size_t VAR_18 = FUNC_9(VAR_12);
      switch(VAR_12->rta_type)
      {
         case 131:
         case 130:
         case 128:
            {
               size_t VAR_19 = FUNC_11(VAR_9->ifa_family, VAR_18);
               FUNC_13(VAR_9->ifa_family, (struct sockaddr *)VAR_16, VAR_17, VAR_18);
               if(VAR_9->ifa_family == VAR_1)
               {
                  if(FUNC_1((struct in6_addr *)VAR_17) || FUNC_2((struct in6_addr *)VAR_17))
                     ((struct sockaddr_in6 *)VAR_16)->sin6_scope_id = VAR_9->ifa_index;
               }

               if(VAR_12->rta_type == 131)
               {


                  if(VAR_14->ifa_addr)
                     VAR_14->ifa_dstaddr = (struct sockaddr *)VAR_16;
                  else
                     VAR_14->ifa_addr = (struct sockaddr *)VAR_16;
               }
               else if(VAR_12->rta_type == 128)
               {
                  if(VAR_14->ifa_addr)
                     VAR_14->ifa_dstaddr = VAR_14->ifa_addr;
                  VAR_14->ifa_addr = (struct sockaddr *)VAR_16;
               }
               else
                  VAR_14->ifa_broadaddr = (struct sockaddr *)VAR_16;
               VAR_16 += FUNC_3(VAR_19);
               break;
            }
         case 129:
            FUNC_16(VAR_15, VAR_17, VAR_18);
            VAR_15[VAR_18] = '\0';
            VAR_14->ifa_name = VAR_15;
            break;
         default:
            break;
      }
   }

   if(VAR_14->ifa_addr &&
         ( VAR_14->ifa_addr->sa_family == VAR_0
          || VAR_14->ifa_addr->sa_family == VAR_1))
   {
      unsigned VAR_20;
      char VAR_21[16];
      unsigned VAR_22 = (VAR_14->ifa_addr->sa_family == VAR_0
            ? 32 : 128);
      unsigned VAR_23 = (VAR_9->ifa_prefixlen > VAR_22
            ? VAR_22 : VAR_9->ifa_prefixlen);

      VAR_21[0] = '\0';

      for(VAR_20=0; VAR_20<(VAR_23/8); ++VAR_20)
         VAR_21[VAR_20] = 0xff;
      if(VAR_23 % 8)
         VAR_21[VAR_20] = 0xff << (8 - (VAR_23 % 8));

      FUNC_13(VAR_14->ifa_addr->sa_family,
            (struct sockaddr *)VAR_16, VAR_21, VAR_22 / 8);
      VAR_14->ifa_netmask = (struct sockaddr *)VAR_16;
   }

   FUNC_10(VAR_4, VAR_14);
   return 0;
}
