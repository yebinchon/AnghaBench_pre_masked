
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_ctrl {TYPE_1__* hdw; } ;
struct TYPE_2__ {scalar_t__ enc_unsafe_stale; scalar_t__ enc_stale; } ;



__attribute__((used)) static void FUNC_0(struct pvr2_ctrl *VAR_0)
{
 VAR_0->hdw->enc_stale = 0;
 VAR_0->hdw->enc_unsafe_stale = 0;
}
