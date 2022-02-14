
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_addr; } ;
struct in_addr {int sin_addr; } ;
struct addrinfo {scalar_t__ ai_family; int * ai_addr; int ai_protocol; int ai_socktype; } ;
typedef int hint ;
typedef int addr ;
typedef int IP ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sockaddr_in*,int *,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct sockaddr_in*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int *,char*) ;
 int VAR_2 ;
 int FUNC_5 (int *,int,int ,int ,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (struct addrinfo*,int) ;
 int FUNC_10 (struct addrinfo*) ;
 scalar_t__ FUNC_11 (char*,int *,struct addrinfo*,struct addrinfo**) ;

bool FUNC_12(IP *VAR_3, char *VAR_4)
{
 struct sockaddr_in VAR_5;
 struct in_addr VAR_6;
 struct addrinfo VAR_7;
 struct addrinfo *VAR_8;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_2(VAR_4))
 {
  return 0;
 }

 if (FUNC_6(VAR_4, "localhost") == 0)
 {
  FUNC_5(VAR_3, 127, 0, 0, 1);
  return 1;
 }

 if (FUNC_8(VAR_3, VAR_4) == 0 && FUNC_7(VAR_3, VAR_4) == 0)
 {

  FUNC_9(&VAR_7, sizeof(VAR_7));
  VAR_7.ai_family = VAR_0;
  VAR_7.ai_socktype = VAR_2;
  VAR_7.ai_protocol = VAR_1;
  VAR_8 = ((void*)0);

  if (FUNC_11(VAR_4, ((void*)0), &VAR_7, &VAR_8) != 0 ||
   VAR_8->ai_family != VAR_0)
  {
   if (VAR_8)
   {
    FUNC_10(VAR_8);
   }
   return FUNC_4(VAR_3, VAR_4);
  }

  FUNC_0(&VAR_5, VAR_8->ai_addr, sizeof(struct sockaddr_in));
  FUNC_10(VAR_8);
  FUNC_0(&VAR_6, &VAR_5.sin_addr, sizeof(VAR_6));
  FUNC_1(VAR_3, &VAR_6);
 }


 FUNC_3(VAR_4, VAR_3);

 return 1;
}
