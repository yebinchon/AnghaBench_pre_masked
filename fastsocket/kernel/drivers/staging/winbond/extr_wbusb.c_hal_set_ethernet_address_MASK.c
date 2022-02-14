
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hw_data {scalar_t__ CurrentMacAddress; scalar_t__ SurpriseRemove; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hw_data*,int,int*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct hw_data *VAR_2, u8 * VAR_3)
{
 u32 VAR_4[2];

 if (VAR_2->SurpriseRemove)
  return;

 FUNC_2(VAR_2->CurrentMacAddress, VAR_3, VAR_1);

 VAR_4[0] = FUNC_1(*(u32 *) VAR_2->CurrentMacAddress);
 VAR_4[1] =
     FUNC_1(*(u32 *) (VAR_2->CurrentMacAddress + 4)) & 0xffff;

 FUNC_0(VAR_2, 0x03e8, VAR_4, 2, VAR_0);
}
