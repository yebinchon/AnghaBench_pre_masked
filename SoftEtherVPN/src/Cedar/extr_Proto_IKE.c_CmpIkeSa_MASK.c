
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ResponderCookie; } ;
typedef TYPE_1__ IKE_SA ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(void *VAR_0, void *VAR_1)
{
 IKE_SA *VAR_2, *VAR_3;
 int VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *(IKE_SA **)VAR_0;
 VAR_3 = *(IKE_SA **)VAR_1;
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = FUNC_0(VAR_2->ResponderCookie, VAR_3->ResponderCookie);

 return VAR_4;
}
