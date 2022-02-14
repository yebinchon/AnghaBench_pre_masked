
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int playlist_t ;
typedef int file_list_t ;


 int VAR_0 ;
 char const* FUNC_0 (int *,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_3(
      file_list_t* VAR_1,
      unsigned *VAR_2, unsigned VAR_3, unsigned VAR_4,
      const char *VAR_5,
      char *VAR_6, size_t VAR_7,
      const char *VAR_8,
      char *VAR_9, size_t VAR_10)
{
   playlist_t *VAR_11 = FUNC_1();

   *VAR_6 = '\0';
   *VAR_2 = 19;

   FUNC_2(VAR_9, VAR_8, VAR_10);

   if (!VAR_11)
      return;

   FUNC_2(
         VAR_6,
         FUNC_0(VAR_11, VAR_0),
         VAR_7);
}
