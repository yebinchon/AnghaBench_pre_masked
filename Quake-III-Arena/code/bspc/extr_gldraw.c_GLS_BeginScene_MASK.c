
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int address ;
typedef int WSADATA ;
typedef int WORD ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,struct sockaddr*,int) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_7 ;

void FUNC_7 (void)
{
 WSADATA VAR_8;
 WORD VAR_9;
 struct sockaddr_in VAR_10;
 int VAR_11;

 if (!VAR_7)
 {
  VAR_7 = 1;

  VAR_9 = FUNC_1(1, 1);

  VAR_11 = FUNC_2 (FUNC_1(1, 1), &VAR_8);

  if (VAR_11)
   FUNC_0 ("Winsock initialization failed.");

 }



 VAR_6 = FUNC_6 (VAR_4, VAR_5, VAR_3);
 if (VAR_6 == -1)
  FUNC_0 ("draw_socket failed");

 VAR_10.sin_family = VAR_0;
 VAR_10.sin_addr.s_addr = FUNC_5(VAR_2);
 VAR_10.sin_port = VAR_1;
 VAR_11 = FUNC_4 (VAR_6, (struct sockaddr *)&VAR_10, sizeof(VAR_10));
 if (VAR_11 == -1)
 {
  FUNC_3 (VAR_6);
  VAR_6 = 0;
 }
}
