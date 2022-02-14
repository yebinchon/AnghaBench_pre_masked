
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; } ;
struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {int sa_family; } ;
typedef int sa_family_t ;
typedef int curl_socklen_t ;





 int FUNC_0 (int,int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ,char*,int ) ;
 unsigned short FUNC_2 (int ) ;

bool FUNC_3(struct sockaddr *VAR_5, curl_socklen_t VAR_6,
                      char *VAR_7, long *VAR_8)
{
  struct sockaddr_in *VAR_9 = ((void*)0);






  (void)VAR_6;


  switch(VAR_5->sa_family) {
    case 130:
      VAR_9 = (struct sockaddr_in *)(void *) VAR_5;
      if(FUNC_0(VAR_5->sa_family, &VAR_9->sin_addr,
                        VAR_7, VAR_2)) {
        unsigned short VAR_10 = FUNC_2(VAR_9->sin_port);
        *VAR_8 = VAR_10;
        return VAR_3;
      }
      break;
    default:
      break;
  }

  VAR_7[0] = '\0';
  *VAR_8 = 0;
  VAR_4 = VAR_0;
  return VAR_1;
}
