
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; scalar_t__ sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int connect_addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sockaddr_in*,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6(int VAR_5)
{
   VAR_3 = 0;

   if(VAR_4 >= 0)
      return;

   if(FUNC_1(VAR_5) < 0)
      return;

   VAR_4 = FUNC_4(VAR_0, VAR_2, 0);

   if(VAR_4 < 0)
      return;

   struct sockaddr_in VAR_6;
   FUNC_3(&VAR_6, 0, sizeof(VAR_6));
   VAR_6.sin_family = VAR_0;
   VAR_6.sin_port = 0;
   VAR_6.sin_addr.s_addr = FUNC_2(VAR_1);

   if( FUNC_0(VAR_4, (struct sockaddr *)&VAR_6, sizeof(VAR_6)) < 0)
   {
      FUNC_5(VAR_4);
      VAR_4 = -1;
      return;
   }
}
