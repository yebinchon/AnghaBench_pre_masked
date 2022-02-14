
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct sockaddr_in {scalar_t__ sin_port; int sin_addr; int sin_len; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct in_addr {int dummy; } ;
typedef int sa ;
typedef int ip_str ;
typedef int UINT ;
typedef int IP ;


 int VAR_0 ;
 int FUNC_0 (int *,struct in_addr*,int) ;
 int FUNC_1 (char*,int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (struct in_addr*,int *) ;
 int FUNC_3 (char*,int,int *) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int ,char*) ;
 int FUNC_8 (struct sockaddr_in*,int) ;
 scalar_t__ FUNC_9 (struct sockaddr*,int,char*,int,int *,int ,int ) ;

bool FUNC_10(char *VAR_3, UINT VAR_4, IP *VAR_5)
{
 struct in_addr VAR_6;
 struct sockaddr_in VAR_7;
 char VAR_8[VAR_2];
 char VAR_9[64];

 if (VAR_3 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_5(VAR_5))
 {
  return FUNC_1(VAR_3, VAR_4, VAR_5);
 }


 FUNC_2(&VAR_6, VAR_5);
 FUNC_8(&VAR_7, sizeof(VAR_7));
 VAR_7.sin_family = VAR_0;





 FUNC_0(&VAR_7.sin_addr, &VAR_6, sizeof(struct in_addr));
 VAR_7.sin_port = 0;

 if (FUNC_9((struct sockaddr *)&VAR_7, sizeof(VAR_7), VAR_8, sizeof(VAR_8), ((void*)0), 0, 0) != 0)
 {
  return 0;
 }

 FUNC_3(VAR_9, sizeof(VAR_9), VAR_5);

 if (FUNC_6(VAR_8, VAR_9) == 0)
 {
  return 0;
 }

 if (FUNC_4(VAR_8))
 {
  return 0;
 }

 FUNC_7(VAR_3, VAR_4, VAR_8);

 return 1;
}
