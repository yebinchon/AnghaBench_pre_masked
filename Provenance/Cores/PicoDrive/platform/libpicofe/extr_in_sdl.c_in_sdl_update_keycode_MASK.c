
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_sdl_state {int dummy; } ;


 int FUNC_0 (struct in_sdl_state*,int*,int*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, int *VAR_1)
{
 struct in_sdl_state *VAR_2 = VAR_0;
 int VAR_3 = -1, VAR_4 = 0;

 FUNC_0(VAR_2, &VAR_3, &VAR_4);

 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_4;

 return VAR_3;
}
