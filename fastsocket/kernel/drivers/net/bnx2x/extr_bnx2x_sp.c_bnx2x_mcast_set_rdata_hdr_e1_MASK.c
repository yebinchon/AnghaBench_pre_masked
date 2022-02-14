
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_3__ {void* length; int echo; int client_id; void* offset; } ;
struct mac_configuration_cmd {TYPE_1__ hdr; } ;
struct bnx2x_raw_obj {int func_id; int cid; scalar_t__ rdata; } ;
struct bnx2x_mcast_ramrod_params {TYPE_2__* mcast_obj; } ;
struct bnx2x {int dummy; } ;
struct TYPE_4__ {struct bnx2x_raw_obj raw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct bnx2x *VAR_5,
     struct bnx2x_mcast_ramrod_params *VAR_6,
     u8 VAR_7)
{
 struct bnx2x_raw_obj *VAR_8 = &VAR_6->mcast_obj->raw;
 struct mac_configuration_cmd *VAR_9 =
  (struct mac_configuration_cmd *)(VAR_8->rdata);

 u8 VAR_10 = (FUNC_0(VAR_5) ?
       VAR_1*(1 + VAR_8->func_id) :
       VAR_2*(1 + VAR_8->func_id));

 VAR_9->hdr.offset = VAR_10;
 VAR_9->hdr.client_id = FUNC_1(0xff);
 VAR_9->hdr.echo = FUNC_2((VAR_8->cid & VAR_3) |
         (VAR_0 <<
          VAR_4));
 VAR_9->hdr.length = VAR_7;
}
