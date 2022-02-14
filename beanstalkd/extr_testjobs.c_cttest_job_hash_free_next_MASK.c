
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_4__ {struct TYPE_4__* ht_next; } ;
typedef TYPE_1__ Job ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,int ,int,int ,int ,int) ;
 int FUNC_4 (char*) ;

void
FUNC_5()
{
    Job *VAR_1, *VAR_2;
    uint64 VAR_3 = 97, VAR_4 = 12386;

    FUNC_0(VAR_0, FUNC_4("default"));
    VAR_2 = FUNC_3(0, 0, 1, 0, VAR_0, VAR_4);
    VAR_1 = FUNC_3(0, 0, 1, 0, VAR_0, VAR_3);

    FUNC_1(VAR_1->ht_next == VAR_2, "b should be chained to a");

    FUNC_2(VAR_2);

    FUNC_1(VAR_1->ht_next == ((void*)0), "job should be missing");
}
