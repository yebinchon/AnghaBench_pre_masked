
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_keybind {void* mbutton; int joyaxis; void* joykey; int key; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (char const*) ;
 struct retro_keybind** VAR_3 ;
 unsigned int FUNC_1 (char const*) ;
 int FUNC_2 (int *,char const**,int *,int *,int *) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_4,
      const char *VAR_5, unsigned VAR_6, size_t VAR_7)
{
   const char *VAR_8 = ((void*)0);
   unsigned VAR_9 = 0;
   unsigned VAR_10 = 0;
   struct retro_keybind *VAR_11 = ((void*)0);

   FUNC_2(((void*)0), &VAR_8, ((void*)0), ((void*)0), ((void*)0));

   if (FUNC_3(VAR_8, "deferred_user_binds_list"))
   {
      unsigned char VAR_12 = FUNC_0(&VAR_5[1]);

      VAR_10 = (unsigned)(VAR_12 - 1);


      VAR_9 = (unsigned)(VAR_7 - 7);
   }
   else
      VAR_9 = FUNC_1(VAR_5);

   VAR_11 = &VAR_3[VAR_10][VAR_9];

   if (VAR_11)
   {
      VAR_11->key = VAR_2;
      VAR_11->joykey = VAR_1;
      VAR_11->joyaxis = VAR_0;
      VAR_11->mbutton = VAR_1;
   }

   return 0;
}
