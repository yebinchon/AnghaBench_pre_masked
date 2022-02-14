
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ empty_framebuffer; } ;
typedef TYPE_1__ ctr_video_t ;
struct TYPE_4__ {scalar_t__ frameBuffer; } ;
typedef TYPE_2__ PrintConsole ;
typedef int Handle ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int* FUNC_1 () ;
 scalar_t__** VAR_1 ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void* VAR_2, bool VAR_3)
{
   Handle VAR_4;
   u8 VAR_5;
   extern PrintConsole* VAR_6;
   ctr_video_t *VAR_7 = (ctr_video_t*)VAR_2;

    if (!VAR_7)
      return;

   VAR_1[0] = VAR_3 ? (u8*)VAR_6->frameBuffer:
                                        (u8*)VAR_7->empty_framebuffer;

   FUNC_0(&VAR_5);
   if(VAR_5 && FUNC_2(&VAR_4, "gsp::Lcd") >= 0)
   {
      u32 *VAR_8 = FUNC_1();
      VAR_8[0] = VAR_3? 0x00110040: 0x00120040;
      VAR_8[1] = 2;
      FUNC_4(VAR_4);
      FUNC_3(VAR_4);
   }

   VAR_0 = VAR_3;
}
