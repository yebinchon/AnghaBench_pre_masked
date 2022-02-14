
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_dl {int dummy; } ;
struct sockaddr {int sa_family; } ;
struct ifnet {scalar_t__ (* if_check_multi ) (struct ifnet*,struct sockaddr const*) ;} ;
struct TYPE_5__ {scalar_t__ (* resolve_multi ) (struct ifnet*,struct sockaddr const*,struct sockaddr_dl*,size_t) ;} ;
struct TYPE_4__ {scalar_t__ (* resolve_multi ) (struct ifnet*,struct sockaddr const*,struct sockaddr_dl*,size_t) ;} ;
struct TYPE_6__ {TYPE_2__ v2; TYPE_1__ v1; } ;
struct if_proto {scalar_t__ proto_kpi; TYPE_3__ kpi; } ;
typedef scalar_t__ (* proto_media_resolve_multi ) (struct ifnet*,struct sockaddr const*,struct sockaddr_dl*,size_t) ;
typedef scalar_t__ errno_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sockaddr*,size_t) ;
 struct if_proto* FUNC_1 (struct ifnet*,int ) ;
 int FUNC_2 (struct if_proto*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*,int) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_7 (struct ifnet*,struct sockaddr const*) ;

errno_t
FUNC_8(struct ifnet *VAR_2, const struct sockaddr *VAR_3,
    struct sockaddr *VAR_4, size_t VAR_5)
{
 errno_t VAR_6 = VAR_0;
 struct if_proto *VAR_7;
 const struct sockaddr *VAR_8;
 proto_media_resolve_multi VAR_9;

 if (!FUNC_4(VAR_2, 1))
  return (VAR_6);

 FUNC_0(VAR_4, VAR_5);


 FUNC_6(VAR_2);
 VAR_7 = FUNC_1(VAR_2, VAR_3->sa_family);
 FUNC_5(VAR_2);
 if (VAR_7 != ((void*)0)) {
  VAR_9 = (VAR_7->proto_kpi == VAR_1 ?
      VAR_7->kpi.v1.resolve_multi : VAR_7->kpi.v2.resolve_multi);
  if (VAR_9 != ((void*)0))
   VAR_6 = VAR_9(VAR_2, VAR_3,
       (struct sockaddr_dl *)(void *)VAR_4, VAR_5);
  FUNC_2(VAR_7);
 }


 if ((VAR_6 == VAR_0 || VAR_6 == 0) && VAR_2->if_check_multi) {
  if (VAR_6 == 0)
   VAR_8 = VAR_4;
  else
   VAR_8 = VAR_3;
  VAR_6 = VAR_2->if_check_multi(VAR_2, VAR_8);
 }

 FUNC_3(VAR_2);
 return (VAR_6);
}
