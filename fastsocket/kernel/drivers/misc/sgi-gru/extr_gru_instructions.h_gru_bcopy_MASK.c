
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_instruction {long baddr0; long op2_value_baddr1; unsigned long nelem; unsigned int tri1_bufsize; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,unsigned int,int ,int ,unsigned int,int ) ;
 int FUNC_2 (struct gru_instruction*,int ) ;

__attribute__((used)) static inline void FUNC_3(void *VAR_2, const unsigned long VAR_3,
  unsigned long VAR_4,
  unsigned int VAR_5, unsigned int VAR_6, unsigned long VAR_7,
  unsigned int VAR_8, unsigned long VAR_9)
{
 struct gru_instruction *VAR_10 = (void *)VAR_2;

 VAR_10->baddr0 = (long)VAR_3;
 VAR_10->op2_value_baddr1 = (long)VAR_4;
 VAR_10->nelem = VAR_7;
 VAR_10->tri1_bufsize = VAR_8;
 FUNC_2(VAR_10, FUNC_1(VAR_1, 0, VAR_6, VAR_0,
     VAR_0, VAR_5, FUNC_0(VAR_9)));
}
