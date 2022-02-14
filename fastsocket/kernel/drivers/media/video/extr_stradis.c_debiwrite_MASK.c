
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
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct saa7146*) ;

__attribute__((used)) static int FUNC_3(struct saa7146 *VAR_5, u32 VAR_6, int VAR_7,
 u32 VAR_8, int VAR_9)
{
 u32 VAR_10;
 if (VAR_9 <= 0 || VAR_9 > 32764)
  return -1;
 if (FUNC_2(VAR_5) < 0)
  return -1;
 FUNC_0(VAR_6, VAR_2);
 if (VAR_9 <= 4)
  FUNC_0(VAR_8, VAR_0);
 else
  FUNC_0(FUNC_1(VAR_5->dmadebi), VAR_0);
 FUNC_0((VAR_10 = (VAR_9 << 17) | (VAR_7 & 0xffff)), VAR_1);
 FUNC_0((VAR_4 << 16) | VAR_4,
   VAR_3);
 return 0;
}
