
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int address; } ;
typedef TYPE_1__ vita2d_display_data ;
struct TYPE_6__ {int size; int height; int width; int pixelformat; int pitch; int base; } ;
typedef TYPE_2__ SceDisplayFrameBuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 () ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_3(const void *VAR_6)
{
 SceDisplayFrameBuf VAR_7;
 const vita2d_display_data *VAR_8 = (const vita2d_display_data *)VAR_6;

 FUNC_0(&VAR_7, 0x00, sizeof(SceDisplayFrameBuf));
 VAR_7.size = sizeof(SceDisplayFrameBuf);
 VAR_7.base = VAR_8->address;
 VAR_7.pitch = VAR_2;
 VAR_7.pixelformat = VAR_1;
 VAR_7.width = VAR_3;
 VAR_7.height = VAR_0;
 FUNC_1(&VAR_7, VAR_4);

 if (VAR_5) {
  FUNC_2();
 }
}
