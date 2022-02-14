
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct channel {TYPE_1__* board; int rxwin; } ;
struct TYPE_2__ {scalar_t__ port; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct channel *VAR_0)
{
 FUNC_0(VAR_0->rxwin, (int)VAR_0->board->port + 1);
}
