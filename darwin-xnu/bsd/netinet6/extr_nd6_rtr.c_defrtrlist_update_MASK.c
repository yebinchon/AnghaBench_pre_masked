
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_defrouter {int * ifp; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct nd_defrouter* FUNC_1 (struct nd_defrouter*,int) ;
 int * VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct nd_defrouter *
FUNC_2(struct nd_defrouter *VAR_3)
{
 struct nd_defrouter *VAR_4;

 FUNC_0(VAR_2, VAR_0);
 VAR_4 = FUNC_1(VAR_3,
     (VAR_1 != ((void*)0) && VAR_3->ifp != VAR_1));

 return (VAR_4);
}
