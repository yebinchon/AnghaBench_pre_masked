
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct sh_dmae_chan {int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct sh_dmae_chan*) ;

__attribute__((used)) static int FUNC_3(struct sh_dmae_chan *VAR_6, u16 VAR_7)
{
 u32 VAR_8;
 int VAR_9 = 0;
 int VAR_10 = FUNC_2(VAR_6);
 if (VAR_10)
  return VAR_10;

 if (VAR_6->id & VAR_2)
  VAR_9 = VAR_3;

 switch (VAR_6->id) {

 case 0:
 case 1:
  VAR_8 = VAR_5;
  break;

 case 2:
 case 3:
  VAR_8 = (VAR_5 + VAR_0);
  break;

 case 4:
 case 5:
  VAR_8 = (VAR_5 + VAR_1);
  break;
 default:
  return -VAR_4;
 }

 FUNC_1((VAR_7 << VAR_9) |
  (FUNC_0(VAR_8) & (VAR_9 ? 0xFF00 : 0x00FF)),
  VAR_8);

 return 0;
}
