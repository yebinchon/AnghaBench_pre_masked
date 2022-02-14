
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clearVRAM; int menu_filter; int menuTexture; } ;
typedef TYPE_1__ ps2_video_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int,unsigned int,int) ;
 int FUNC_1 (int ,void const*,unsigned int,unsigned int,int,int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, const void *VAR_3, bool VAR_4,
                               unsigned VAR_5, unsigned VAR_6, float VAR_7)
{
   ps2_video_t *VAR_8 = (ps2_video_t*)VAR_2;

   bool VAR_9 = 0;
   int VAR_10 = (VAR_4 ? VAR_1 : VAR_0);
   bool VAR_11 = FUNC_0(VAR_8->menuTexture, VAR_5, VAR_6, VAR_10);

   FUNC_1(VAR_8->menuTexture, VAR_3, VAR_5, VAR_6, VAR_10, VAR_8->menu_filter, VAR_9);
   VAR_8->clearVRAM = VAR_8->clearVRAM || VAR_11;
}
