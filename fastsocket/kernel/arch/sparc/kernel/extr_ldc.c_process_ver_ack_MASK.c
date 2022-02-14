
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_version {scalar_t__ major; scalar_t__ minor; } ;
struct ldc_channel {scalar_t__ hs_state; struct ldc_version ver; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ldc_channel*) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ldc_channel*) ;

__attribute__((used)) static int FUNC_3(struct ldc_channel *VAR_2, struct ldc_version *VAR_3)
{
 FUNC_1(VAR_0, "GOT VERSION ACK major[%x] minor[%x]\n",
        VAR_3->major, VAR_3->minor);

 if (VAR_2->hs_state == VAR_1) {
  if (VAR_2->ver.major != VAR_3->major ||
      VAR_2->ver.minor != VAR_3->minor)
   return FUNC_0(VAR_2);
 } else {
  VAR_2->ver = *VAR_3;
  VAR_2->hs_state = VAR_1;
 }
 if (FUNC_2(VAR_2))
  return FUNC_0(VAR_2);
 return 0;
}
