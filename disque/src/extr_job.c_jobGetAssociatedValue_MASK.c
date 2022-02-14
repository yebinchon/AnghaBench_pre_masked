
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dictEntry {int dummy; } ;
struct TYPE_4__ {int id; } ;
typedef TYPE_1__ job ;
struct TYPE_5__ {int jobs; } ;


 struct dictEntry* FUNC_0 (int ,int ) ;
 void* FUNC_1 (struct dictEntry*) ;
 TYPE_2__ VAR_0 ;

void *FUNC_2(job *VAR_1) {
    struct dictEntry *VAR_2 = FUNC_0(VAR_0.jobs, VAR_1->id);
    return VAR_2 ? FUNC_1(VAR_2) : ((void*)0);
}
