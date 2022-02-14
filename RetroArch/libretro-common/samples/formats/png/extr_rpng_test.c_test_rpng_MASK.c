
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Imlib_Image ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int* FUNC_4 () ;
 unsigned int FUNC_5 () ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (int const*,int*,unsigned int) ;
 int FUNC_8 (char const*,int**,unsigned int*,unsigned int*) ;
 int FUNC_9 (char*,int const*,int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_10(const char *VAR_1)
{




   const uint32_t VAR_2[] = {
      0xff000000 | 0x50, 0xff000000 | 0x80,
      0xff000000 | 0x40, 0xff000000 | 0x88,
      0xff000000 | 0x50, 0xff000000 | 0x80,
      0xff000000 | 0x40, 0xff000000 | 0x88,
      0xff000000 | 0xc3, 0xff000000 | 0xd3,
      0xff000000 | 0xc3, 0xff000000 | 0xd3,
      0xff000000 | 0xc3, 0xff000000 | 0xd3,
      0xff000000 | 0xc3, 0xff000000 | 0xd3,
   };
   uint32_t *VAR_3 = ((void*)0);
   unsigned VAR_4 = 0;
   unsigned VAR_5 = 0;

   if (!FUNC_9("/tmp/test.png", VAR_2, 4, 4, 16))
      return 1;

   if (!FUNC_8(VAR_1, &VAR_3, &VAR_4, &VAR_5))
      return 2;

   FUNC_0(VAR_0, "Path: %s.\n", VAR_1);
   FUNC_0(VAR_0, "Got image: %u x %u.\n", VAR_4, VAR_5);
   FUNC_1(VAR_3);

   return 0;
}
