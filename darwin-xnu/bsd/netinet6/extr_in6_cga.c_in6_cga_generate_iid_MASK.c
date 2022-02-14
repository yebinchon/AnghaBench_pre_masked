
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct iovec {int* iov_base; int iov_len; } ;
struct TYPE_2__ {int octets; } ;
struct in6_cga_prepare {int cga_security_level; TYPE_1__ cga_modifier; } ;
struct in6_addr {int* s6_addr; int* s6_addr8; } ;
typedef int SHA1_CTX ;


 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(const struct in6_cga_prepare *VAR_1,
    const struct iovec *VAR_2, u_int8_t VAR_3, struct in6_addr *VAR_4)
{
 SHA1_CTX VAR_5;
 u_int8_t VAR_6[VAR_0];

 FUNC_3(VAR_1 != ((void*)0));
 FUNC_3(VAR_1->cga_security_level < 8);
 FUNC_3(VAR_2 != ((void*)0) && VAR_2->iov_base != ((void*)0));
 FUNC_3(VAR_4 != ((void*)0));

 FUNC_1(&VAR_5);
 FUNC_2(&VAR_5, &VAR_1->cga_modifier.octets, 16);
 FUNC_2(&VAR_5, VAR_4->s6_addr, 8);
 FUNC_2(&VAR_5, &VAR_3, 1);
 FUNC_2(&VAR_5, VAR_2->iov_base, VAR_2->iov_len);

 FUNC_0(VAR_6, &VAR_5);

 VAR_4->s6_addr8[8] =
     (VAR_1->cga_security_level << 5) | (VAR_6[0] & 0x1c);
 VAR_4->s6_addr8[9] = VAR_6[1];
 VAR_4->s6_addr8[10] = VAR_6[2];
 VAR_4->s6_addr8[11] = VAR_6[3];
 VAR_4->s6_addr8[12] = VAR_6[4];
 VAR_4->s6_addr8[13] = VAR_6[5];
 VAR_4->s6_addr8[14] = VAR_6[6];
 VAR_4->s6_addr8[15] = VAR_6[7];
}
