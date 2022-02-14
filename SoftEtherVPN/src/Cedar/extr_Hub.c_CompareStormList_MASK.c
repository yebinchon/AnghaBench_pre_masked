
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_2__ {int StrictMode; int MacAddress; int SrcIp; int DestIp; } ;
typedef TYPE_1__ STORM ;


 scalar_t__ FUNC_0 (int ,int ,int) ;
 void* FUNC_1 (int *,int *) ;

int FUNC_2(void *VAR_0, void *VAR_1)
{
 STORM *VAR_2, *VAR_3;
 UINT VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *(STORM **)VAR_0;
 VAR_3 = *(STORM **)VAR_1;
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }
 if (VAR_2->StrictMode == 0 && VAR_3->StrictMode == 0)
 {

  VAR_4 = FUNC_1(&VAR_2->DestIp, &VAR_3->DestIp);
  if (VAR_4 != 0)
  {
   return VAR_4;
  }
  VAR_4 = FUNC_1(&VAR_2->SrcIp, &VAR_3->SrcIp);
  if (VAR_4 != 0)
  {
   return VAR_4;
  }
 }
 else
 {

  int VAR_5, VAR_6;
  VAR_5 = FUNC_1(&VAR_2->DestIp, &VAR_3->DestIp);
  VAR_6 = FUNC_1(&VAR_2->SrcIp, &VAR_3->SrcIp);
  if (VAR_5 == 0 || VAR_6 == 0)
  {

  }
  else
  {

   if (VAR_5 != 0)
   {
    return VAR_5;
   }

   if (VAR_6 != 0)
   {
    return VAR_6;
   }
  }
 }
 VAR_4 = FUNC_0(VAR_2->MacAddress, VAR_3->MacAddress, 6);
 return VAR_4;
}
