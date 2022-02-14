
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dib0090_state {int bb7; int bb6; int step; TYPE_1__* dc; } ;
struct TYPE_2__ {int addr; int offset; } ;


 int FUNC_0 (struct dib0090_state*,int,int) ;

__attribute__((used)) static void FUNC_1(struct dib0090_state *VAR_0)
{
 u16 *VAR_1;

 if (VAR_0->dc->addr == 0x07)
  VAR_1 = &VAR_0->bb7;
 else
  VAR_1 = &VAR_0->bb6;

 *VAR_1 &= ~(0x1f << VAR_0->dc->offset);
 *VAR_1 |= VAR_0->step << VAR_0->dc->offset;

 FUNC_0(VAR_0, VAR_0->dc->addr, *VAR_1);
}
