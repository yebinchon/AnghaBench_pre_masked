
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_dl {int sdl_alen; } ;
struct sockaddr {int dummy; } ;
struct mbuf {int m_flags; } ;
typedef int sdl ;
typedef int protocol_family_t ;
typedef struct mbuf* mbuf_t ;
typedef int ifnet_t ;
typedef int ethertype_ipv6 ;
typedef scalar_t__ errno_t ;


 int VAR_0 ;
 int * FUNC_0 (struct sockaddr_dl*) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,struct sockaddr_in6 const*,struct sockaddr_dl*,int,void*,struct mbuf*) ;

__attribute__((used)) static errno_t
FUNC_4(ifnet_t VAR_2, protocol_family_t VAR_3,
    mbuf_t *VAR_4, const struct sockaddr *VAR_5, void *VAR_6,
    char *VAR_7, char *VAR_8)
{
#pragma unused(protocol_family)
 errno_t VAR_9;
 struct sockaddr_dl VAR_10;
 struct mbuf *VAR_11 = *VAR_4;




 VAR_11->m_flags |= VAR_1;

 VAR_9 = FUNC_3(VAR_2, (const struct sockaddr_in6 *)
     (uintptr_t)(size_t)VAR_5, &VAR_10, sizeof (VAR_10), VAR_6, *VAR_4);

 if (VAR_9 == 0) {
  u_int16_t VAR_12 = FUNC_2(VAR_0);

  FUNC_1(&VAR_12, VAR_7, sizeof (VAR_12));
  FUNC_1(FUNC_0(&VAR_10), VAR_8, VAR_10.sdl_alen);
 }

 return (VAR_9);
}
