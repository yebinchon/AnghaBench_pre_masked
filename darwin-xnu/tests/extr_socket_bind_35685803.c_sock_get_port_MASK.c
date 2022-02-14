
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sa_family; } ;
struct TYPE_5__ {int sin6_port; } ;
struct TYPE_4__ {int sin_port; } ;
union sockaddr_in_4_6 {TYPE_3__ sa; TYPE_2__ sin6; TYPE_1__ sin; } ;
typedef int uint16_t ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sin ;




 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (union sockaddr_in_4_6*,int) ;
 int FUNC_3 (int,struct sockaddr*,int*) ;

__attribute__((used)) static uint16_t
FUNC_4(int VAR_1)
{
 int VAR_2;
 uint16_t VAR_3;
 union sockaddr_in_4_6 VAR_4;
 socklen_t VAR_5;

 VAR_5 = sizeof(VAR_4);
 FUNC_2(&VAR_4, VAR_5);
 VAR_2 = FUNC_3(VAR_1, (struct sockaddr *)&VAR_4, &VAR_5);
 VAR_0;
 FUNC_1(VAR_2, "getsockname(%d)", VAR_1);
 if (VAR_2 != 0) {
  return (0);
 }
 switch (VAR_4.sa.sa_family) {
 case 129:
  VAR_3 = VAR_4.sin.sin_port;
  break;
 case 128:
  VAR_3 = VAR_4.sin6.sin6_port;
  break;
 default:
  FUNC_0("unknown address family %d\n",
         VAR_4.sa.sa_family);
  VAR_3 = 0;
  break;
 }
 return (VAR_3);
}
