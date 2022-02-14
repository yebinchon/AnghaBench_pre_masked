
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ base; } ;
struct tpm_chip {TYPE_1__ vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct tpm_chip *VAR_5, u8 VAR_6, u8 VAR_7, u8 * VAR_8)
{
 unsigned long VAR_9;


 *VAR_8 = FUNC_0(VAR_5->vendor.base + VAR_2);
 if ((*VAR_8 & VAR_6) == VAR_7)
  return 0;


 VAR_9 = VAR_4 + 10 * VAR_1;
 do {
  FUNC_1(VAR_3);
  *VAR_8 = FUNC_0(VAR_5->vendor.base + 1);
  if ((*VAR_8 & VAR_6) == VAR_7)
   return 0;
 }
 while (FUNC_2(VAR_4, VAR_9));

 return -VAR_0;
}
