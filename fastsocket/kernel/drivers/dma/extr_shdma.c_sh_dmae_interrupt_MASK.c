
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_dmae_chan {int tasklet; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sh_dmae_chan*) ;
 int FUNC_1 (struct sh_dmae_chan*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 irqreturn_t VAR_6 = VAR_3;
 struct sh_dmae_chan *VAR_7 = (struct sh_dmae_chan *)VAR_5;
 u32 VAR_8 = FUNC_1(VAR_7, VAR_0);

 if (VAR_8 & VAR_1) {

  FUNC_0(VAR_7);

  VAR_6 = VAR_2;
  FUNC_2(&VAR_7->tasklet);
 }

 return VAR_6;
}
