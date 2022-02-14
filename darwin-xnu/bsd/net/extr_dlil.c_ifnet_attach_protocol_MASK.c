
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ifnet_attach_proto_param {int demux_count; int demux_list; int send_arp; int resolve; int detached; int ioctl; int event; int pre_output; int input; } ;
struct TYPE_3__ {int send_arp; int resolve_multi; int detached; int ioctl; int event; int pre_output; int input; } ;
struct TYPE_4__ {TYPE_1__ v1; } ;
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
 int FUNC_1 (struct if_proto*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct if_proto*,int ,int ,int*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_8 ;
 char* FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ) ;
 int VAR_9 ;
 int FUNC_10 (char*,char*,scalar_t__,int) ;
 struct if_proto* FUNC_11 (int ) ;
 int FUNC_12 (int ,struct if_proto*) ;

errno_t
FUNC_13(ifnet_t VAR_10, protocol_family_t VAR_11,
    const struct ifnet_attach_proto_param *VAR_12)
{
 int VAR_13 = 0;
 struct if_proto *VAR_14 = ((void*)0);
 uint32_t VAR_15 = 0;

 FUNC_6();
 if (VAR_10 == ((void*)0) || VAR_11 == 0 || VAR_12 == ((void*)0)) {
  VAR_13 = VAR_1;
  goto end;
 }

 if (!FUNC_8(VAR_10)) {
  VAR_13 = VAR_3;
  goto end;
 }

 VAR_14 = FUNC_11(VAR_7);
 if (VAR_14 == ((void*)0)) {
  VAR_13 = VAR_2;
  goto end;
 }
 FUNC_1(VAR_14, VAR_6);


 VAR_14->ifp = VAR_10;
 VAR_14->protocol_family = VAR_11;
 VAR_14->proto_kpi = VAR_9;
 VAR_14->kpi.v1.input = VAR_12->input;
 VAR_14->kpi.v1.pre_output = VAR_12->pre_output;
 VAR_14->kpi.v1.event = VAR_12->event;
 VAR_14->kpi.v1.ioctl = VAR_12->ioctl;
 VAR_14->kpi.v1.detached = VAR_12->detached;
 VAR_14->kpi.v1.resolve_multi = VAR_12->resolve;
 VAR_14->kpi.v1.send_arp = VAR_12->send_arp;

 VAR_13 = FUNC_2(VAR_14,
   VAR_12->demux_list, VAR_12->demux_count,
   &VAR_15);

end:
 if (VAR_13 != 0 && VAR_13 != VAR_0 && VAR_10 != ((void*)0)) {
  FUNC_0("%s: failed to attach v1 protocol %d (err=%d)\n",
      FUNC_4(VAR_10), VAR_11, VAR_13);
 } else {
  if (VAR_8) {
   FUNC_10("%s: attached v1 protocol %d (count = %d)\n",
          FUNC_4(VAR_10),
          VAR_11, VAR_15);
  }
 }
 FUNC_5();
 if (VAR_13 == 0) {





  (void) FUNC_9(VAR_10, VAR_4, VAR_4);
  (void) FUNC_7(VAR_10, 0, VAR_5, ((void*)0));
  FUNC_3(VAR_10);
 } else if (VAR_14 != ((void*)0)) {
  FUNC_12(VAR_7, VAR_14);
 }
 return (VAR_13);
}
