
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_short ;
typedef int u_int16_t ;
struct ip6_hdr {int ip6_plen; int ip_len; int ip_off; } ;
struct ip {int ip6_plen; int ip_len; int ip_off; } ;
typedef int sa_family_t ;
struct TYPE_4__ {unsigned int pb_packet_len; struct ip6_hdr* pb_data; } ;
typedef TYPE_1__ pbuf_t ;


 int FUNC_0 (int *,int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int,int,void*) ;

void *
FUNC_4(pbuf_t *VAR_5, int VAR_6, void *VAR_7, int VAR_8,
    u_short *VAR_9, u_short *VAR_10, sa_family_t VAR_11)
{
 switch (VAR_11) {
 }
 FUNC_3(VAR_5, VAR_6, VAR_8, VAR_7);
 return (VAR_7);
}
