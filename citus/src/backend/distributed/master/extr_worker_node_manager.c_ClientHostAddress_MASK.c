
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int ss_family; } ;
struct TYPE_9__ {int salen; TYPE_4__ addr; } ;
struct TYPE_11__ {TYPE_1__ raddr; } ;
struct TYPE_10__ {char* data; } ;
typedef TYPE_2__* StringInfo ;
typedef TYPE_3__ Port ;




 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*,char*) ;
 char* FUNC_1 (int) ;
 TYPE_2__* FUNC_2 () ;
 char* FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*,int ,char*,int,int *,int ,int) ;

__attribute__((used)) static char *
FUNC_5(StringInfo VAR_3)
{
 Port *VAR_4 = VAR_0;
 char *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);
 int VAR_7 = VAR_1;
 int VAR_8 = VAR_2;
 int VAR_9 = 0;

 if (VAR_4 == ((void*)0))
 {
  VAR_6 = "cannot find tcp/ip connection to client";
  return VAR_6;
 }

 switch (VAR_4->raddr.addr.ss_family)
 {
  case 129:



   {
    break;
   }

  default:
  {
   VAR_6 = "invalid address family in connection";
   return VAR_6;
  }
 }

 VAR_5 = FUNC_3(VAR_7);

 VAR_9 = FUNC_4(&VAR_4->raddr.addr, VAR_4->raddr.salen,
           VAR_5, VAR_7, ((void*)0), 0, VAR_8);
 if (VAR_9 == 0)
 {
  FUNC_0(VAR_3, "%s", VAR_5);
 }
 else
 {
  StringInfo VAR_10 = FUNC_2();
  FUNC_0(VAR_10, "could not resolve client host: %s",
       FUNC_1(VAR_9));

  VAR_6 = VAR_10->data;
  return VAR_6;
 }

 return VAR_6;
}
