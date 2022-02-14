
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sadb_address {scalar_t__ sadb_address_proto; scalar_t__ sadb_address_prefixlen; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_4__ {int sa_family; scalar_t__ sa_len; } ;
struct TYPE_3__ {int out_invaddr; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct sadb_address*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct sadb_address *VAR_4,
        struct sadb_address *VAR_5)
{
 u_int VAR_6 = 0;


 if (VAR_4->sadb_address_proto != VAR_5->sadb_address_proto) {
  FUNC_2((VAR_2, "key_parse: upper layer protocol mismatched.\n"));
  FUNC_1(VAR_3.out_invaddr);
  return (VAR_1);
 }


 if (FUNC_0(VAR_4)->sa_family !=
  FUNC_0(VAR_5)->sa_family) {
  FUNC_2((VAR_2, "key_parse: address family mismatched.\n"));
  FUNC_1(VAR_3.out_invaddr);
  return (VAR_1);
 }
 if (FUNC_0(VAR_4)->sa_len !=
  FUNC_0(VAR_5)->sa_len) {
  FUNC_2((VAR_2,
      "key_parse: address struct size mismatched.\n"));
  FUNC_1(VAR_3.out_invaddr);
  return (VAR_1);
 }

 switch (FUNC_0(VAR_4)->sa_family) {
  case 129:
   if (FUNC_0(VAR_4)->sa_len != sizeof(struct sockaddr_in)) {
    FUNC_1(VAR_3.out_invaddr);
    return (VAR_1);
   }
   break;
  case 128:
   if (FUNC_0(VAR_4)->sa_len != sizeof(struct sockaddr_in6)) {
    FUNC_1(VAR_3.out_invaddr);
    return (VAR_1);
   }
   break;
  default:
   FUNC_2((VAR_2,
       "key_parse: unsupported address family.\n"));
   FUNC_1(VAR_3.out_invaddr);
   return (VAR_0);
 }

 switch (FUNC_0(VAR_4)->sa_family) {
  case 129:
   VAR_6 = sizeof(struct in_addr) << 3;
   break;
  case 128:
   VAR_6 = sizeof(struct in6_addr) << 3;
   break;
  default:
   VAR_6 = 0;
   break;
 }


 if (VAR_4->sadb_address_prefixlen > VAR_6 ||
  VAR_5->sadb_address_prefixlen > VAR_6) {
  FUNC_2((VAR_2,
      "key_parse: illegal prefixlen.\n"));
  FUNC_1(VAR_3.out_invaddr);
  return (VAR_1);
 }





 return (0);
}
