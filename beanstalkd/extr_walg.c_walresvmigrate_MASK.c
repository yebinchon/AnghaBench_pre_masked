
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int Wal ;
struct TYPE_6__ {scalar_t__ body_size; } ;
struct TYPE_7__ {TYPE_2__ r; TYPE_1__* tube; } ;
struct TYPE_5__ {int name; } ;
typedef int Jobrec ;
typedef TYPE_3__ Job ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(Wal *VAR_0, Job *VAR_1)
{
    int VAR_2 = 0;



    VAR_2 += sizeof(int);
    VAR_2 += FUNC_1(VAR_1->tube->name);
    VAR_2 += sizeof(Jobrec);
    VAR_2 += VAR_1->r.body_size;

    return FUNC_0(VAR_0, VAR_2);
}
