
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int len; char* buff; } ;
struct TYPE_4__ {TYPE_1__ string; } ;
struct rmsgpack_dom_value {TYPE_2__ val; int type; } ;
struct buffer {int offset; char* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (int*,char const*,unsigned int) ;
 struct buffer FUNC_2 (struct buffer,char*,char const**) ;
 int FUNC_3 (char const**) ;
 int FUNC_4 (int,char const**) ;

__attribute__((used)) static struct buffer FUNC_5(struct buffer VAR_2,
      struct rmsgpack_dom_value *VAR_3, const char **VAR_4)
{
   const char * VAR_5 = ((void*)0);
   char VAR_6 = '\0';
   char VAR_7 = '\0';
   int VAR_8 = 0;

   (void)VAR_7;

   VAR_2 = FUNC_2(VAR_2, &VAR_6, VAR_4);

   if (*VAR_4)
      return VAR_2;

   if (VAR_6 == 'b')
   {
      VAR_8 = 1;
      VAR_2 = FUNC_2(VAR_2, &VAR_6, VAR_4);
   }

   if (VAR_6 != '"' && VAR_6 != '\'')
   {
      VAR_2.offset--;
      FUNC_4(VAR_2.offset, VAR_4);
   }

   VAR_5 = VAR_2.data + VAR_2.offset;
   VAR_2 = FUNC_2(VAR_2, &VAR_7, VAR_4);

   while (!*VAR_4)
   {
      if (VAR_7 == VAR_6)
         break;
      VAR_2 = FUNC_2(VAR_2, &VAR_7, VAR_4);
   }

   if (!*VAR_4)
   {
      size_t VAR_9;
      VAR_3->type = VAR_8 ? VAR_0 : VAR_1;
      VAR_3->val.string.len = (uint32_t)((VAR_2.data + VAR_2.offset) - VAR_5 - 1);

      VAR_9 = VAR_8 ? (VAR_3->val.string.len + 1) / 2
         : (VAR_3->val.string.len + 1);
      VAR_3->val.string.buff = (char*)FUNC_0(VAR_9, sizeof(char));

      if (!VAR_3->val.string.buff)
         FUNC_3(VAR_4);
      else if (VAR_8)
      {
         unsigned VAR_10;
         const char *VAR_11 = VAR_5;
         unsigned VAR_12 = 0;

         for (VAR_10 = 0; VAR_10 < VAR_3->val.string.len; VAR_10 += 2)
         {
            uint8_t VAR_13, VAR_14;
            char VAR_15 = VAR_11[VAR_10];
            char VAR_16 = VAR_11[VAR_10 + 1];

            if (VAR_15 <= '9')
               VAR_13 = VAR_15 - '0';
            else
               VAR_13 = (VAR_15 - 'A') + 10;

            if (VAR_16 <= '9')
               VAR_14 = VAR_16 - '0';
            else
               VAR_14 = (VAR_16 - 'A') + 10;

            VAR_3->val.string.buff[VAR_12++] = VAR_13 * 16 + VAR_14;
         }

         VAR_3->val.string.len = VAR_12;
      }
      else
         FUNC_1(VAR_3->val.string.buff, VAR_5, VAR_3->val.string.len);
   }
   return VAR_2;
}
