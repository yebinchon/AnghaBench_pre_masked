
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct invocation {unsigned int argc; struct argument* argv; int func; } ;
struct buffer {size_t offset; scalar_t__* data; } ;
struct TYPE_5__ {char* buff; scalar_t__ len; } ;
struct TYPE_6__ {TYPE_1__ string; } ;
struct TYPE_8__ {TYPE_2__ val; int type; } ;
struct TYPE_7__ {TYPE_4__ value; } ;
struct argument {int type; TYPE_3__ a; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct argument*,struct argument*,int) ;
 int FUNC_4 (struct argument*) ;
 struct buffer FUNC_5 (struct buffer) ;
 struct buffer FUNC_6 (struct buffer,char,char const**) ;
 int VAR_3 ;
 struct buffer FUNC_7 (struct buffer,char const**,size_t*,char const**) ;
 struct buffer FUNC_8 (struct buffer,struct argument*,char const**) ;
 struct buffer FUNC_9 (struct buffer,TYPE_4__*,char const**) ;
 int FUNC_10 (struct buffer,char*) ;
 int FUNC_11 (char const**) ;
 int FUNC_12 (char const**) ;
 int FUNC_13 (char*,char const*,size_t) ;

__attribute__((used)) static struct buffer FUNC_14(struct buffer VAR_4,
      struct invocation *VAR_5, const char **VAR_6)
{
   unsigned VAR_7;
   size_t VAR_8;
   struct argument VAR_9[VAR_1];
   const char *VAR_10 = ((void*)0);
   unsigned VAR_11 = 0;

   VAR_4 = FUNC_5(VAR_4);
   VAR_4 = FUNC_6(VAR_4, '{', VAR_6);

   if (*VAR_6)
      goto clean;

   VAR_4 = FUNC_5(VAR_4);

   while (!FUNC_10(VAR_4, "}"))
   {
      if (VAR_11 >= VAR_1)
      {
         FUNC_12(VAR_6);
         goto clean;
      }

      if (FUNC_1((int)VAR_4.data[VAR_4.offset]))
      {
         VAR_4 = FUNC_7(VAR_4, &VAR_10, &VAR_8, VAR_6);

         if (!*VAR_6)
         {
            VAR_9[VAR_11].a.value.type = VAR_2;
            VAR_9[VAR_11].a.value.val.string.len = (uint32_t)VAR_8;
            VAR_9[VAR_11].a.value.val.string.buff = (char*)FUNC_0(
                  VAR_8 + 1,
                  sizeof(char)
                  );

            if (!VAR_9[VAR_11].a.value.val.string.buff)
               goto clean;

            FUNC_13(
                  VAR_9[VAR_11].a.value.val.string.buff,
                  VAR_10,
                  VAR_8
                  );
         }
      }
      else
         VAR_4 = FUNC_9(VAR_4, &VAR_9[VAR_11].a.value, VAR_6);

      if (*VAR_6)
         goto clean;

      VAR_9[VAR_11].type = VAR_0;
      VAR_4 = FUNC_5(VAR_4);
      VAR_11++;
      VAR_4 = FUNC_6(VAR_4, ':', VAR_6);

      if (*VAR_6)
         goto clean;

      VAR_4 = FUNC_5(VAR_4);

      if (VAR_11 >= VAR_1)
      {
         FUNC_12(VAR_6);
         goto clean;
      }

      VAR_4 = FUNC_8(VAR_4, &VAR_9[VAR_11], VAR_6);

      if (*VAR_6)
         goto clean;
      VAR_11++;
      VAR_4 = FUNC_5(VAR_4);
      VAR_4 = FUNC_6(VAR_4, ',', VAR_6);

      if (*VAR_6)
      {
         *VAR_6 = ((void*)0);
         break;
      }
      VAR_4 = FUNC_5(VAR_4);
   }

   VAR_4 = FUNC_6(VAR_4, '}', VAR_6);

   if (*VAR_6)
      goto clean;

   VAR_5->func = VAR_3;
   VAR_5->argc = VAR_11;
   VAR_5->argv = (struct argument*)
      FUNC_2(sizeof(struct argument) * VAR_11);

   if (!VAR_5->argv)
   {
      FUNC_11(VAR_6);
      goto clean;
   }
   FUNC_3(VAR_5->argv, VAR_9,
         sizeof(struct argument) * VAR_11);

   goto success;
clean:
   for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++)
      FUNC_4(&VAR_9[VAR_7]);
success:
   return VAR_4;
}
