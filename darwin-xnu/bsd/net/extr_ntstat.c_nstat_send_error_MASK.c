
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int64_t ;
typedef int u_int32_t ;
struct TYPE_5__ {int length; int context; int type; } ;
struct nstat_msg_error {int error; TYPE_1__ hdr; } ;
struct TYPE_6__ {int ncs_unit; int ncs_kctl; } ;
typedef TYPE_2__ nstat_control_state ;
typedef scalar_t__ errno_t ;
typedef int err ;
struct TYPE_7__ {int nstat_msgerrorfailures; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nstat_msg_error*,int) ;
 scalar_t__ FUNC_1 (int ,int ,struct nstat_msg_error*,int,int) ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static void
FUNC_2(
    nstat_control_state *VAR_4,
    u_int64_t VAR_5,
    u_int32_t VAR_6)
{
 errno_t VAR_7;
 struct nstat_msg_error VAR_8;

 FUNC_0(&VAR_8, sizeof(VAR_8));
 VAR_8.hdr.type = VAR_2;
 VAR_8.hdr.length = sizeof(VAR_8);
 VAR_8.hdr.context = VAR_5;
 VAR_8.error = VAR_6;

 VAR_7 = FUNC_1(VAR_4->ncs_kctl, VAR_4->ncs_unit, &VAR_8,
        sizeof(VAR_8), VAR_1 | VAR_0);
 if (VAR_7 != 0)
  VAR_3.nstat_msgerrorfailures++;
}
