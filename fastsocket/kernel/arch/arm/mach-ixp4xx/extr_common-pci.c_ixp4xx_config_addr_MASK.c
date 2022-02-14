
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(u8 VAR_0, u16 VAR_1, int VAR_2)
{
 u32 VAR_3;
 if (!VAR_0) {

  VAR_3 = FUNC_0(32-FUNC_2(VAR_1)) | ((FUNC_1(VAR_1)) << 8) |
      (VAR_2 & ~3);
 } else {

  VAR_3 = (VAR_0 << 16) | ((FUNC_2(VAR_1)) << 11) |
   ((FUNC_1(VAR_1)) << 8) | (VAR_2 & ~3) | 1;
 }
 return VAR_3;
}
