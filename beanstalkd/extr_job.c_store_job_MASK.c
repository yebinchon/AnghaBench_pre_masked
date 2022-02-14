
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
struct TYPE_6__ {struct TYPE_6__* ht_next; TYPE_1__ r; } ;
typedef TYPE_2__ Job ;


 int FUNC_0 (int ) ;
 TYPE_2__** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(Job *VAR_3)
{
    int VAR_4 = 0;

    VAR_4 = FUNC_0(VAR_3->r.id);

    VAR_3->ht_next = VAR_0[VAR_4];
    VAR_0[VAR_4] = VAR_3;
    VAR_2++;


    if (VAR_2 > (VAR_1 << 2)) FUNC_1(1);
}
