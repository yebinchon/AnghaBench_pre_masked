
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_sdl_state {int * joy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct in_sdl_state*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct in_sdl_state *VAR_1 = VAR_0;

 if (VAR_1 != ((void*)0)) {
  if (VAR_1->joy != ((void*)0))
   FUNC_0(VAR_1->joy);
  FUNC_1(VAR_1);
 }
}
