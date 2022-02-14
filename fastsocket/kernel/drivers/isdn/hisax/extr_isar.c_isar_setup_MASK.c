
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct IsdnCardState {TYPE_3__* bcs; } ;
struct TYPE_4__ {int mml; int dpath; } ;
struct TYPE_5__ {TYPE_1__ isar; } ;
struct TYPE_6__ {int tqueue; TYPE_2__ hw; scalar_t__ mode; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (struct IsdnCardState*,int,int,int,int*) ;

__attribute__((used)) static void
FUNC_3(struct IsdnCardState *VAR_4)
{
 u_char VAR_5;
 int VAR_6;


 VAR_5 = 61;
 for (VAR_6=0; VAR_6<2; VAR_6++) {

  FUNC_2(VAR_4, (VAR_6 ? VAR_1 : VAR_0) |
   VAR_2, 4, 1, &VAR_5);
  VAR_4->bcs[VAR_6].hw.isar.mml = VAR_5;
  VAR_4->bcs[VAR_6].mode = 0;
  VAR_4->bcs[VAR_6].hw.isar.dpath = VAR_6 + 1;
  FUNC_1(&VAR_4->bcs[VAR_6], 0, 0);
  FUNC_0(&VAR_4->bcs[VAR_6].tqueue, VAR_3);
 }
}
