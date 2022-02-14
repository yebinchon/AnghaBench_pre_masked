
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u32 ;
typedef int u16 ;
struct brcms_hardware {struct bcma_device* d11core; } ;
struct bcma_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bcma_device*,int) ;
 int FUNC_2 (struct bcma_device*,int,int) ;
 int FUNC_3 (struct bcma_device*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct brcms_hardware *VAR_2, uint VAR_3, u16 VAR_4,
       u32 VAR_5)
{
 struct bcma_device *VAR_6 = VAR_2->d11core;
 u16 VAR_7 = FUNC_0(VAR_1);

 FUNC_3(VAR_6, FUNC_0(VAR_0), VAR_5 | (VAR_3 >> 2));
 (void)FUNC_1(VAR_6, FUNC_0(VAR_0));
 if (VAR_3 & 2)
  VAR_7 += 2;

 FUNC_2(VAR_6, VAR_7, VAR_4);
}
