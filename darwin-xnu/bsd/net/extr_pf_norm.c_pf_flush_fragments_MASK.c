
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_fragment {int dummy; } ;


 int FUNC_0 (char*) ;
 struct pf_fragment* FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct pf_fragment*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct pf_fragment *VAR_4;
 int VAR_5;

 VAR_5 = VAR_3 * 9 / 10;
 FUNC_0(("trying to free > %d frents\n",
     VAR_3 - VAR_5));
 while (VAR_5 < VAR_3) {
  VAR_4 = FUNC_1(&VAR_1, VAR_1);
  if (VAR_4 == ((void*)0))
   break;
  FUNC_2(VAR_4);
 }


 VAR_5 = VAR_2 * 9 / 10;
 FUNC_0(("trying to free > %d cache entries\n",
     VAR_2 - VAR_5));
 while (VAR_5 < VAR_2) {
  VAR_4 = FUNC_1(&VAR_0, VAR_0);
  if (VAR_4 == ((void*)0))
   break;
  FUNC_2(VAR_4);
 }
}
