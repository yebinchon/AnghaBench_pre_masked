
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int32_t ;
struct inpcbinfo {int dummy; } ;
struct inpcb {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_12__ {int sin6_len; int sin6_port; struct in6_addr const sin6_addr; } ;
struct TYPE_9__ {scalar_t__ sin_family; int sin_len; int sin_port; int sin_addr; } ;
struct TYPE_13__ {TYPE_5__ v6; TYPE_2__ v4; } ;
struct TYPE_10__ {int sin6_len; int sin6_port; struct in6_addr const sin6_addr; int sin6_family; } ;
struct TYPE_8__ {scalar_t__ sin_family; int sin_len; int sin_port; int sin_addr; } ;
struct TYPE_11__ {TYPE_3__ v6; TYPE_1__ v4; } ;
struct TYPE_14__ {TYPE_6__ local; TYPE_4__ remote; } ;
typedef TYPE_7__ nstat_tcp_add_param ;
typedef int * nstat_provider_cookie_t ;
typedef int errno_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inpcb* FUNC_0 (struct inpcbinfo*,struct in6_addr*,int ,struct in6_addr*,int ,int,int *) ;
 int FUNC_1 (struct inpcb*,int ,int ) ;
 struct inpcb* FUNC_2 (struct inpcbinfo*,int ,int ,int ,int ,int,int *) ;
 int * FUNC_3 (struct inpcb*) ;

__attribute__((used)) static errno_t
FUNC_4(
 struct inpcbinfo *VAR_3,
 const void *VAR_4,
 u_int32_t VAR_5,
 nstat_provider_cookie_t *VAR_6)
{
 struct inpcb *VAR_7 = ((void*)0);


 const nstat_tcp_add_param *VAR_8 = (const nstat_tcp_add_param*)VAR_4;
 if (VAR_5 < sizeof(*VAR_8))
 {
  return VAR_0;
 }


 if (VAR_8->remote.v4.sin_family != 0 &&
  VAR_8->remote.v4.sin_family != VAR_8->local.v4.sin_family)
 {
  return VAR_0;
 }


 switch (VAR_8->local.v4.sin_family)
 {
  case 129:
  {
   if (VAR_8->local.v4.sin_len != sizeof(VAR_8->local.v4) ||
      (VAR_8->remote.v4.sin_family != 0 &&
       VAR_8->remote.v4.sin_len != sizeof(VAR_8->remote.v4)))
     {
    return VAR_0;
     }

   VAR_7 = FUNC_2(VAR_3, VAR_8->remote.v4.sin_addr, VAR_8->remote.v4.sin_port,
      VAR_8->local.v4.sin_addr, VAR_8->local.v4.sin_port, 1, ((void*)0));
  }
  break;
  default:
   return VAR_0;
 }

 if (VAR_7 == ((void*)0))
  return VAR_1;


 *VAR_6 = FUNC_3(VAR_7);
 if (*VAR_6 == ((void*)0))
  FUNC_1(VAR_7, VAR_2, 0);

 return 0;
}
