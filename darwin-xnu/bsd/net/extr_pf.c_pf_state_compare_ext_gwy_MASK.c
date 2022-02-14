
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int port; } ;
struct TYPE_10__ {int addr; TYPE_1__ xport; } ;
struct TYPE_8__ {int port; int call_id; int spi; } ;
struct TYPE_9__ {int addr; TYPE_2__ xport; } ;
struct pf_state_key {int proto; int af_gwy; int proto_variant; TYPE_5__* app_state; TYPE_4__ ext_gwy; TYPE_3__ gwy; } ;
struct TYPE_11__ {int (* compare_ext_gwy ) (TYPE_5__*,TYPE_5__*) ;} ;
 int FUNC_0 (int *,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_5__*,TYPE_5__*) ;

__attribute__((used)) static __inline int
FUNC_3(struct pf_state_key *VAR_4, struct pf_state_key *VAR_5)
{
 int VAR_6;
 int VAR_7;

 if ((VAR_6 = VAR_4->proto - VAR_5->proto) != 0)
  return (VAR_6);

 if ((VAR_6 = VAR_4->af_gwy - VAR_5->af_gwy) != 0)
  return (VAR_6);

 VAR_7 = VAR_1;

 switch (VAR_4->proto) {
 case 131:
 case 130:
  if ((VAR_6 = VAR_4->gwy.xport.port - VAR_5->gwy.xport.port) != 0)
   return (VAR_6);
  break;

 case 129:
  if ((VAR_6 = VAR_4->ext_gwy.xport.port - VAR_5->ext_gwy.xport.port) != 0)
   return (VAR_6);
  if ((VAR_6 = VAR_4->gwy.xport.port - VAR_5->gwy.xport.port) != 0)
   return (VAR_6);
  break;

 case 128:
  if ((VAR_6 = VAR_4->proto_variant - VAR_5->proto_variant))
   return (VAR_6);
  VAR_7 = VAR_4->proto_variant;
  if ((VAR_6 = VAR_4->gwy.xport.port - VAR_5->gwy.xport.port) != 0)
   return (VAR_6);
  if ((VAR_7 < VAR_0) &&
      (VAR_6 = VAR_4->ext_gwy.xport.port - VAR_5->ext_gwy.xport.port) != 0)
   return (VAR_6);
  break;

 case 132:
  if (VAR_4->proto_variant == VAR_3 &&
      VAR_4->proto_variant == VAR_5->proto_variant) {
   if (!!(VAR_6 = VAR_4->gwy.xport.call_id -
       VAR_5->gwy.xport.call_id))
    return (VAR_6);
  }
  break;

 case 133:
  if (!!(VAR_6 = VAR_4->gwy.xport.spi - VAR_5->gwy.xport.spi))
   return (VAR_6);
  break;

 default:
  break;
 }

 switch (VAR_4->af_gwy) {
 }

 if (VAR_4->app_state && VAR_5->app_state) {
  if (VAR_4->app_state->compare_ext_gwy &&
      VAR_5->app_state->compare_ext_gwy) {
   VAR_6 = (const char *)VAR_5->app_state->compare_ext_gwy -
       (const char *)VAR_4->app_state->compare_ext_gwy;
   if (VAR_6 != 0)
    return (VAR_6);
   VAR_6 = VAR_4->app_state->compare_ext_gwy(VAR_4->app_state,
       VAR_5->app_state);
   if (VAR_6 != 0)
    return (VAR_6);
  }
 }

 return (0);
}
