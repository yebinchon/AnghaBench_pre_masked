
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int offset; char* data; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct buffer) ;
 int FUNC_3 (struct buffer,char*,char const**) ;
 int FUNC_4 (int,char const**) ;

__attribute__((used)) static struct buffer FUNC_5(struct buffer VAR_0,
      const char **VAR_1,
      size_t *VAR_2, const char **VAR_3)
{
   char VAR_4 = '\0';

   if (FUNC_2(VAR_0))
   {
      FUNC_4(VAR_0.offset, VAR_3);
      return VAR_0;
   }

   *VAR_1 = VAR_0.data + VAR_0.offset;
   *VAR_2 = 0;
   FUNC_3(VAR_0, &VAR_4, VAR_3);

   if (*VAR_3)
      goto clean;
   if (!FUNC_0((int)VAR_4))
      return VAR_0;

   VAR_0.offset++;
   *VAR_2 = *VAR_2 + 1;
   FUNC_3(VAR_0, &VAR_4, VAR_3);

   while (!*VAR_3)
   {
      if (!(FUNC_0((int)VAR_4) || FUNC_1((int)VAR_4) || VAR_4 == '_'))
         break;
      VAR_0.offset++;
      *VAR_2 = *VAR_2 + 1;
      FUNC_3(VAR_0, &VAR_4, VAR_3);
   }

clean:
   return VAR_0;
}
