
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int s ;
struct TYPE_3__ {int * ip; } ;
typedef TYPE_1__ netadr_t ;


 int FUNC_0 (char*,int,char*,int ,int ,int ,int ) ;

char *FUNC_1 (netadr_t VAR_0)
{
 static char VAR_1[64];

 FUNC_0 (VAR_1, sizeof(VAR_1), "%i.%i.%i.%i", VAR_0.ip[0], VAR_0.ip[1], VAR_0.ip[2], VAR_0.ip[3]);

 return VAR_1;
}
