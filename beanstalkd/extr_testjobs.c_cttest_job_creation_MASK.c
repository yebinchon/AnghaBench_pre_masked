
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pri; } ;
struct TYPE_5__ {TYPE_1__ r; } ;
typedef TYPE_2__ Job ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (int,int ,int,int ,int ) ;
 int FUNC_3 (char*) ;

void
FUNC_4()
{
    Job *VAR_1;

    FUNC_0(VAR_0, FUNC_3("default"));
    VAR_1 = FUNC_2(1, 0, 1, 0, VAR_0);
    FUNC_1(VAR_1->r.pri == 1, "priority should match");
}
