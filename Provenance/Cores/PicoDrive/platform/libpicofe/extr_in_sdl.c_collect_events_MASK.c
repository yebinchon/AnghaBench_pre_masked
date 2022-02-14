
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_sdl_state {scalar_t__ joy; } ;
typedef int events ;
typedef int Uint32 ;
typedef int SDL_Event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct in_sdl_state*,int *,int*,int*) ;
 int FUNC_5 (struct in_sdl_state*,int *,int*,int*) ;

__attribute__((used)) static int FUNC_6(struct in_sdl_state *VAR_4, int *VAR_5, int *VAR_6)
{
 SDL_Event VAR_7[4];
 Uint32 VAR_8 = VAR_4->joy ? VAR_0 : (VAR_1 & ~VAR_0);
 int VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13 = 0;
 int VAR_14, VAR_15;
 SDL_Event *VAR_16;

 VAR_10 = (VAR_5 != ((void*)0)) ? 1 : sizeof(VAR_7) / sizeof(VAR_7[0]);

 FUNC_1();

 VAR_14 = FUNC_0(((void*)0), 0, VAR_3, VAR_8);

 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15 += VAR_9) {
  VAR_9 = FUNC_0(VAR_7, VAR_10, VAR_2, VAR_8);
  if (VAR_9 <= 0)
   break;
  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
   VAR_16 = &VAR_7[VAR_11];
   if (VAR_4->joy)
    VAR_12 = FUNC_5(VAR_4,
     VAR_16, VAR_5, VAR_6);
   else
    VAR_12 = FUNC_4(VAR_4,
     VAR_16, VAR_5, VAR_6);
   if (VAR_12 < 0) {
    switch (VAR_12) {
     case -2:
      FUNC_2(VAR_16);
      break;
     default:
      if (&FUNC_3 != ((void*)0))
       FUNC_3(VAR_16);
      break;
    }
    continue;
   }

   VAR_13 |= VAR_12;
   if (VAR_5 != ((void*)0) && VAR_12)
   {

    for (VAR_11++; VAR_11 < VAR_9; VAR_11++)
     FUNC_2(&VAR_7[VAR_11]);
    goto out;
   }
  }
 }

out:
 return VAR_13;
}
