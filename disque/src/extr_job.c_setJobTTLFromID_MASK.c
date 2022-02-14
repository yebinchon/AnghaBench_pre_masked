
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ etime; int id; } ;
typedef TYPE_1__ job ;
struct TYPE_5__ {scalar_t__ unixtime; } ;


 int FUNC_0 (int ) ;
 TYPE_3__ VAR_0 ;

void FUNC_1(job *VAR_1) {
    int VAR_2 = FUNC_0(VAR_1->id);

    VAR_1->etime = VAR_0.unixtime + VAR_2*60;
}
