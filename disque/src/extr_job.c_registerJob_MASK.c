
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
typedef TYPE_1__ job ;
struct TYPE_6__ {int jobs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *) ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ) ;

int FUNC_2(job *VAR_4) {
    int VAR_5 = FUNC_0(VAR_3.jobs, VAR_4->id, ((void*)0));
    if (VAR_5 == VAR_2) return VAR_0;

    FUNC_1(VAR_4,0);
    return VAR_1;
}
