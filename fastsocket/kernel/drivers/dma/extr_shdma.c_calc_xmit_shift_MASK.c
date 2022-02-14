
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sh_dmae_chan {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (struct sh_dmae_chan*,int ) ;
 unsigned int* VAR_3 ;

__attribute__((used)) static inline unsigned int FUNC_1(struct sh_dmae_chan *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_4, VAR_0);
 return VAR_3[(VAR_5 & VAR_1) >> VAR_2];
}
