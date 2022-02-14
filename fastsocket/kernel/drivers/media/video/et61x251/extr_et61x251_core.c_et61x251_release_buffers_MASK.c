
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct et61x251_device {int * frame_current; scalar_t__ nbuffers; TYPE_1__* frame; } ;
struct TYPE_2__ {int bufmem; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct et61x251_device* VAR_0)
{
 if (VAR_0->nbuffers) {
  FUNC_0(VAR_0->frame[0].bufmem);
  VAR_0->nbuffers = 0;
 }
 VAR_0->frame_current = ((void*)0);
}
