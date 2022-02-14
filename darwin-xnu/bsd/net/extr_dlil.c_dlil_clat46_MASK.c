
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct nat464_addr {int dummy; } ;
struct in_addr {int dummy; } ;
struct ip {int ip_hl; int ip_id; int ip_ttl; int ip_p; int ip_tos; int ip_off; int ip_len; struct in_addr ip_dst; struct in_addr ip_src; } ;
struct in6_addr {int dummy; } ;
struct TYPE_10__ {struct in6_addr sin6_addr; } ;
struct in6_ifaddr {int ia_ifa; TYPE_1__ ia_addr; } ;
typedef scalar_t__ protocol_family_t ;
struct TYPE_11__ {int * pb_mbuf; struct ip* pb_data; } ;
typedef TYPE_2__ pbuf_t ;
typedef int * mbuf_t ;
typedef int ifnet_t ;
typedef int errno_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_12__ {int ip6s_clat464_out_success; int ip6s_clat464_out_invalpbuf_drop; int ip6s_clat464_out_46frag_transfail_drop; int ip6s_clat464_out_46proto_transfail_drop; int ip6s_clat464_out_46transfail_drop; int ip6s_clat464_out_v6synthfail_drop; int ip6s_clat464_out_nov6addr_drop; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int) ;
 struct in6_ifaddr* FUNC_3 (int ,int ) ;
 TYPE_9__ VAR_11 ;
 int FUNC_4 (TYPE_2__*,int,int,scalar_t__) ;
 int FUNC_5 (int ,struct in_addr*,struct in6_addr*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int,int ,int ,int ,struct in6_addr,struct in6_addr,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*,struct nat464_addr*,struct nat464_addr*,int ,scalar_t__,scalar_t__,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int *,int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static errno_t
FUNC_12(ifnet_t VAR_12, protocol_family_t *VAR_13, mbuf_t *VAR_14)
{
 FUNC_2(*VAR_13 == VAR_8);
 FUNC_2(FUNC_1(VAR_12));

 pbuf_t VAR_15, *VAR_16 = ((void*)0);
 struct ip *VAR_17 = ((void*)0);
 struct in_addr VAR_18, VAR_19;
 uint8_t VAR_20 = 0;
 struct in6_ifaddr *VAR_21 = ((void*)0);
 struct in6_addr *VAR_22 = ((void*)0);
 struct in6_addr VAR_23;
 int VAR_24 = 0;
 uint32_t VAR_25 = 0;
 uint64_t VAR_26 = 0;
 uint16_t VAR_27 = 0;
 uint16_t VAR_28 = 0;

 boolean_t VAR_29 = VAR_0;
 boolean_t VAR_30 = VAR_10;
 boolean_t VAR_31 = VAR_10;

 FUNC_10(&VAR_15, *VAR_14, VAR_12);
 VAR_16 = &VAR_15;
 VAR_17 = VAR_16->pb_data;

 VAR_18 = VAR_17->ip_src;
 VAR_19 = VAR_17->ip_dst;
 VAR_20 = VAR_17->ip_p;
 VAR_25 = VAR_17->ip_hl << 2;
 VAR_27 = VAR_17->ip_id;
 VAR_28 = FUNC_8(VAR_17->ip_off) & VAR_4;

 VAR_26 = FUNC_8(VAR_17->ip_len);







 if (FUNC_8(VAR_17->ip_off) & ~(VAR_2 | VAR_5)) {
  VAR_29 = VAR_10;


  if (VAR_28 != 0)
   VAR_30 = VAR_0;


  if (FUNC_8(VAR_17->ip_off) & VAR_3)
   VAR_31 = VAR_0;
 }





 VAR_21 = FUNC_3(VAR_12, VAR_1);
 if (VAR_21 == ((void*)0)) {
  VAR_11.ip6s_clat464_out_nov6addr_drop++;
  VAR_24 = -1;
  goto cleanup;
 }

 VAR_22 = &VAR_21->ia_addr.sin6_addr;





 if ((VAR_24 = FUNC_5(VAR_12, &VAR_19, &VAR_23)) != 0) {
  VAR_11.ip6s_clat464_out_v6synthfail_drop++;
  goto cleanup;
 }


 VAR_24 = (FUNC_6(VAR_16, VAR_25, VAR_17->ip_tos, VAR_17->ip_p,
     VAR_17->ip_ttl, *VAR_22, VAR_23, VAR_26) == VAR_6) ? 0 : -1;

 VAR_17 = ((void*)0);

 if (VAR_24 != 0) {
  VAR_11.ip6s_clat464_out_46transfail_drop++;
  goto cleanup;
 }





 VAR_24 = (FUNC_7(VAR_16, (struct nat464_addr *)&VAR_18, (struct nat464_addr *)&VAR_19,
     VAR_20, VAR_8, VAR_9, VAR_7, !VAR_30) == VAR_6) ? 0 : -1;

 if (VAR_24 != 0) {
  VAR_11.ip6s_clat464_out_46proto_transfail_drop++;
  goto cleanup;
 }


 if (VAR_29) {
  VAR_24 = FUNC_4(VAR_16, VAR_27, VAR_28, VAR_31);

  if (VAR_24 != 0) {
   VAR_11.ip6s_clat464_out_46frag_transfail_drop++;
   goto cleanup;
  }
 }

cleanup:
 if (VAR_21 != ((void*)0))
  FUNC_0(&VAR_21->ia_ifa);

 if (FUNC_11(VAR_16)) {
  *VAR_14 = VAR_16->pb_mbuf;
  VAR_16->pb_mbuf = ((void*)0);
  FUNC_9(VAR_16);
 } else {
  VAR_24 = -1;
  VAR_11.ip6s_clat464_out_invalpbuf_drop++;
 }

 if (VAR_24 == 0) {
  *VAR_13 = VAR_9;
  VAR_11.ip6s_clat464_out_success++;
 }

 return (VAR_24);
}
