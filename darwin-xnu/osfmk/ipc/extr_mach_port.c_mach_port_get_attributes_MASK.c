
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int mach_port_status_t ;
typedef int mach_port_name_t ;
struct TYPE_13__ {int mpl_qlimit; } ;
typedef TYPE_3__ mach_port_limits_t ;
typedef scalar_t__ mach_port_info_t ;
struct TYPE_14__ {int mpie_boost_cnt; int mpie_status; } ;
typedef TYPE_4__ mach_port_info_ext_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef TYPE_5__* ipc_port_t ;
typedef TYPE_6__* ipc_port_request_t ;
struct TYPE_16__ {TYPE_2__* ipr_size; } ;
struct TYPE_11__ {int imq_qlimit; } ;
struct TYPE_15__ {int ip_impcount; TYPE_6__* ip_requests; TYPE_1__ ip_messages; } ;
struct TYPE_12__ {int its_size; } ;


 TYPE_6__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;

 int VAR_8 ;

 int VAR_9 ;

 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (scalar_t__,int ,TYPE_5__**) ;
 int FUNC_3 (TYPE_5__*,int *) ;

kern_return_t
FUNC_4(
 ipc_space_t VAR_11,
 mach_port_name_t VAR_12,
 int VAR_13,
        mach_port_info_t VAR_14,
        mach_msg_type_number_t *VAR_15)
{
 ipc_port_t VAR_16;
 kern_return_t VAR_17;

 if (VAR_11 == VAR_1)
  return VAR_5;

        switch (VAR_13) {
        case 129: {
                mach_port_limits_t *VAR_18 = (mach_port_limits_t *)VAR_14;

                if (*VAR_15 < VAR_9)
                        return VAR_2;

                if (!FUNC_0(VAR_12)) {
   *VAR_15 = 0;
   break;
  }

                VAR_17 = FUNC_2(VAR_11, VAR_12, &VAR_16);
                if (VAR_17 != VAR_6)
                        return VAR_17;


                VAR_18->mpl_qlimit = VAR_16->ip_messages.imq_qlimit;
                *VAR_15 = VAR_9;
                FUNC_1(VAR_16);
                break;
        }

        case 128: {
  mach_port_status_t *VAR_19 = (mach_port_status_t *)VAR_14;

  if (*VAR_15 < VAR_10)
   return VAR_2;

  if (!FUNC_0(VAR_12))
   return VAR_4;

  VAR_17 = FUNC_2(VAR_11, VAR_12, &VAR_16);
  if (VAR_17 != VAR_6)
   return VAR_17;

  FUNC_3(VAR_16, VAR_19);
  *VAR_15 = VAR_10;
  FUNC_1(VAR_16);
  break;
 }

 case 131: {
  ipc_port_request_t VAR_20;

                if (*VAR_15 < VAR_7)
                        return VAR_2;

  if (!FUNC_0(VAR_12)) {
   *(int *)VAR_14 = 0;
   break;
  }

                VAR_17 = FUNC_2(VAR_11, VAR_12, &VAR_16);
                if (VAR_17 != VAR_6)
                        return VAR_17;


  VAR_20 = VAR_16->ip_requests;
  if (VAR_20 == VAR_0)
   *(int *)VAR_14 = 0;
  else
   *(int *)VAR_14 = VAR_20->ipr_size->its_size;
                *VAR_15 = VAR_7;
                FUNC_1(VAR_16);
  break;
 }

 case 130: {
  mach_port_info_ext_t *VAR_21 = (mach_port_info_ext_t *)VAR_14;
  if (*VAR_15 < VAR_8)
   return VAR_2;

  if (!FUNC_0(VAR_12))
   return VAR_4;

  VAR_17 = FUNC_2(VAR_11, VAR_12, &VAR_16);
  if (VAR_17 != VAR_6)
   return VAR_17;

  FUNC_3(VAR_16, &VAR_21->mpie_status);
  VAR_21->mpie_boost_cnt = VAR_16->ip_impcount;
  *VAR_15 = VAR_8;
  FUNC_1(VAR_16);
  break;
 }

        default:
  return VAR_3;

        }

 return VAR_6;
}
