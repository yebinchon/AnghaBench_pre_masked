
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slic_cmdqmem {int dummy; } ;
struct adapter {struct slic_cmdqmem cmdqmem; } ;


 int FUNC_0 (struct slic_cmdqmem*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_0)
{
 struct slic_cmdqmem *VAR_1 = &VAR_0->cmdqmem;

 FUNC_0(VAR_1, 0, sizeof(struct slic_cmdqmem));
}
