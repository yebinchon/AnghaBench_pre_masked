
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_insn {int n; unsigned int* data; unsigned int subdev; int chanspec; int insn; } ;
typedef int insn ;


 int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (void*,struct comedi_insn*) ;
 int FUNC_2 (struct comedi_insn*,int ,int) ;

int FUNC_3(void *VAR_1, unsigned int VAR_2, unsigned int VAR_3,
       unsigned int VAR_4, unsigned int VAR_5, unsigned int *VAR_6)
{
 struct comedi_insn VAR_7;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.insn = VAR_0;
 VAR_7.n = 1;
 VAR_7.data = VAR_6;
 VAR_7.subdev = VAR_2;
 VAR_7.chanspec = FUNC_0(VAR_3, VAR_4, VAR_5);

 return FUNC_1(VAR_1, &VAR_7);
}
