
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in {int sin_addr; int sin_port; int sin_family; } ;
struct TYPE_2__ {int param_port; int param_ip; int proxyip; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sockaddr_in *VAR_3)
{
 static int VAR_4;

 VAR_3->sin_family = VAR_0;
 VAR_3->sin_port = FUNC_0(VAR_1[VAR_4].param_port);
 VAR_3->sin_addr = VAR_1[VAR_4].proxyip;

 FUNC_1("Select Back-end server %s:%d\n", VAR_1[VAR_4].param_ip,
  VAR_1[VAR_4].param_port);

 VAR_4++;

 if (VAR_4 == VAR_2)
  VAR_4 = 0;
}
