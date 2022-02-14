
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


typedef int u_int32_t ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {size_t sa_family; } ;
struct rtentry {int dummy; } ;
struct radix_node_head {int dummy; } ;
struct TYPE_10__ {scalar_t__ sin_family; int sin_len; } ;
struct TYPE_11__ {TYPE_4__ v4; } ;
struct TYPE_8__ {scalar_t__ sin6_family; int sin6_len; } ;
struct TYPE_7__ {scalar_t__ sin_family; int sin_len; } ;
struct TYPE_9__ {TYPE_2__ v6; TYPE_1__ v4; } ;
struct TYPE_12__ {int ifindex; TYPE_5__ mask; TYPE_3__ dst; } ;
typedef TYPE_6__ nstat_route_add_param ;
typedef int * nstat_provider_cookie_t ;
typedef int errno_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 struct rtentry* FUNC_2 (int ,struct sockaddr*,struct sockaddr*,struct radix_node_head*,int ) ;
 struct radix_node_head** VAR_8 ;

__attribute__((used)) static errno_t
FUNC_3(
 const void *VAR_9,
 u_int32_t VAR_10,
 nstat_provider_cookie_t *VAR_11)
{


 union
 {
  struct sockaddr *sa;
  const struct sockaddr *const_sa;
 } VAR_12, VAR_13;

 const nstat_route_add_param *VAR_14 = (const nstat_route_add_param*)VAR_9;
 *VAR_11 = ((void*)0);

 if (VAR_10 < sizeof(*VAR_14))
 {
  return VAR_4;
 }

 if (VAR_14->dst.v4.sin_family == 0 ||
  VAR_14->dst.v4.sin_family > VAR_2 ||
  (VAR_14->mask.v4.sin_family != 0 && VAR_14->mask.v4.sin_family != VAR_14->dst.v4.sin_family))
 {
  return VAR_4;
 }

 if (VAR_14->dst.v4.sin_len > sizeof(VAR_14->dst) ||
  (VAR_14->mask.v4.sin_family && VAR_14->mask.v4.sin_len > sizeof(VAR_14->mask.v4.sin_len)))
 {
  return VAR_4;
 }
 if ((VAR_14->dst.v4.sin_family == VAR_0 &&
     VAR_14->dst.v4.sin_len < sizeof(struct sockaddr_in)) ||
     (VAR_14->dst.v6.sin6_family == VAR_1 &&
     VAR_14->dst.v6.sin6_len < sizeof(struct sockaddr_in6)))
 {
  return VAR_4;
 }

 VAR_12.const_sa = (const struct sockaddr*)&VAR_14->dst;
 VAR_13.const_sa = VAR_14->mask.v4.sin_family ? (const struct sockaddr*)&VAR_14->mask : ((void*)0);

 struct radix_node_head *VAR_15 = VAR_8[VAR_12.sa->sa_family];
 if (VAR_15 == ((void*)0)) return VAR_3;

 FUNC_0(VAR_7);
 struct rtentry *VAR_16 = FUNC_2(VAR_6, VAR_12.sa, VAR_13.sa, VAR_15, VAR_14->ifindex);
 FUNC_1(VAR_7);

 if (VAR_16) *VAR_11 = (nstat_provider_cookie_t)VAR_16;

 return VAR_16 ? 0 : VAR_5;
}
