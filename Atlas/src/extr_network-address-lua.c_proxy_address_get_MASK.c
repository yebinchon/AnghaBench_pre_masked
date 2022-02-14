
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int sin6_port; int sin6_addr; } ;
struct TYPE_9__ {int sin_port; int sin_addr; } ;
struct TYPE_8__ {int sa_family; } ;
struct TYPE_7__ {char* sun_path; } ;
struct TYPE_11__ {TYPE_4__ ipv6; TYPE_3__ ipv4; TYPE_2__ common; TYPE_1__ un; } ;
struct TYPE_12__ {TYPE_5__ addr; int name; } ;
typedef TYPE_6__ network_address ;
typedef int lua_State ;
typedef int gsize ;
typedef int dst_addr ;





 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int,int *,char*,int) ;
 char* FUNC_4 (int *,int,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char const*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (char const*,int ,int ) ;

__attribute__((used)) static int FUNC_12(lua_State *VAR_1) {
 network_address *VAR_2 = *(network_address **)FUNC_5(VAR_1);
 gsize VAR_3 = 0;
 const char *VAR_4 = FUNC_4(VAR_1, 2, &VAR_3);

 if (FUNC_11(VAR_4, VAR_3, FUNC_0("type"))) {
  FUNC_6(VAR_1, VAR_2->addr.common.sa_family);
 } else if (FUNC_11(VAR_4, VAR_3, FUNC_0("name"))) {
  FUNC_7(VAR_1, FUNC_1(VAR_2->name));
 } else if (FUNC_11(VAR_4, VAR_3, FUNC_0("address"))) {



  const char *VAR_5 = ((void*)0);

  switch (VAR_2->addr.common.sa_family) {
  case 130:
   VAR_5 = FUNC_2(VAR_2->addr.ipv4.sin_addr);
   if (!VAR_5) {

   }
   break;
  case 128:
   VAR_5 = VAR_2->addr.un.sun_path;
   break;

  default:
   break;
  }

  if (((void*)0) == VAR_5) {
   FUNC_8(VAR_1);
  } else {
   FUNC_9(VAR_1, VAR_5);
  }
 } else if (FUNC_11(VAR_4, VAR_3, FUNC_0("port"))) {
  switch (VAR_2->addr.common.sa_family) {
  case 130:
   FUNC_6(VAR_1, FUNC_10(VAR_2->addr.ipv4.sin_port));
   break;
  case 129:
   FUNC_6(VAR_1, FUNC_10(VAR_2->addr.ipv6.sin6_port));
   break;
  default:
   FUNC_8(VAR_1);
   break;
  }
 } else {
  FUNC_8(VAR_1);
 }

 return 1;
}
