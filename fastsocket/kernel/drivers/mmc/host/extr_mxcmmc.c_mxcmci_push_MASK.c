
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mxcmci_host {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 unsigned int FUNC_1 (struct mxcmci_host*,int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mxcmci_host *VAR_2, void *VAR_3, int VAR_4)
{
 unsigned int VAR_5;
 u32 *VAR_6 = VAR_3;

 while (VAR_4 > 3) {
  VAR_5 = FUNC_1(VAR_2, VAR_1);
  if (VAR_5)
   return VAR_5;
  FUNC_2(*VAR_6++, VAR_2->base + VAR_0);
  VAR_4 -= 4;
 }

 if (VAR_4) {
  u8 *VAR_7 = (u8 *)VAR_6;
  u32 VAR_8;

  VAR_5 = FUNC_1(VAR_2, VAR_1);
  if (VAR_5)
   return VAR_5;

  FUNC_0(&VAR_8, VAR_7, VAR_4);
  FUNC_2(VAR_8, VAR_2->base + VAR_0);
 }

 VAR_5 = FUNC_1(VAR_2, VAR_1);
 if (VAR_5)
  return VAR_5;

 return 0;
}
