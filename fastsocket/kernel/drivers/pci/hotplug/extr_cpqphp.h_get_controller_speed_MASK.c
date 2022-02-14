
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct controller {scalar_t__ hpc_reg; scalar_t__ pcix_support; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline u8 FUNC_2(struct controller *VAR_7)
{
 u8 VAR_8;
 u16 VAR_9;

 if (VAR_7->pcix_support) {
  VAR_8 = FUNC_0(VAR_7->hpc_reg + VAR_1);
  if ((VAR_8 & 0xB0) == 0xB0)
   return VAR_3;
  if ((VAR_8 & 0xA0) == 0xA0)
   return VAR_2;
  if ((VAR_8 & 0x90) == 0x90)
   return VAR_6;
  if (VAR_8 & 0x10)
   return VAR_5;

  return VAR_4;
 }

 VAR_9 = FUNC_1(VAR_7->hpc_reg + VAR_0);
 return (VAR_9 & 0x0800) ? VAR_5 : VAR_4;
}
