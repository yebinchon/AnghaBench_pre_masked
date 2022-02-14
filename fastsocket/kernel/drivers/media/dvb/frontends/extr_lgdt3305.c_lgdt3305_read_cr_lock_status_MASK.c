
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgdt3305_state {int current_modulation; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (char*,int,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lgdt3305_state*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct lgdt3305_state *VAR_2,
     int *VAR_3)
{
 u8 VAR_4;
 int VAR_5;
 char *VAR_6 = "";

 *VAR_3 = 0;

 VAR_5 = FUNC_2(VAR_2, VAR_1, &VAR_4);
 if (FUNC_1(VAR_5))
  goto fail;

 switch (VAR_2->current_modulation) {
 case 130:
 case 129:
  if (VAR_4 & (1 << 1))
   *VAR_3 = 1;

  switch (VAR_4 & 0x07) {
  case 0:
   VAR_6 = "QAM UNLOCK";
   break;
  case 4:
   VAR_6 = "QAM 1stLock";
   break;
  case 6:
   VAR_6 = "QAM 2ndLock";
   break;
  case 7:
   VAR_6 = "QAM FinalLock";
   break;
  default:
   VAR_6 = "CLOCKQAM-INVALID!";
   break;
  }
  break;
 case 128:
  if (VAR_4 & (1 << 7)) {
   *VAR_3 = 1;
   VAR_6 = "CLOCKVSB";
  }
  break;
 default:
  VAR_5 = -VAR_0;
 }
 FUNC_0("(%d) %s\n", *VAR_3, VAR_6);
fail:
 return VAR_5;
}
