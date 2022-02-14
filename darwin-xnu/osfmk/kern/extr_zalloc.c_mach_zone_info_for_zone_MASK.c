
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
struct TYPE_8__ {int mzn_name; } ;
typedef TYPE_2__ mach_zone_name_t ;
typedef int mach_zone_info_t ;
typedef int kern_return_t ;
typedef scalar_t__ host_priv_t ;
struct TYPE_7__ {int zone_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 TYPE_1__* VAR_8 ;

kern_return_t
FUNC_6(
 host_priv_t VAR_9,
 mach_zone_name_t VAR_10,
 mach_zone_info_t *VAR_11)
{
 unsigned int VAR_12, VAR_13;
 zone_t VAR_14;

 if (VAR_9 == VAR_0)
  return VAR_3;





 if (VAR_11 == ((void*)0)) {
  return VAR_2;
 }

 FUNC_3(&VAR_6);
 VAR_12 = (unsigned int)(VAR_7);
 FUNC_4(&VAR_6);

 VAR_14 = VAR_5;
 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  zone_t VAR_15 = &(VAR_8[VAR_13]);
  FUNC_1(VAR_15 != VAR_5);


  if (FUNC_5(VAR_15->zone_name, VAR_10.mzn_name)) {
   VAR_14 = VAR_15;
   break;
  }
 }


 if (VAR_14 == VAR_5) {
  return VAR_2;
 }

 if (FUNC_2(VAR_14, ((void*)0), VAR_11)) {
  return VAR_4;
 }
 return VAR_1;
}
