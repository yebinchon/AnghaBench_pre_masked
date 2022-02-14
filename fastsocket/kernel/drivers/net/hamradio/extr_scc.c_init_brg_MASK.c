
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scc_channel {int* wreg; int ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t,int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct scc_channel*,size_t,int ) ;

__attribute__((used)) static inline void FUNC_2(struct scc_channel *VAR_4)
{
 FUNC_1(VAR_4, VAR_1, VAR_0);
 FUNC_0(VAR_4->ctrl, VAR_1, VAR_3|VAR_4->wreg[VAR_1]);
 FUNC_0(VAR_4->ctrl, VAR_1, VAR_2|VAR_4->wreg[VAR_1]);
}
