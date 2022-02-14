
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct capi_ctr {scalar_t__ cardstate; int manu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct capi_ctr* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ,int ) ;

u16 FUNC_2(u32 VAR_5, u8 *VAR_6)
{
 struct capi_ctr *VAR_7;

 if (VAR_5 == 0) {
  FUNC_1(VAR_6, VAR_4, VAR_0);
  return VAR_1;
 }
 VAR_7 = FUNC_0(VAR_5);
 if (!VAR_7 || VAR_7->cardstate != VAR_3)
  return VAR_2;
 FUNC_1(VAR_6, VAR_7->manu, VAR_0);
 return VAR_1;
}
