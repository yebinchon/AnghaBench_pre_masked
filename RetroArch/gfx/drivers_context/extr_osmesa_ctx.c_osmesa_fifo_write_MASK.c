
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t width; size_t pixsize; int client; int height; scalar_t__ screen; } ;
typedef TYPE_1__ gfx_ctx_osmesa_data_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,char*) ;
 int FUNC_2 (int,scalar_t__,size_t,int ) ;
 int VAR_2 ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(gfx_ctx_osmesa_data_t *VAR_3)
{
   int VAR_4;
   size_t VAR_5 = VAR_3->width * VAR_3->pixsize;

   if (VAR_3->client < 0)
      return;

   for (VAR_4 = VAR_3->height -1; VAR_4 >= 0; --VAR_4)
   {
      int VAR_6 = FUNC_2(VAR_3->client, VAR_3->screen + VAR_4 * VAR_5, VAR_5, VAR_0);

      if (VAR_6 < 0)
      {
         FUNC_1(VAR_2, "[osmesa] Lost connection to %i: %s\n", VAR_3->client, FUNC_3(VAR_1));
         FUNC_0(VAR_3->client);
         VAR_3->client = -1;
         break;
      }
   }
}
