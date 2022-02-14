
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int r ;



__attribute__((used)) static unsigned FUNC_0(unsigned VAR_0)
{
   const unsigned VAR_1[] = { 48000, 44100, 96000, 192000, 32000 };

   if (VAR_0 >= sizeof(VAR_1) / sizeof(unsigned))
      return 0;

   return VAR_1[VAR_0];
}
