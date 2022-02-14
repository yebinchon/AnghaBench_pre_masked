
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct channel {TYPE_1__* board; } ;
struct TYPE_2__ {int (* rxwinon ) (struct channel*) ;} ;


 int FUNC_0 (struct channel*) ;

__attribute__((used)) static void FUNC_1(struct channel *VAR_0)
{
 VAR_0->board->rxwinon(VAR_0);
}
