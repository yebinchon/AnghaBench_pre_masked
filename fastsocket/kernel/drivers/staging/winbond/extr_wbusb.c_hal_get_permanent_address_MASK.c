
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hw_data {int PermanentMacAddress; scalar_t__ SurpriseRemove; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct hw_data *VAR_0, u8 * VAR_1)
{
 if (VAR_0->SurpriseRemove)
  return;

 FUNC_0(VAR_1, VAR_0->PermanentMacAddress, 6);
}
