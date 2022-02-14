
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int s_addr; TYPE_1__ sin_addr; int sin_family; int sin_port; } ;
struct sockaddr {int dummy; } ;
struct in_addr {int s_addr; TYPE_1__ sin_addr; int sin_family; int sin_port; } ;
typedef int sockaddr4 ;
typedef int addr4 ;
typedef int USHORT ;
typedef scalar_t__ UINT ;
typedef scalar_t__ SOCKET ;
typedef int IP ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sockaddr_in*,int *) ;
 int VAR_2 ;
 int FUNC_1 (struct sockaddr_in*,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,struct sockaddr*,int,scalar_t__,int*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;

SOCKET FUNC_6(IP *VAR_3, UINT VAR_4, UINT VAR_5, bool *VAR_6)
{
 SOCKET VAR_7;
 struct sockaddr_in VAR_8;
 struct in_addr VAR_9;

 FUNC_1(&VAR_8, sizeof(VAR_8));
 FUNC_1(&VAR_9, sizeof(VAR_9));


 FUNC_0(&VAR_9, VAR_3);
 VAR_8 = FUNC_4((USHORT)VAR_4);
 VAR_8 = VAR_0;
 VAR_8 = VAR_9;


 VAR_7 = FUNC_5(VAR_0, VAR_2, 0);
 if (VAR_7 != VAR_1)
 {

  if (FUNC_3(VAR_7, (struct sockaddr *)&VAR_8, sizeof(struct sockaddr_in), VAR_5, VAR_6) != 0)
  {

   FUNC_2(VAR_7);
   VAR_7 = VAR_1;
  }
 }

 return VAR_7;
}
