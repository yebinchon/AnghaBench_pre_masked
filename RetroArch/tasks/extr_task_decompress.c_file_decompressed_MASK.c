
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct archive_extract_userdata {TYPE_1__* dec; } ;
typedef int path ;
struct TYPE_2__ {char* callback_error; int target_dir; } ;
typedef TYPE_1__ decompress_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int ) ;
 int FUNC_1 (char*,char const*,int const*,unsigned int,int ,int ,int ,struct archive_extract_userdata*) ;
 int FUNC_2 (char*,int ,char const*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,char*,char*) ;
 size_t FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_2, const char *VAR_3,
   const uint8_t *VAR_4, unsigned VAR_5, uint32_t VAR_6, uint32_t VAR_7,
   uint32_t VAR_8, struct archive_extract_userdata *VAR_9)
{
   char VAR_10[VAR_1];
   decompress_state_t *VAR_11 = VAR_9->dec;
   size_t VAR_12 = FUNC_7(VAR_2);
   char VAR_13 = VAR_2[VAR_12 - 1];

   VAR_10[0] = '\0';


   if (VAR_13 == '/' || VAR_13 == '\\')
      return 1;


   FUNC_2(VAR_10, VAR_11->target_dir, VAR_2, sizeof(VAR_10));
   FUNC_4(VAR_10);

   if (!FUNC_5(VAR_10))
      goto error;

   FUNC_2(VAR_10, VAR_11->target_dir, VAR_2, sizeof(VAR_10));

   if (!FUNC_1(VAR_10, VAR_3,
            VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9))
      goto error;




   return 1;

error:
   VAR_11->callback_error = (char*)FUNC_3(VAR_0);
   FUNC_6(VAR_11->callback_error, VAR_0,
         "Failed to deflate %s.\n", VAR_10);

   return 0;
}
