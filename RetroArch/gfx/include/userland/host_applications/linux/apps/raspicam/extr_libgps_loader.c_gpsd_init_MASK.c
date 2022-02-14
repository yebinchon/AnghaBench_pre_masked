
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* server; int port; } ;
typedef TYPE_1__ gpsd_info ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(gpsd_info *VAR_1)
{
   FUNC_0(VAR_1, 0, sizeof(gpsd_info));
   VAR_1->server = "localhost";
   VAR_1->port = VAR_0;
}
