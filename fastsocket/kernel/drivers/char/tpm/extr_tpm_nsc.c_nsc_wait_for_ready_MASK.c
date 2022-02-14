
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ base; } ;
struct tpm_chip {int dev; TYPE_1__ vendor; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct tpm_chip *VAR_7)
{
 int VAR_8;
 unsigned long VAR_9;


 VAR_8 = FUNC_1(VAR_7->vendor.base + VAR_2);
 if (VAR_8 & VAR_3)
  VAR_8 = FUNC_1(VAR_7->vendor.base + VAR_1);
 if (VAR_8 & VAR_4)
  return 0;


 VAR_9 = VAR_6 + 100;
 do {
  FUNC_2(VAR_5);
  VAR_8 = FUNC_1(VAR_7->vendor.base + VAR_2);
  if (VAR_8 & VAR_3)
   VAR_8 = FUNC_1(VAR_7->vendor.base + VAR_1);
  if (VAR_8 & VAR_4)
   return 0;
 }
 while (FUNC_3(VAR_6, VAR_9));

 FUNC_0(VAR_7->dev, "wait for ready failed\n");
 return -VAR_0;
}
