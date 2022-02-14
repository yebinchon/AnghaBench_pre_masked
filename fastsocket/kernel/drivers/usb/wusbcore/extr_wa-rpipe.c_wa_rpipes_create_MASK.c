
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wahc {int * rpipe_bm; int rpipes; TYPE_1__* wa_descr; } ;
struct TYPE_2__ {int wNumRPipes; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int,int ) ;

int FUNC_2(struct wahc *VAR_2)
{
 VAR_2->rpipes = VAR_2->wa_descr->wNumRPipes;
 VAR_2->rpipe_bm = FUNC_1(FUNC_0(VAR_2->rpipes)*sizeof(unsigned long),
          VAR_1);
 if (VAR_2->rpipe_bm == ((void*)0))
  return -VAR_0;
 return 0;
}
