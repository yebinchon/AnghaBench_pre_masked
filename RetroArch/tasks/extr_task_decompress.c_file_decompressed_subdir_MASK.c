
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct archive_extract_userdata {TYPE_1__* dec; } ;
typedef int path_dir ;
typedef int path ;
struct TYPE_2__ {char const* subdir; char* callback_error; int target_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int ) ;
 int FUNC_1 (char*,char const*,int const*,unsigned int,int ,int ,int ,struct archive_extract_userdata*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int ,char const*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,char*,char*) ;
 int FUNC_7 (char const*) ;
 char const* FUNC_8 (char const*,char const*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_2,
      const char *VAR_3,
      const uint8_t *VAR_4,
      unsigned VAR_5, uint32_t VAR_6,uint32_t VAR_7,
      uint32_t VAR_8, struct archive_extract_userdata *VAR_9)
{
   char VAR_10[VAR_1];
   char VAR_11[VAR_1];
   size_t VAR_12 = FUNC_7(VAR_2);
   char VAR_13 = VAR_2[VAR_12 - 1];

   VAR_10[0] = VAR_11[0] = '\0';


   if (VAR_13 == '/' || VAR_13 == '\\')
      return 1;

   if (FUNC_8(VAR_2, VAR_9->dec->subdir) != VAR_2)
      return 1;

   VAR_2 += FUNC_7(VAR_9->dec->subdir) + 1;

   FUNC_3(VAR_11,
         VAR_9->dec->target_dir, VAR_2, sizeof(VAR_11));
   FUNC_2(VAR_10, VAR_11, sizeof(VAR_10));


   if (!FUNC_5(VAR_10))
      goto error;

   if (!FUNC_1(VAR_11, VAR_3,
            VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9))
      goto error;





   return 1;

error:
   VAR_9->dec->callback_error = (char*)FUNC_4(VAR_0);
   FUNC_6(VAR_9->dec->callback_error,
         VAR_0, "Failed to deflate %s.\n", VAR_11);

   return 0;
}
