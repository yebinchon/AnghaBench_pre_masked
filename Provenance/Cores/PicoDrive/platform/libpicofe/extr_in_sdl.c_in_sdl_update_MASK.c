
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_sdl_state {int* keystate; } ;
typedef int keybits_t ;


 int VAR_0 ;
 size_t FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct in_sdl_state*,int *,int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, const int *VAR_4, int *VAR_5)
{
 struct in_sdl_state *VAR_6 = VAR_3;
 keybits_t VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 FUNC_1(VAR_6, ((void*)0), ((void*)0));

 for (VAR_8 = 0; VAR_8 < VAR_2 / VAR_1 + 1; VAR_8++) {
  VAR_7 = VAR_6->keystate[VAR_8];
  if (VAR_7 == 0)
   continue;
  for (VAR_10 = 0; VAR_7 != 0; VAR_10++, VAR_7 >>= 1) {
   if ((VAR_7 & 1) == 0)
    continue;
   VAR_9 = VAR_8 * VAR_1 + VAR_10;

   for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
    VAR_5[VAR_11] |= VAR_4[FUNC_0(VAR_9, VAR_11)];
  }
 }

 return 0;
}
