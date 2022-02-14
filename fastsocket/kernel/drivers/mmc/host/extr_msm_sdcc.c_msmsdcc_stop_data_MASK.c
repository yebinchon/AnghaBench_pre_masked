
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ got_datablkend; scalar_t__ got_dataend; int * data; } ;
struct msmsdcc_host {TYPE_1__ curr; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct msmsdcc_host *VAR_1)
{
 FUNC_0(0, VAR_1->base + VAR_0);
 VAR_1->curr.data = ((void*)0);
 VAR_1->curr.got_dataend = VAR_1->curr.got_datablkend = 0;
}
