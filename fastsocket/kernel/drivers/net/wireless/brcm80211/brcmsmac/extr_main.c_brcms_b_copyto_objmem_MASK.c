
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct brcms_hardware {int dummy; } ;


 int FUNC_0 (struct brcms_hardware*,int,int,int ) ;

void
FUNC_1(struct brcms_hardware *VAR_0, uint VAR_1,
        const void *VAR_2, int VAR_3, u32 VAR_4)
{
 u16 VAR_5;
 const u8 *VAR_6 = (const u8 *)VAR_2;
 int VAR_7;

 if (VAR_3 <= 0 || (VAR_1 & 1) || (VAR_3 & 1))
  return;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7 += 2) {
  VAR_5 = VAR_6[VAR_7] | (VAR_6[VAR_7 + 1] << 8);
  FUNC_0(VAR_0, VAR_1 + VAR_7, VAR_5, VAR_4);
 }
}
