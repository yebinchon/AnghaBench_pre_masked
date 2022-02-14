
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
typedef int address ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,void*,int) ;
 int VAR_2 ;
 int FUNC_2 (struct sockaddr_in*,int ,int) ;
 int FUNC_3 (int ) ;

void
FUNC_4
( int VAR_3,
  int VAR_4 )
{
    int VAR_5;
    struct sockaddr_in VAR_6;

    FUNC_2 (&VAR_6, 0, sizeof(VAR_6));
    VAR_6.sin_family = VAR_0;
    VAR_6.sin_addr.s_addr = VAR_1;
    VAR_6.sin_port = VAR_4;

    VAR_5 = FUNC_1 (VAR_3, (void *)&VAR_6, sizeof(VAR_6));
    if (VAR_5 == -1)
 FUNC_0 ("BindToPort: bind: %s", FUNC_3(VAR_2));
}
