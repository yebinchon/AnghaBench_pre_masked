
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rio_priv {scalar_t__ regs_win; } ;
struct rio_mport {struct rio_priv* priv; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct rio_mport *VAR_0,
    int VAR_1, u32 VAR_2, int VAR_3, u32 VAR_4)
{
 struct rio_priv *VAR_5 = VAR_0->priv;
 FUNC_1
     ("fsl_local_config_write: index %d offset %8.8x data %8.8x\n",
      VAR_1, VAR_2, VAR_4);
 FUNC_0(VAR_5->regs_win + VAR_2, VAR_4);

 return 0;
}
