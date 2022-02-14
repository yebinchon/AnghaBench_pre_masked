
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_insn {int n; unsigned int* data; unsigned int subdev; int insn; } ;
typedef int insn ;


 int VAR_0 ;
 int FUNC_0 (void*,struct comedi_insn*) ;
 int FUNC_1 (struct comedi_insn*,int ,int) ;

int FUNC_2(void *VAR_1, unsigned int VAR_2, unsigned int VAR_3,
   unsigned int *VAR_4)
{
 struct comedi_insn VAR_5;
 unsigned int VAR_6[2];
 int VAR_7;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.insn = VAR_0;
 VAR_5.n = 2;
 VAR_5.data = VAR_6;
 VAR_5.subdev = VAR_2;

 VAR_6[0] = VAR_3;
 VAR_6[1] = *VAR_4;

 VAR_7 = FUNC_0(VAR_1, &VAR_5);

 *VAR_4 = VAR_6[1];

 return VAR_7;
}
