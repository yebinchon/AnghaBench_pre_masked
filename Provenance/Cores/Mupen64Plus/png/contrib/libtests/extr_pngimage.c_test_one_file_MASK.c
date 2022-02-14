
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {char* operation; scalar_t__ ignored_transforms; unsigned int active_transforms; int options; char* filename; int written_file; int read_ip; int original_file; int original_ip; scalar_t__ transforms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct display*,unsigned int) ;
 int FUNC_2 (struct display*,char const*) ;
 unsigned int FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (struct display*,int *,char*,unsigned int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_7 (struct display*,unsigned int) ;
 int FUNC_8 (struct display*) ;
 int FUNC_9 (struct display*,int ,unsigned int) ;
 unsigned int VAR_5 ;

__attribute__((used)) static void
FUNC_10(struct display *VAR_6, const char *VAR_7)
{



   VAR_6->operation = "cache file";
   VAR_6->transforms = 0;
   FUNC_2(VAR_6, VAR_7);
   FUNC_8(VAR_6);




   if (VAR_6->ignored_transforms != 0)
   {
      FUNC_6(VAR_6, &VAR_6->original_file, "ignored transforms",
         VAR_6->ignored_transforms);


      if (!FUNC_1(VAR_6, 0 ))
         return;
   }
   {




      unsigned int VAR_8 = VAR_6->active_transforms;
      const int VAR_9 = (VAR_6->options & VAR_0) != 0;
      unsigned int VAR_10 = FUNC_3(VAR_8);
      unsigned int VAR_11 = 0;
      unsigned int VAR_12 = ~0U;
      unsigned int VAR_13 = 0;

      for (;;)
      {
         FUNC_6(VAR_6, &VAR_6->original_file, "active transforms", VAR_10);
         if (VAR_9)
         {
            unsigned int VAR_14 = VAR_10;

            do
            {
               if (VAR_14 == VAR_3)
                  goto combo;

               ++VAR_14;
            }


            while ( (VAR_14 & VAR_3) <= VAR_10
                  || (VAR_14 & VAR_8) == 0
                  || (VAR_14 & VAR_11) != 0
                  || FUNC_7(VAR_6, VAR_14));

            FUNC_0((VAR_14 & VAR_3) == VAR_14);
            VAR_10 = VAR_14;
         }

         else
         {
            VAR_8 &= ~VAR_10;

            if (VAR_8 == 0)
               goto combo;

            VAR_10 = FUNC_3(VAR_8);
         }
      }

combo:
      if (VAR_6->options & VAR_1)
      {




         if (VAR_12 != ~0U)
            FUNC_5("%s[0x%x]: PROBLEM: 0x%x[0x%x] ANTIDOTE: 0x%x\n",
               VAR_6->filename, VAR_8, VAR_12, VAR_13,
               VAR_4 & ~VAR_13);

         else
            FUNC_5("%s: no %sbad combos found\n", VAR_6->filename,
               (VAR_6->options & VAR_2) ? "additional " : "");
      }
   }
}
