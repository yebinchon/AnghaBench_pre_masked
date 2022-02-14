
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {scalar_t__ ipv6_scope_id; } ;
typedef TYPE_1__ IP ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(void *VAR_0, void *VAR_1)
{
 IP *VAR_2, *VAR_3;
 UINT VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *(IP **)VAR_0;
 VAR_3 = *(IP **)VAR_1;
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }


 VAR_4 = FUNC_0(FUNC_2(VAR_2), FUNC_2(VAR_3));
 if (VAR_4 != 0)
 {
  return VAR_4;
 }


 if (FUNC_4(VAR_2) && FUNC_4(VAR_3) == 0)
 {
  return 1;
 }
 if (FUNC_4(VAR_2) == 0 && FUNC_4(VAR_3))
 {
  return -1;
 }


 if (FUNC_3(VAR_2) && FUNC_3(VAR_3) == 0)
 {
  return 1;
 }
 if (FUNC_3(VAR_2) == 0 && FUNC_3(VAR_3))
 {
  return -1;
 }


 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 != 0)
 {
  return VAR_4;
 }


 if (FUNC_2(VAR_2))
 {
  VAR_4 = FUNC_0(VAR_2->ipv6_scope_id, VAR_3->ipv6_scope_id);
 }
 else
 {
  VAR_4 = 0;
 }

 return VAR_4;
}
