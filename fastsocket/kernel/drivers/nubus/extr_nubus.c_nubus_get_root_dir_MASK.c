
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nubus_dir {int mask; scalar_t__ done; int base; int ptr; } ;
struct nubus_board {int lanes; int directory; } ;



int FUNC_0(const struct nubus_board* VAR_0,
         struct nubus_dir* VAR_1)
{
 VAR_1->ptr = VAR_1->base = VAR_0->directory;
 VAR_1->done = 0;
 VAR_1->mask = VAR_0->lanes;
 return 0;
}
