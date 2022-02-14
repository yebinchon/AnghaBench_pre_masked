
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int playlist_t ;
typedef int file_list_t ;


 int VAR_0 ;
 char const* FUNC_0 (int ) ;
 int * FUNC_1 () ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_6(file_list_t* VAR_1,
      unsigned *VAR_2, unsigned VAR_3, unsigned VAR_4,
      const char *VAR_5,
      char *VAR_6, size_t VAR_7,
      const char *VAR_8,
      char *VAR_9, size_t VAR_10)
{
   playlist_t *VAR_11 = FUNC_1();
   const char *VAR_12 = ((void*)0);

   *VAR_6 = '\0';
   *VAR_2 = 19;

   FUNC_5(VAR_9, VAR_8, VAR_10);

   if (!VAR_11)
      return;

   VAR_12 = FUNC_2(VAR_11);

   if (!FUNC_3(VAR_12) &&
       !FUNC_4(VAR_12, "DETECT"))
      FUNC_5(VAR_6, VAR_12, VAR_7);
   else
      FUNC_5(VAR_6, FUNC_0(VAR_0), VAR_7);
}
