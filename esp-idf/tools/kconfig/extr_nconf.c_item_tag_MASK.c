
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mitem {char tag; } ;
typedef int ITEM ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static char FUNC_2(void)
{
 ITEM *VAR_1;
 struct mitem *VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == ((void*)0))
  return 0;
 VAR_2 = (struct mitem *) FUNC_1(VAR_1);
 return VAR_2->tag;
}
