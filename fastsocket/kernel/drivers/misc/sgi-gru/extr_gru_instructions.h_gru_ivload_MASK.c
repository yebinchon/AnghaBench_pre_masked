
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_instruction {long baddr0; unsigned long nelem; unsigned int tri1_bufsize; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,unsigned char,int ,int ,unsigned int,int ) ;
 int FUNC_2 (struct gru_instruction*,int ) ;

__attribute__((used)) static inline void FUNC_3(void *VAR_2, unsigned long VAR_3,
  unsigned int VAR_4, unsigned int VAR_5, unsigned char VAR_6,
  unsigned long VAR_7, unsigned long VAR_8)
{
 struct gru_instruction *VAR_9 = (void *)VAR_2;

 VAR_9->baddr0 = (long)VAR_3;
 VAR_9->nelem = VAR_7;
 VAR_9->tri1_bufsize = VAR_5;
 FUNC_2(VAR_9, FUNC_1(VAR_1, 0, VAR_6, VAR_0, 0,
     VAR_4, FUNC_0(VAR_8)));
}
