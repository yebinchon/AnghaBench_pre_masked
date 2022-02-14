
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int key_down; int key_flag; int key_code; } ;
struct TYPE_5__ {int y; int x; } ;
struct TYPE_6__ {TYPE_1__ keyboard; TYPE_2__ mouse; } ;
struct remote_input {scalar_t__ type; unsigned char mouse_buttons; TYPE_3__ data; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (char*,int ,int ,char*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct remote_input *VAR_4)
{
 if (VAR_4->type == VAR_0) {
  unsigned char VAR_5 = VAR_4->mouse_buttons;
  FUNC_0("remote mouse movement: (x,y)=(%d,%d)%s%s%s%s\n",
   VAR_4->data.mouse.x, VAR_4->data.mouse.y,
   (VAR_5) ? " -- buttons:" : "",
   (VAR_5 & VAR_1) ? "left " : "",
   (VAR_5 & VAR_2) ? "middle " : "",
   (VAR_5 & VAR_3) ? "right" : ""
        );
 } else {
  FUNC_0("remote keypress (code, flag, down):"
      "%d (0x%x) [0x%x] [0x%x]\n",
    VAR_4->data.keyboard.key_code,
    VAR_4->data.keyboard.key_code,
    VAR_4->data.keyboard.key_flag,
    VAR_4->data.keyboard.key_down
        );
 }
}
