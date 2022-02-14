
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct capi_profile {int ncontroller; } ;
struct capi_ctr {scalar_t__ cardstate; int profile; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct capi_ctr* FUNC_0 (scalar_t__) ;
 int FUNC_1 (void*,int *,int) ;
 int VAR_3 ;

u16 FUNC_2(u32 VAR_4, struct capi_profile *VAR_5)
{
 struct capi_ctr *VAR_6;

 if (VAR_4 == 0) {
  VAR_5->ncontroller = VAR_3;
  return VAR_0;
 }
 VAR_6 = FUNC_0(VAR_4);
 if (!VAR_6 || VAR_6->cardstate != VAR_2)
  return VAR_1;

 FUNC_1((void *) VAR_5, &VAR_6->profile,
   sizeof(struct capi_profile));
 return VAR_0;
}
