
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct saa7146 {int dmadebi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct saa7146*) ;

__attribute__((used)) static u32 FUNC_4(struct saa7146 *VAR_5, u32 VAR_6, int VAR_7, int VAR_8)
{
 u32 VAR_9 = 0;

 if (VAR_8 > 32764 || VAR_8 <= 0)
  return 0;
 if (FUNC_3(VAR_5) < 0)
  return 0;
 FUNC_1(FUNC_2(VAR_5->dmadebi), VAR_0);
 FUNC_1((VAR_8 << 17) | 0x10000 | (VAR_7 & 0xffff),
   VAR_1);
 FUNC_1(VAR_6, VAR_2);
 FUNC_1((VAR_4 << 16) | VAR_4,
   VAR_3);
 if (VAR_8 > 4)
  return VAR_8;
 FUNC_3(VAR_5);
 VAR_9 = FUNC_0(VAR_0);
 if (VAR_8 == 1)
  VAR_9 &= 0xff;
 if (VAR_8 == 2)
  VAR_9 &= 0xffff;
 if (VAR_8 == 3)
  VAR_9 &= 0xffffff;
 return VAR_9;
}
