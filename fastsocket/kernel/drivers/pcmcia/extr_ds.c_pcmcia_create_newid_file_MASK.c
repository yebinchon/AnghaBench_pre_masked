
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_driver {int drv; int * probe; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct pcmcia_driver *VAR_1)
{
 int VAR_2 = 0;
 if (VAR_1->probe != ((void*)0))
  VAR_2 = FUNC_0(&VAR_1->drv, &VAR_0);
 return VAR_2;
}
