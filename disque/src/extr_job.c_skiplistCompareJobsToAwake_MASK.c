
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ awakeme; scalar_t__ ctime; int id; } ;
typedef TYPE_1__ job ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

int FUNC_1(const void *VAR_1, const void *VAR_2) {
    const job *VAR_3 = VAR_1, *VAR_4 = VAR_2;

    if (VAR_3->awakeme > VAR_4->awakeme) return 1;
    if (VAR_4->awakeme > VAR_3->awakeme) return -1;
    if (VAR_3->ctime > VAR_4->ctime) return 1;
    if (VAR_4->ctime > VAR_3->ctime) return -1;
    return FUNC_0(VAR_3->id,VAR_4->id,VAR_0);
}
