
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i8254_struct {int * mode; int iobase; } ;


 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct i8254_struct *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < 3; ++VAR_1)
  FUNC_0(VAR_0->iobase, VAR_1, VAR_0->mode[VAR_1]);
}
