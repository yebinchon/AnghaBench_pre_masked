
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int dummy; } ;
struct comedi_insn {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct ni_gpct*,int,unsigned int) ;
 unsigned int FUNC_1 (struct ni_gpct*) ;
 int FUNC_2 (struct ni_gpct*,unsigned int*,unsigned int*) ;
 int FUNC_3 (struct ni_gpct*,unsigned int,unsigned int*) ;
 int FUNC_4 (struct ni_gpct*) ;
 int FUNC_5 (struct ni_gpct*,unsigned int,unsigned int) ;
 int FUNC_6 (struct ni_gpct*,unsigned int) ;
 int FUNC_7 (struct ni_gpct*,unsigned int,unsigned int) ;
 int FUNC_8 (struct ni_gpct*,unsigned int,unsigned int) ;

int FUNC_9(struct ni_gpct *VAR_2,
         struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 switch (VAR_4[0]) {
 case 130:
  return FUNC_6(VAR_2, VAR_4[1]);
  break;
 case 137:
  return FUNC_0(VAR_2, 1, VAR_4[1]);
  break;
 case 136:
  FUNC_0(VAR_2, 0, 0);
  return 0;
  break;
 case 134:
  VAR_4[1] = FUNC_1(VAR_2);
  VAR_4[2] = VAR_1;
  return 0;
  break;
 case 131:
  return FUNC_5(VAR_2, VAR_4[1], VAR_4[2]);
  break;
 case 135:
  FUNC_2(VAR_2, &VAR_4[1], &VAR_4[2]);
  return 0;
  break;
 case 129:
  return FUNC_7(VAR_2, VAR_4[1], VAR_4[2]);
  break;
 case 133:
  return FUNC_3(VAR_2, VAR_4[1], &VAR_4[2]);
  break;
 case 128:
  return FUNC_8(VAR_2, VAR_4[1], VAR_4[2]);
  break;
 case 132:
  FUNC_4(VAR_2);
  return 0;
  break;
 default:
  break;
 }
 return -VAR_0;
}
