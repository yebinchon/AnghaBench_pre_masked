
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct iovec {int * iov_base; } ;
struct in6_cga_prepare {int cga_security_level; } ;
struct in6_addr {int dummy; } ;
struct TYPE_2__ {struct iovec cga_pubkey; struct in6_cga_prepare cga_prepare; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (struct in6_cga_prepare*,struct iovec const*,int ,struct in6_addr*) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct in6_cga_prepare *VAR_3, u_int8_t VAR_4,
    struct in6_addr *VAR_5)
{
 int VAR_6;
 const struct iovec *VAR_7;

 FUNC_2(VAR_1);
 FUNC_0(VAR_5 != ((void*)0));

 if (VAR_3 == ((void*)0))
  VAR_3 = &VAR_2.cga_prepare;
 else
  VAR_3->cga_security_level =
      VAR_2.cga_prepare.cga_security_level;

 VAR_7 = &VAR_2.cga_pubkey;

 if (VAR_7->iov_base != ((void*)0)) {
  FUNC_1(VAR_3, VAR_7, VAR_4, VAR_5);
  VAR_6 = 0;
 }
 else
  VAR_6 = VAR_0;

 return (VAR_6);
}
