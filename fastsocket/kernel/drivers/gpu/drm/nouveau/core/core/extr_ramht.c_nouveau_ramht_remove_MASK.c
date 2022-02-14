
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_ramht {int dummy; } ;
struct nouveau_bar {int (* flush ) (struct nouveau_bar*) ;} ;


 struct nouveau_bar* FUNC_0 (struct nouveau_ramht*) ;
 int FUNC_1 (struct nouveau_ramht*,int,int) ;
 int FUNC_2 (struct nouveau_bar*) ;

void
FUNC_3(struct nouveau_ramht *VAR_0, int VAR_1)
{
 struct nouveau_bar *VAR_2 = FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_1 + 0, 0x00000000);
 FUNC_1(VAR_0, VAR_1 + 4, 0x00000000);
 if (VAR_2)
  VAR_2->flush(VAR_2);
}
