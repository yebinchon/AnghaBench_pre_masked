
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct UPNPUrls {int controlURL; } ;
struct TYPE_2__ {int servicetype; } ;
struct IGDdatas {TYPE_1__ first; } ;


 int FUNC_0 (int ,int ,char*,unsigned int*,int *) ;
 scalar_t__ FUNC_1 (char*,char*) ;

int
FUNC_2(struct UPNPUrls * VAR_0, struct IGDdatas * VAR_1)
{
 char VAR_2[64];
 unsigned int VAR_3;
 VAR_2[0] = '\0';
 FUNC_0(VAR_0->controlURL, VAR_1->first.servicetype,
                    VAR_2, &VAR_3, ((void*)0));
 if(0 == FUNC_1("Connected", VAR_2))
  return 1;
 else if(0 == FUNC_1("Up", VAR_2))
  return 1;
 else
  return 0;
}
