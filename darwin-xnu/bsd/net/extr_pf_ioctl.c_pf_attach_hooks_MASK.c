
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;


 int VAR_0 ;
 struct ifnet** VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_3(void)
{
 FUNC_1();





 if (VAR_2 != ((void*)0)) {
  int VAR_3;

  for (VAR_3 = 0; VAR_3 <= VAR_0; VAR_3++) {
   struct ifnet *VAR_4 = VAR_1[VAR_3];
   if (VAR_4 != ((void*)0)) {
    FUNC_2(VAR_4);
   }
  }
 }
 FUNC_0();
}
