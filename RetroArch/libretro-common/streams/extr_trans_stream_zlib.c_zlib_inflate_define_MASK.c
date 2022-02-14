
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct zlib_trans_stream {int ex; } ;


 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, const char *VAR_1, uint32_t VAR_2)
{
   struct zlib_trans_stream *VAR_3 = (struct zlib_trans_stream *) VAR_0;
   if (FUNC_0(VAR_1, "window_bits"))
   {
      if (VAR_3)
         VAR_3->ex = (int) VAR_2;
      return 1;
   }
   return 0;
}
