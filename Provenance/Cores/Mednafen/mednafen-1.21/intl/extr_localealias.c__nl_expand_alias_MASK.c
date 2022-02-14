
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alias_map {char const* alias; char* value; } ;


 char* VAR_0 ;
 char const VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct alias_map*,int ,scalar_t__,int,int (*) (void const*,void const*)) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t FUNC_3 (char const*,int) ;

const char *
FUNC_4 (const char *VAR_6)
{
  static const char *VAR_7;
  struct alias_map *VAR_8;
  const char *VAR_9 = ((void*)0);
  size_t VAR_10;

  FUNC_0 (VAR_3);

  if (VAR_7 == ((void*)0))
    VAR_7 = VAR_0;

  do
    {
      struct alias_map VAR_11;

      VAR_11.alias = VAR_6;

      if (VAR_5 > 0)
 VAR_8 = (struct alias_map *) FUNC_2 (&VAR_11, VAR_4, VAR_5,
            sizeof (struct alias_map),
            (int (*) (const void *,
        const void *)
      ) VAR_2);
      else
 VAR_8 = ((void*)0);


      if (VAR_8 != ((void*)0))
 {
   VAR_9 = VAR_8->value;
   break;
 }


      VAR_10 = 0;
      while (VAR_10 == 0 && VAR_7[0] != '\0')
 {
   const char *VAR_12;

   while (VAR_7[0] == VAR_1)
     ++VAR_7;
   VAR_12 = VAR_7;

   while (VAR_7[0] != '\0'
   && VAR_7[0] != VAR_1)
     ++VAR_7;

   if (VAR_12 < VAR_7)
     VAR_10 = FUNC_3 (VAR_12, VAR_7 - VAR_12);
 }
    }
  while (VAR_10 != 0);

  FUNC_1 (VAR_3);

  return VAR_9;
}
