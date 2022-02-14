
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct display {scalar_t__ errset; size_t* entry; int* value; int options; } ;
typedef size_t png_byte ;
struct TYPE_4__ {int opt; TYPE_1__* values; } ;
struct TYPE_3__ {int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct display*,int ,char*,int,char const*) ;
 int FUNC_3 (struct display*,size_t,char const*,int) ;
 size_t FUNC_4 (struct display*,char const*,int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_7(struct display *VAR_5, const char *VAR_6)
{
   FUNC_1(VAR_5->errset == 0);

   if (VAR_6 != ((void*)0) && VAR_6[0] == '-' && VAR_6[1] == '-')
   {
      int VAR_7 = 0, VAR_8 = (FUNC_6(VAR_6+2, "no-", 3) == 0), VAR_9;
      png_byte VAR_10;

      if (VAR_8)
         VAR_6 += 5;

      else
         VAR_6 += 2;


      while (VAR_6[VAR_7] != 0 && VAR_6[VAR_7] != '=') ++VAR_7;




      VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_7);


      if (VAR_6[VAR_7] == 0)
      {
         VAR_9 = VAR_4[VAR_10].values[VAR_8].value;
         VAR_5->entry[VAR_10] = (png_byte) (VAR_8 + 1U);
      }

      else
      {
         const char *VAR_11 = VAR_6 + (VAR_7+1);




         if (VAR_4[VAR_10].opt != VAR_1)
         {

            VAR_9 = FUNC_3(VAR_5, VAR_10, VAR_11, FUNC_5(VAR_11));

            if (VAR_8)
            {
               if (VAR_4[VAR_10].opt < VAR_2)
                  VAR_9 = !VAR_9;

               else
               {
                  FUNC_2(VAR_5, VAR_3,
                        "%.*s: option=arg cannot be negated", VAR_7, VAR_6);
                  FUNC_0();
               }
            }
         }

         else
         {





            if (VAR_8)
               VAR_9 = VAR_4[VAR_10].values[0].value;

            else
               VAR_9 = 0;

            while (*VAR_11 != 0)
            {



               int VAR_12, VAR_13;

               VAR_13 = 0;
               while (VAR_11[++VAR_13] != 0 && VAR_11[VAR_13] != ',') {}

               VAR_12 = FUNC_3(VAR_5, VAR_10, VAR_11, VAR_13);

               if (VAR_8)
                  VAR_9 &= ~VAR_12;

               else
                  VAR_9 |= VAR_12;

               VAR_11 += VAR_13;
               if (*VAR_11 != 0)
                  ++VAR_11;
            }
         }
      }


      VAR_5->value[VAR_10] = VAR_9;

      if (VAR_4[VAR_10].opt < VAR_0)
      {

         if (VAR_9)
            VAR_5->options = (VAR_5->options & ~VAR_0) | VAR_4[VAR_10].opt;

         else
            FUNC_2(VAR_5, VAR_3,
      "%.*s: messages cannot be turned off individually; set a message level",
                  VAR_7, VAR_6);
      }

      else if (VAR_4[VAR_10].opt < VAR_2)
      {
         if (VAR_9)
            VAR_5->options |= VAR_4[VAR_10].opt;

         else
            VAR_5->options &= ~VAR_4[VAR_10].opt;
      }

      return 1;
   }

   else
      return 0;
}
