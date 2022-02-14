
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_3__ {scalar_t__ iobase; } ;
struct TYPE_4__ {TYPE_1__ w6692; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct IsdnCardState *VAR_0, int VAR_1, u_char VAR_2, u_char VAR_3)
{
 FUNC_0(VAR_3, VAR_0->hw.w6692.iobase + (VAR_1 ? 0x40 : 0) + VAR_2);
}
