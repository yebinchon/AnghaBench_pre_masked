
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct net_event_data {int dummy; } ;
struct kev_dl_proto_data {int proto_family; scalar_t__ proto_remaining_count; } ;
struct ifnet {int dummy; } ;
struct TYPE_5__ {int (* detached ) (struct ifnet*,int) ;} ;
struct TYPE_4__ {int (* detached ) (struct ifnet*,int) ;} ;
struct TYPE_6__ {TYPE_2__ v2; TYPE_1__ v1; } ;
struct if_proto {int protocol_family; scalar_t__ proto_kpi; TYPE_3__ kpi; int detached; int refcount; struct ifnet* ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct ifnet*,int *,int ) ;
 int FUNC_3 (struct ifnet*,int ,int ,struct net_event_data*,int) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*,int) ;
 int FUNC_6 (struct ifnet*,int ,int ,int *) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct ifnet*,int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (struct ifnet*,int) ;
 int FUNC_11 (struct ifnet*,int) ;
 int FUNC_12 (int ,struct if_proto*) ;

__attribute__((used)) static void
FUNC_13(struct if_proto *VAR_7)
{
 u_int32_t VAR_8;
 struct ifnet *VAR_9 = VAR_7->ifp;
 u_int32_t VAR_10 = VAR_7->protocol_family;
 struct kev_dl_proto_data VAR_11;

 VAR_8 = FUNC_1(&VAR_7->refcount, -1);
 if (VAR_8 > 1)
  return;


 FUNC_0(VAR_7->detached);

 if (VAR_7->proto_kpi == VAR_5) {
  if (VAR_7->kpi.v1.detached)
   VAR_7->kpi.v1.detached(VAR_9, VAR_7->protocol_family);
 }
 if (VAR_7->proto_kpi == VAR_6) {
  if (VAR_7->kpi.v2.detached)
   VAR_7->kpi.v2.detached(VAR_9, VAR_7->protocol_family);
 }





 FUNC_5(VAR_9, VAR_10);





 FUNC_8(VAR_9);
 VAR_11.proto_family = VAR_10;
 VAR_11.proto_remaining_count = FUNC_2(VAR_9, ((void*)0), 0);
 FUNC_7(VAR_9);

 FUNC_3(VAR_9, VAR_2, VAR_1,
     (struct net_event_data *)&VAR_11,
     sizeof (struct kev_dl_proto_data));

 if (VAR_11.proto_remaining_count == 0) {





  (void) FUNC_9(VAR_9, 0, VAR_0);
  (void) FUNC_6(VAR_9, 0, VAR_3, ((void*)0));
  FUNC_4(VAR_9);
 }

 FUNC_12(VAR_4, VAR_7);
}
