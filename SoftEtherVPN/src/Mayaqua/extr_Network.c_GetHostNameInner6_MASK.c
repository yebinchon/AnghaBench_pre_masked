
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct sockaddr_in6 {scalar_t__ sin6_port; int sin6_addr; int sin6_len; int sin6_family; } ;
struct sockaddr {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int sa ;
typedef int ip_str ;
typedef int UINT ;
typedef int IP ;


 int VAR_0 ;
 int FUNC_0 (int *,struct in6_addr*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct in6_addr*,int *) ;
 int FUNC_2 (char*,int,int *) ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int ,char*) ;
 int FUNC_6 (struct sockaddr_in6*,int) ;
 scalar_t__ FUNC_7 (struct sockaddr*,int,char*,int,int *,int ,int ) ;

bool FUNC_8(char *VAR_3, UINT VAR_4, IP *VAR_5)
{
 struct in6_addr VAR_6;
 struct sockaddr_in6 VAR_7;
 char VAR_8[VAR_2];
 char VAR_9[256];

 if (VAR_3 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }


 FUNC_1(&VAR_6, VAR_5);
 FUNC_6(&VAR_7, sizeof(VAR_7));
 VAR_7.sin6_family = VAR_0;





 FUNC_0(&VAR_7.sin6_addr, &VAR_6, sizeof(struct in6_addr));
 VAR_7.sin6_port = 0;

 if (FUNC_7((struct sockaddr *)&VAR_7, sizeof(VAR_7), VAR_8, sizeof(VAR_8), ((void*)0), 0, 0) != 0)
 {
  return 0;
 }

 FUNC_2(VAR_9, sizeof(VAR_9), VAR_5);

 if (FUNC_4(VAR_8, VAR_9) == 0)
 {
  return 0;
 }

 if (FUNC_3(VAR_8))
 {
  return 0;
 }

 FUNC_5(VAR_3, VAR_4, VAR_8);

 return 1;
}
