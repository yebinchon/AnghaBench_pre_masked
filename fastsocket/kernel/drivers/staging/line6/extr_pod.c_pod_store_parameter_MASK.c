
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* control; } ;
struct usb_line6_pod {int dirty; int param_dirty; TYPE_1__ prog_data; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct usb_line6_pod *VAR_0, int VAR_1, int VAR_2)
{
 VAR_0->prog_data.control[VAR_1] = VAR_2;
 FUNC_0(VAR_1, VAR_0->param_dirty);
 VAR_0->dirty = 1;
}
