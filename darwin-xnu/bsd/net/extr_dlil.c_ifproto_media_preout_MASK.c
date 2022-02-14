
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct ifnet {int dummy; } ;
typedef int protocol_family_t ;
typedef int mbuf_t ;
typedef int errno_t ;


 int VAR_0 ;

__attribute__((used)) static errno_t
FUNC_0(struct ifnet *VAR_1, protocol_family_t VAR_2,
    mbuf_t *VAR_3, const struct sockaddr *VAR_4, void *VAR_5, char *VAR_6,
    char *VAR_7)
{
#pragma unused(ifp, protocol, packet, dest, route, frame_type, link_layer_dest)
 return (VAR_0);

}
