
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i8254_struct {int* logic2phys; int iobase; } ;


 unsigned int FUNC_0 (int ,int) ;

__attribute__((used)) static unsigned int FUNC_1(struct i8254_struct *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_0->logic2phys[VAR_1];

 return FUNC_0(VAR_0->iobase, VAR_2);
}
