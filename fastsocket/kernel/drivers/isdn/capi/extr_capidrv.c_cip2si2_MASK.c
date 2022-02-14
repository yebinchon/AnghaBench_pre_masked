
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



__attribute__((used)) static inline u8 FUNC_0(u16 VAR_0)
{
 static const u8 VAR_1[32] =
 {0, 0, 0, 0, 2, 3, 0, 0,
  0, 3, 0, 0, 0, 0, 0, 0,
  1, 2, 0, 0, 9, 0, 0, 0,
  0, 0, 3, 2, 3, 0, 0, 0};

 if (VAR_0 > 31)
  VAR_0 = 0;
 return VAR_1[VAR_0];
}
