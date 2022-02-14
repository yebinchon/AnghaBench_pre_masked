
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ frames_rendered; int surf_bitmap; int surf_screen; } ;


 int FUNC_0 (int *,char*,char*,int ) ;
 int FUNC_1 (int,int,int,int,int ,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static int FUNC_5()
{
  if(FUNC_2(VAR_0) < 0) {
    FUNC_0(((void*)0), "SDL Video initialization failed", "Error", 0);
    return 0;
  }
  VAR_5.surf_screen = FUNC_3(VAR_3, VAR_2, 16, VAR_1 | VAR_4);
  VAR_5.surf_bitmap = FUNC_1(VAR_1, 720, 576, 16, 0, 0, 0, 0);
  VAR_5.frames_rendered = 0;
  FUNC_4(0);
  return 1;
}
