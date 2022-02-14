
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static float FUNC_0(void *VAR_0,
      unsigned VAR_1, unsigned VAR_2)
{
   (void)VAR_0;

   if ((VAR_1 == 640 || VAR_1 == 720) && (VAR_2 == 480 || VAR_2 == 576))
      return 4.0f / 3.0f;
   return (float)VAR_1 / VAR_2;
}
