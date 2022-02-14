
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libretrodb_t ;
typedef int libretrodb_query_t ;
typedef int libretrodb_cursor_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,int *) ;
 scalar_t__ FUNC_2 (char const*,int *) ;
 scalar_t__ FUNC_3 (int *,char const*,int ,char const**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(libretrodb_t *VAR_0,
      libretrodb_cursor_t *VAR_1, const char *VAR_2, const char *VAR_3)
{
   const char *VAR_4 = ((void*)0);
   libretrodb_query_t *VAR_5 = ((void*)0);

   if ((FUNC_2(VAR_2, VAR_0)) != 0)
      return -1;

   if (VAR_3)
      VAR_5 = (libretrodb_query_t*)FUNC_3(VAR_0, VAR_3,
      FUNC_5(VAR_3), &VAR_4);

   if (VAR_4)
      goto error;
   if ((FUNC_1(VAR_0, VAR_1, VAR_5)) != 0)
      goto error;

   if (VAR_5)
      FUNC_4(VAR_5);

   return 0;

error:
   if (VAR_5)
      FUNC_4(VAR_5);
   FUNC_0(VAR_0);

   return -1;
}
