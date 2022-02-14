
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int show; int hide; int set_pos; int set_offset; } ;
struct nouveau_crtc {TYPE_1__ cursor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_0(struct nouveau_crtc *VAR_4)
{
 VAR_4->cursor.set_offset = VAR_1;
 VAR_4->cursor.set_pos = VAR_2;
 VAR_4->cursor.hide = VAR_0;
 VAR_4->cursor.show = VAR_3;
 return 0;
}
