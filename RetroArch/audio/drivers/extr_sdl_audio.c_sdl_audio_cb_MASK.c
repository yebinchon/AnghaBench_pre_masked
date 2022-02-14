
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cond; int buffer; } ;
typedef TYPE_1__ sdl_audio_t ;
typedef int Uint8 ;


 int FUNC_0 (int ,int *,size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, Uint8 *VAR_1, int VAR_2)
{
   sdl_audio_t *VAR_3 = (sdl_audio_t*)VAR_0;
   size_t VAR_4 = FUNC_1(VAR_3->buffer);
   size_t VAR_5 = VAR_2 > (int)VAR_4 ? VAR_4 : VAR_2;

   FUNC_0(VAR_3->buffer, VAR_1, VAR_5);





   FUNC_2(VAR_1 + VAR_5, 0, VAR_2 - VAR_5);
}
