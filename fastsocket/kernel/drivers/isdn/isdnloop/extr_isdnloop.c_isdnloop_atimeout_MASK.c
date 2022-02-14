
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* rch; int isdnloop_lock; struct TYPE_5__** rcard; } ;
typedef TYPE_1__ isdnloop_card ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 char* FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_5(isdnloop_card * VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 char VAR_3[60];

 FUNC_2(&VAR_0->isdnloop_lock, VAR_2);
 if (VAR_0->rcard) {
  FUNC_0(VAR_0->rcard[VAR_1], "DDIS_I", VAR_0->rch[VAR_1] + 1);
  VAR_0->rcard[VAR_1]->rcard[VAR_0->rch[VAR_1]] = ((void*)0);
  VAR_0->rcard[VAR_1] = ((void*)0);
 }
 FUNC_0(VAR_0, "DDIS_I", VAR_1 + 1);

 FUNC_4(VAR_3, "CAU%s", FUNC_1(VAR_0, 1, 3));
 FUNC_0(VAR_0, VAR_3, VAR_1 + 1);
 FUNC_3(&VAR_0->isdnloop_lock, VAR_2);
}
