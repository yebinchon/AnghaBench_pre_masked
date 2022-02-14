
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_3__ {int ss_len; } ;
struct secasindex {scalar_t__ ipsec_ifindex; scalar_t__ proto; scalar_t__ mode; scalar_t__ reqid; TYPE_1__ dst; TYPE_1__ src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (struct sockaddr*,struct sockaddr*,int) ;

__attribute__((used)) static int
FUNC_2(
    struct secasindex *VAR_5,
    struct secasindex *VAR_6,
    int VAR_7)
{

 if (VAR_5 == ((void*)0) && VAR_6 == ((void*)0))
  return 1;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
  return 0;

 if (VAR_5->ipsec_ifindex != 0 && VAR_5->ipsec_ifindex != VAR_6->ipsec_ifindex)
  return 0;

 if (VAR_5->proto != VAR_6->proto)
  return 0;

 if (VAR_7 == VAR_0) {
  if (VAR_5->mode != VAR_6->mode)
   return 0;
  if (VAR_5->reqid != VAR_6->reqid)
   return 0;
  if (FUNC_0(&VAR_5->src, &VAR_6->src, VAR_5->src.ss_len) != 0 ||
      FUNC_0(&VAR_5->dst, &VAR_6->dst, VAR_5->dst.ss_len) != 0)
   return 0;
 } else {


  if (VAR_7 & VAR_3) {




   if (VAR_6->reqid != 0 && VAR_5->reqid != VAR_6->reqid)
    return 0;
  }

  if (VAR_7 & VAR_1) {
   if (VAR_5->mode != VAR_4
    && VAR_5->mode != VAR_6->mode)
    return 0;
  }

  if (FUNC_1((struct sockaddr *)&VAR_5->src,
       (struct sockaddr *)&VAR_6->src, VAR_7 & VAR_2 ? 1 : 0) != 0) {
   return 0;
  }
  if (FUNC_1((struct sockaddr *)&VAR_5->dst,
       (struct sockaddr *)&VAR_6->dst, VAR_7 & VAR_2 ? 1 : 0) != 0) {
   return 0;
  }
 }

 return 1;
}
