
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {char* member_0; int member_1; } ;
typedef TYPE_1__ string_pair_t ;
typedef int MMAL_STATUS_T ;
 int FUNC_0 (int*,TYPE_1__*,int ,char const*) ;
 int FUNC_1 (TYPE_1__*) ;

MMAL_STATUS_T FUNC_2(uint32_t *VAR_0, const char *VAR_1)
{
   static string_pair_t VAR_2[] = {
      { "h264", 133 },
      { "h263", 134 },
      { "mpeg4", 131 },
      { "mpeg2", 132 },
      { "vp8", 128 },
      { "vp7", 129 },
      { "vp6", 130 },
   };
   int VAR_3 = 0;
   MMAL_STATUS_T VAR_4;

   VAR_4 = FUNC_0(&VAR_3, VAR_2, FUNC_1(VAR_2), VAR_1);
   *VAR_0 = VAR_3;
   return VAR_4;
}
