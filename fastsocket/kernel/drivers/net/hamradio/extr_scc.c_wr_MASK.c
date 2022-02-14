
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scc_channel {unsigned char* wreg; int ctrl; } ;


 int FUNC_0 (int ,unsigned char,unsigned char) ;

__attribute__((used)) static inline void FUNC_1(struct scc_channel *VAR_0, unsigned char VAR_1,
 unsigned char VAR_2)
{
 FUNC_0(VAR_0->ctrl, VAR_1, (VAR_0->wreg[VAR_1] = VAR_2));
}
