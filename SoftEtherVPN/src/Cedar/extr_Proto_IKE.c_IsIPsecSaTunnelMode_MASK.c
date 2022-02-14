
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ CapsuleMode; } ;
struct TYPE_5__ {TYPE_1__ TransformSetting; } ;
typedef TYPE_2__ IPSECSA ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

bool FUNC_0(IPSECSA *VAR_3)
{

 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (VAR_3->TransformSetting.CapsuleMode == VAR_2 ||
  VAR_3->TransformSetting.CapsuleMode == VAR_0 ||
  VAR_3->TransformSetting.CapsuleMode == VAR_1)
 {
  return 1;
 }

 return 0;
}
