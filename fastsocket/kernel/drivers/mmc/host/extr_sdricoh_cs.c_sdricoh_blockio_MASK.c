
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdricoh_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct sdricoh_host*,int ,int ) ;
 int FUNC_2 (struct sdricoh_host*,int ) ;
 int FUNC_3 (struct sdricoh_host*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct sdricoh_host *VAR_7, int VAR_8,
    u8 *VAR_9, int VAR_10)
{
 int VAR_11;
 u32 VAR_12 = 0;

 if (VAR_8) {
  if (FUNC_1(VAR_7, VAR_4,
      VAR_6))
   return -VAR_1;
  FUNC_3(VAR_7, VAR_2, 0x18);

  while (VAR_10) {
   VAR_12 = FUNC_2(VAR_7, VAR_3);
   VAR_11 = FUNC_0(VAR_10, 4);
   VAR_10 -= VAR_11;
   while (VAR_11) {
    *VAR_9 = VAR_12 & 0xFF;
    VAR_9++;
    VAR_12 >>= 8;
    VAR_11--;
   }
  }
 } else {
  if (FUNC_1(VAR_7, VAR_5,
      VAR_6))
   return -VAR_1;
  FUNC_3(VAR_7, VAR_2, 0x18);

  while (VAR_10) {
   VAR_11 = FUNC_0(VAR_10, 4);
   VAR_10 -= VAR_11;
   while (VAR_11) {
    VAR_12 >>= 8;
    VAR_12 |= (u32)*VAR_9 << 24;
    VAR_9++;
    VAR_11--;
   }
   FUNC_3(VAR_7, VAR_3, VAR_12);
  }
 }

 if (VAR_10)
  return -VAR_0;

 return 0;
}
