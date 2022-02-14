
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ldc_version {int dummy; } ;
struct TYPE_2__ {scalar_t__ u_data; } ;
struct ldc_packet {int stype; TYPE_1__ u; } ;
struct ldc_channel {int dummy; } ;





 int FUNC_0 (struct ldc_channel*) ;
 int FUNC_1 (struct ldc_channel*,struct ldc_version*) ;
 int FUNC_2 (struct ldc_channel*,struct ldc_version*) ;
 int FUNC_3 (struct ldc_channel*,struct ldc_version*) ;

__attribute__((used)) static int FUNC_4(struct ldc_channel *VAR_0,
      struct ldc_packet *VAR_1)
{
 struct ldc_version *VAR_2;

 VAR_2 = (struct ldc_version *) VAR_1->u.u_data;

 switch (VAR_1->stype) {
 case 129:
  return FUNC_2(VAR_0, VAR_2);

 case 130:
  return FUNC_1(VAR_0, VAR_2);

 case 128:
  return FUNC_3(VAR_0, VAR_2);

 default:
  return FUNC_0(VAR_0);
 }
}
