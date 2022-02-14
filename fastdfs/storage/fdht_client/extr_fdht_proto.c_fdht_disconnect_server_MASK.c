
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sock; } ;
typedef TYPE_1__ FDHTServerInfo ;


 int FUNC_0 (int) ;

void FUNC_1(FDHTServerInfo *VAR_0)
{
 if (VAR_0->sock > 0)
 {
  FUNC_0(VAR_0->sock);
  VAR_0->sock = -1;
 }
}
