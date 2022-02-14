
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgdt3305_state {int current_modulation; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (char*,int,char*,char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lgdt3305_state*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct lgdt3305_state *VAR_2,
      int *VAR_3)
{
 u8 VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 *VAR_3 = 0;

 switch (VAR_2->current_modulation) {
 case 130:
 case 129:
  VAR_5 = FUNC_2(VAR_2,
     VAR_1, &VAR_4);
  if (FUNC_1(VAR_5))
   goto fail;

  VAR_6 = (VAR_4 & (1 << 0)) ? 1 : 0;
  VAR_7 = (VAR_4 & (1 << 2)) ? 1 : 0;
  VAR_8 = (VAR_4 & (1 << 3)) ? 1 : 0;

  *VAR_3 = VAR_6 && VAR_7 && VAR_8;

  FUNC_0("(%d) %s%s%s\n", *VAR_3,
         VAR_6 ? "mpeg lock  " : "",
         VAR_7 ? "fec lock  " : "",
         VAR_8 ? "viterbi lock" : "");
  break;
 case 128:
 default:
  VAR_5 = -VAR_0;
 }
fail:
 return VAR_5;
}
