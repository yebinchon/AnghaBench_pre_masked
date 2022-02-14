
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ifnet_attach_proto_param_v2 {int demux_count; int demux_list; int send_arp; int resolve; int detached; int ioctl; int event; int pre_output; int input; } ;
struct TYPE_3__ {int send_arp; int resolve_multi; int detached; int ioctl; int event; int pre_output; int input; } ;
struct TYPE_4__ {TYPE_1__ v2; } ;
struct if_proto {TYPE_2__ kpi; int proto_kpi; scalar_t__ protocol_family; int * ifp; } ;
typedef scalar_t__ protocol_family_t ;
typedef int * ifnet_t ;
typedef int errno_t ;


 int FUNC_0 (char*,char*,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct if_proto*,int) ;
 int VAR_6 ;
 int FUNC_2 (struct if_proto*,int ,int ,int*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_7 ;
 char* FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ) ;
 int VAR_8 ;
 int FUNC_10 (char*,char*,scalar_t__,int) ;
 struct if_proto* FUNC_11 (int ) ;
 int FUNC_12 (int ,struct if_proto*) ;

errno_t
FUNC_13(ifnet_t VAR_9, protocol_family_t VAR_10,
    const struct ifnet_attach_proto_param_v2 *VAR_11)
{
 int VAR_12 = 0;
 struct if_proto *VAR_13 = ((void*)0);
 uint32_t VAR_14 = 0;

 FUNC_6();
 if (VAR_9 == ((void*)0) || VAR_10 == 0 || VAR_11 == ((void*)0)) {
  VAR_12 = VAR_1;
  goto end;
 }

 if (!FUNC_8(VAR_9)) {
  VAR_12 = VAR_3;
  goto end;
 }

 VAR_13 = FUNC_11(VAR_6);
 if (VAR_13 == ((void*)0)) {
  VAR_12 = VAR_2;
  goto end;
 }
 FUNC_1(VAR_13, sizeof(*VAR_13));


 VAR_13->ifp = VAR_9;
 VAR_13->protocol_family = VAR_10;
 VAR_13->proto_kpi = VAR_8;
 VAR_13->kpi.v2.input = VAR_11->input;
 VAR_13->kpi.v2.pre_output = VAR_11->pre_output;
 VAR_13->kpi.v2.event = VAR_11->event;
 VAR_13->kpi.v2.ioctl = VAR_11->ioctl;
 VAR_13->kpi.v2.detached = VAR_11->detached;
 VAR_13->kpi.v2.resolve_multi = VAR_11->resolve;
 VAR_13->kpi.v2.send_arp = VAR_11->send_arp;

 VAR_12 = FUNC_2(VAR_13,
   VAR_11->demux_list, VAR_11->demux_count,
   &VAR_14);

end:
 if (VAR_12 != 0 && VAR_12 != VAR_0 && VAR_9 != ((void*)0)) {
  FUNC_0("%s: failed to attach v2 protocol %d (err=%d)\n",
      FUNC_4(VAR_9), VAR_10, VAR_12);
 } else {
  if (VAR_7) {
   FUNC_10("%s: attached v2 protocol %d (count = %d)\n",
          FUNC_4(VAR_9),
          VAR_10, VAR_14);
  }
 }
 FUNC_5();
 if (VAR_12 == 0) {





  (void) FUNC_9(VAR_9, VAR_4, VAR_4);
  (void) FUNC_7(VAR_9, 0, VAR_5, ((void*)0));
  FUNC_3(VAR_9);
 } else if (VAR_13 != ((void*)0)) {
  FUNC_12(VAR_6, VAR_13);
 }
 return (VAR_12);
}
