
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int removed ;
struct TYPE_11__ {int srcref; } ;
typedef TYPE_2__ nstat_src ;
struct TYPE_10__ {int length; scalar_t__ context; int type; } ;
struct TYPE_12__ {int srcref; TYPE_1__ hdr; } ;
typedef TYPE_3__ nstat_msg_src_removed ;
struct TYPE_13__ {int ncs_unit; int ncs_kctl; } ;
typedef TYPE_4__ nstat_control_state ;
typedef scalar_t__ errno_t ;
struct TYPE_14__ {int nstat_msgremovedfailures; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_3__*,int,int) ;
 TYPE_5__ VAR_3 ;

__attribute__((used)) static errno_t
FUNC_2(
 nstat_control_state *VAR_4,
 nstat_src *VAR_5)
{
 nstat_msg_src_removed VAR_6;
 errno_t VAR_7;

 FUNC_0(&VAR_6, sizeof(VAR_6));
 VAR_6.hdr.type = VAR_2;
 VAR_6.hdr.length = sizeof(VAR_6);
 VAR_6.hdr.context = 0;
 VAR_6.srcref = VAR_5->srcref;
 VAR_7 = FUNC_1(VAR_4->ncs_kctl, VAR_4->ncs_unit, &VAR_6,
     sizeof(VAR_6), VAR_1 | VAR_0);
 if (VAR_7 != 0)
  VAR_3.nstat_msgremovedfailures += 1;

 return VAR_7;
}
