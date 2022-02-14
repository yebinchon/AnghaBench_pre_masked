
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_8__ {int * s6_addr32; } ;
struct TYPE_7__ {TYPE_4__ sin6_addr; } ;
struct TYPE_5__ {int * s6_addr32; } ;
struct TYPE_6__ {TYPE_1__ sin6_addr; } ;
struct in6_addrpolicy {scalar_t__ label; scalar_t__ use; TYPE_3__ addrmask; TYPE_2__ addr; } ;
typedef int ent0 ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct in6_addrpolicy*) ;
 int FUNC_1 (int ,struct in6_addrpolicy*,int) ;
 int FUNC_2 (struct in6_addrpolicy*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int *) ;

int
FUNC_4(u_long VAR_4, caddr_t VAR_5)
{
 int VAR_6;
 struct in6_addrpolicy VAR_7;

 if (VAR_4 != 129 && VAR_4 != 128)
  return (VAR_3);

 FUNC_1(VAR_5, &VAR_7, sizeof (VAR_7));

 if (VAR_7 == VAR_0)
  return (VAR_1);

 if (FUNC_3(&VAR_7, ((void*)0)) < 0)
  return (VAR_1);

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  VAR_7[VAR_6] &=
   VAR_7[VAR_6];
 }
 VAR_7 = 0;

 switch (VAR_4) {
 case 129:



  return (VAR_2);

 case 128:



  return (VAR_2);

 }

 return (0);
}
