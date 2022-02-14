
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mii_bus* FUNC_0 (int,int ) ;

struct mii_bus *FUNC_1(void)
{
 struct mii_bus *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (VAR_2 != ((void*)0))
  VAR_2->state = VAR_1;

 return VAR_2;
}
