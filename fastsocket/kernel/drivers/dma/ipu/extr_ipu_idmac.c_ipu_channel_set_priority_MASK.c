
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct ipu {int dummy; } ;
typedef enum ipu_channel { ____Placeholder_ipu_channel } ipu_channel ;


 int VAR_0 ;
 int FUNC_0 (struct ipu*) ;
 unsigned long FUNC_1 (struct ipu*,int ) ;
 int FUNC_2 (struct ipu*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_3(struct ipu *VAR_1, enum ipu_channel VAR_2,
         bool VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_1, VAR_0);

 if (VAR_3)
  VAR_4 |= 1UL << VAR_2;
 else
  VAR_4 &= ~(1UL << VAR_2);

 FUNC_2(VAR_1, VAR_4, VAR_0);

 FUNC_0(VAR_1);
}
