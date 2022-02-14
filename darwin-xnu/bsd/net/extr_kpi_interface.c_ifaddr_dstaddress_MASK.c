
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct sockaddr {int dummy; } ;
typedef TYPE_1__* ifaddr_t ;
typedef int errno_t ;
struct TYPE_7__ {scalar_t__ sa_len; } ;
struct TYPE_6__ {TYPE_3__* ifa_dstaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,struct sockaddr*,scalar_t__) ;

errno_t
FUNC_3(ifaddr_t VAR_3, struct sockaddr *VAR_4, u_int32_t VAR_5)
{
 u_int32_t VAR_6;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_3);
 if (VAR_3->ifa_dstaddr == ((void*)0)) {
  FUNC_1(VAR_3);
  return (VAR_2);
 }

 VAR_6 = (VAR_5 >= VAR_3->ifa_dstaddr->sa_len) ?
     VAR_3->ifa_dstaddr->sa_len : VAR_5;
 FUNC_2(VAR_3->ifa_dstaddr, VAR_4, VAR_6);

 if (VAR_3->ifa_dstaddr->sa_len > VAR_5) {
  FUNC_1(VAR_3);
  return (VAR_1);
 }

 FUNC_1(VAR_3);
 return (0);
}
