
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int eof; TYPE_1__* parent; scalar_t__ frame_ready; } ;
struct TYPE_4__ {int * outputs; } ;
typedef TYPE_2__ FFFrameSync ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(FFFrameSync *VAR_2)
{
    VAR_2->eof = 1;
    VAR_2->frame_ready = 0;
    FUNC_0(VAR_2->parent->outputs[0], VAR_0, VAR_1);
}
