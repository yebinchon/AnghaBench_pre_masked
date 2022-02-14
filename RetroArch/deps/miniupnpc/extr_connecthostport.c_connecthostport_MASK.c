
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const timeval ;
struct sockaddr_in6 {unsigned int sin6_scope_id; } ;
struct sockaddr_in {int sin_port; int sin_family; struct addrinfo* sin_zero; int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct hostent {int h_addr; } ;
struct addrinfo {int ai_addrlen; struct sockaddr* ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; int ai_flags; } ;
typedef int socklen_t ;
typedef int port_str ;
typedef int hints ;
typedef int fd_set ;
typedef int err ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,struct sockaddr*,int) ;
 int VAR_13 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct addrinfo*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 struct hostent* FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (int,int ,int ,int*,int*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (unsigned short) ;
 scalar_t__ FUNC_12 (char const*,char*,int) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (struct addrinfo*,int ,int) ;
 int FUNC_15 (int,int *,int *,int *,int *) ;
 scalar_t__ FUNC_16 (int,int ,int ,char const*,int) ;
 int FUNC_17 (char*,int,char*,unsigned short) ;
 int FUNC_18 (int ,int ,int ) ;
 int VAR_14 ;
 int FUNC_19 (char*,char const*,int) ;

int FUNC_20(const char * VAR_15, unsigned short VAR_16,
                    unsigned int VAR_17)
{
 int VAR_18, VAR_19;




 char VAR_20[VAR_6+1];
 char VAR_21[8];
 struct addrinfo *VAR_22, *VAR_23;
 struct addrinfo VAR_24;
 FUNC_14(&VAR_24, 0, sizeof(VAR_24));




 VAR_24.ai_socktype = VAR_8;
 VAR_24.ai_family = VAR_2;

 FUNC_17(VAR_21, sizeof(VAR_21), "%hu", VAR_16);
 if(VAR_15[0] == '[')
 {

  int VAR_25, VAR_26;
  for(VAR_25 = 0, VAR_26 = 1; VAR_15[VAR_26] && (VAR_15[VAR_26] != ']') && VAR_25 < VAR_6; VAR_25++, VAR_26++)
  {
   VAR_20[VAR_25] = VAR_15[VAR_26];
   if(0 == FUNC_12(VAR_15+VAR_26, "%25", 3))
    VAR_26+=2;
  }
  VAR_20[VAR_25] = '\0';
 }
 else
 {
  FUNC_19(VAR_20, VAR_15, VAR_6);
 }
 VAR_20[VAR_6] = '\0';
 VAR_19 = FUNC_7(VAR_20, VAR_21, &VAR_24, &VAR_22);
 if(VAR_19 != 0)
 {



  FUNC_4(VAR_14, "getaddrinfo() error : %s\n", FUNC_6(VAR_19));

  return -1;
 }
 VAR_18 = -1;
 for(VAR_23 = VAR_22; VAR_23; VAR_23 = VAR_23->ai_next)
 {
  VAR_18 = FUNC_18(VAR_23->ai_family, VAR_23->ai_socktype, VAR_23->ai_protocol);
  if(VAR_18 < 0)
   continue;
  if(VAR_23->ai_addr->sa_family == VAR_1 && VAR_17 > 0) {
   struct sockaddr_in6 * VAR_27 = (struct sockaddr_in6 *)VAR_23->ai_addr;
   VAR_27->sin6_scope_id = VAR_17;
  }
  VAR_19 = FUNC_3(VAR_18, VAR_23->ai_addr, VAR_23->ai_addrlen);
  if(VAR_19 < 0)
  {
   FUNC_2(VAR_18);
   continue;
  }
  else
  {
   break;
  }
 }
 FUNC_5(VAR_22);
 if(VAR_18 < 0)
  return -1;
 if(VAR_19 < 0)
  return -1;

 return VAR_18;
}
