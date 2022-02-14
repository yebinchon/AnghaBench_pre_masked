
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct edid {int revision; } ;



__attribute__((used)) static u32
FUNC_0(struct edid *VAR_0, u8 *VAR_1)
{

 if (VAR_1[9] == 0 || VAR_1[9] == 255)
  return 0;


 if (VAR_0->revision >= 4 && VAR_1[10] == 0x04)
  return (VAR_1[9] * 10000) - ((VAR_1[12] >> 2) * 250);


 return VAR_1[9] * 10000 + 5001;
}
