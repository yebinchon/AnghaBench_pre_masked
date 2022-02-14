
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_keybind {size_t key; scalar_t__ valid; } ;
typedef int int16_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 int * VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int16_t FUNC_2(const struct retro_keybind *VAR_2,
      unsigned VAR_3, unsigned VAR_4)
{
   unsigned VAR_5 = 0;
   unsigned VAR_6 = 0;
   int16_t VAR_7 = 0;
   int16_t VAR_8 = 0;

   FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);

   if ( VAR_2[VAR_5].valid
         && FUNC_0(VAR_1,
            VAR_0[VAR_2[VAR_5].key]))
      VAR_7 = -0x7fff;
   if ( VAR_2[VAR_6].valid
         && FUNC_0(VAR_1,
         VAR_0[VAR_2[VAR_6].key]))
      VAR_8 = 0x7fff;

   return VAR_8 + VAR_7;
}
