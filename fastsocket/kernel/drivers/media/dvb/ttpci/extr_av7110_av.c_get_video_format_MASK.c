
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct av7110 {int sinfo; } ;


 int FUNC_0 (struct av7110*,int ) ;
 int FUNC_1 (int,char*,...) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_2(struct av7110 *VAR_1, u8 *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5, VAR_6;
 int VAR_7;
 u8 *VAR_8;
 int VAR_9 = 0;

 FUNC_1(2, "av7110:%p, \n", VAR_1);

 if (VAR_1->sinfo)
  return 0;
 for (VAR_4 = 7; VAR_4 < VAR_3 - 10; VAR_4++) {
  VAR_8 = VAR_2 + VAR_4;
  if (VAR_8[0] || VAR_8[1] || VAR_8[2] != 0x01 || VAR_8[3] != 0xb3)
   continue;
  VAR_8 += 4;
  VAR_5 = ((VAR_8[1] &0xF0) >> 4) | (VAR_8[0] << 4);
  VAR_6 = ((VAR_8[1] &0x0F) << 8) | (VAR_8[2]);
  VAR_7 = (VAR_8[3] & 0x0F);
  VAR_9 = FUNC_0(VAR_1, VAR_0[VAR_7]);
  if (!VAR_9) {
   FUNC_1(2, "playback %dx%d fr=%d\n", VAR_5, VAR_6, VAR_7);
   VAR_1->sinfo = 1;
  }
  break;
 }
 return VAR_9;
}
