
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {unsigned short sin6_port; } ;
struct sockaddr_in {unsigned short sin_port; } ;
struct TYPE_2__ {scalar_t__ ss_family; } ;
struct TCP_Server_Info {TYPE_1__ dstaddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct TCP_Server_Info*) ;
 unsigned short FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct TCP_Server_Info *VAR_3)
{
 unsigned short int *VAR_4;
 struct sockaddr_in6 *VAR_5 = (struct sockaddr_in6 *)&VAR_3->dstaddr;
 struct sockaddr_in *VAR_6 = (struct sockaddr_in *)&VAR_3->dstaddr;

 if (VAR_3->dstaddr.ss_family == VAR_0)
  VAR_4 = &VAR_5->sin6_port;
 else
  VAR_4 = &VAR_6->sin_port;

 if (*VAR_4 == 0) {
  int VAR_7;


  *VAR_4 = FUNC_1(VAR_1);

  VAR_7 = FUNC_0(VAR_3);
  if (VAR_7 >= 0)
   return VAR_7;


  *VAR_4 = FUNC_1(VAR_2);
 }

 return FUNC_0(VAR_3);
}
