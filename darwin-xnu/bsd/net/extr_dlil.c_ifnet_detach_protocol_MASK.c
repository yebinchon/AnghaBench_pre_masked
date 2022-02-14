
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {void* send_arp; void* resolve_multi; void* ioctl; void* event; void* pre_output; int input; } ;
struct TYPE_11__ {void* send_arp; void* resolve_multi; void* ioctl; void* event; void* pre_output; int input; } ;
struct TYPE_13__ {TYPE_2__ v2; TYPE_1__ v1; } ;
struct if_proto {scalar_t__ proto_kpi; int detached; TYPE_3__ kpi; int protocol_family; } ;
typedef scalar_t__ protocol_family_t ;
typedef TYPE_4__* ifnet_t ;
typedef int errno_t ;
struct TYPE_14__ {int * if_proto_hash; int (* if_del_proto ) (TYPE_4__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct if_proto*,int ,int ) ;
 scalar_t__ VAR_2 ;
 struct if_proto* FUNC_1 (TYPE_4__*,scalar_t__) ;
 char* FUNC_2 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_3 (struct if_proto*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (char*,char*,char*,scalar_t__) ;
 size_t FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_4__*,int ) ;

errno_t
FUNC_9(ifnet_t VAR_13, protocol_family_t VAR_14)
{
 struct if_proto *VAR_15 = ((void*)0);
 int VAR_16 = 0;

 if (VAR_13 == ((void*)0) || VAR_14 == 0) {
  VAR_16 = VAR_0;
  goto end;
 }

 FUNC_5(VAR_13);

 VAR_15 = FUNC_1(VAR_13, VAR_14);
 if (VAR_15 == ((void*)0)) {
  VAR_16 = VAR_1;
  FUNC_4(VAR_13);
  goto end;
 }


 if (VAR_13->if_del_proto)
  VAR_13->if_del_proto(VAR_13, VAR_15->protocol_family);

 FUNC_0(&VAR_13->if_proto_hash[FUNC_7(VAR_14)],
     VAR_15, VAR_3, VAR_12);

 if (VAR_15->proto_kpi == VAR_11) {
  VAR_15->kpi.v1.input = VAR_5;
  VAR_15->kpi.v1.pre_output = VAR_8;
  VAR_15->kpi.v1.event = VAR_4;
  VAR_15->kpi.v1.ioctl = VAR_7;
  VAR_15->kpi.v1.resolve_multi = VAR_9;
  VAR_15->kpi.v1.send_arp = VAR_10;
 } else {
  VAR_15->kpi.v2.input = VAR_6;
  VAR_15->kpi.v2.pre_output = VAR_8;
  VAR_15->kpi.v2.event = VAR_4;
  VAR_15->kpi.v2.ioctl = VAR_7;
  VAR_15->kpi.v2.resolve_multi = VAR_9;
  VAR_15->kpi.v2.send_arp = VAR_10;
 }
 VAR_15->detached = 1;
 FUNC_4(VAR_13);

 if (VAR_2) {
  FUNC_6("%s: detached %s protocol %d\n", FUNC_2(VAR_13),
      (VAR_15->proto_kpi == VAR_11) ?
      "v1" : "v2", VAR_14);
 }


 FUNC_3(VAR_15);






 FUNC_3(VAR_15);

end:
 return (VAR_16);
}
