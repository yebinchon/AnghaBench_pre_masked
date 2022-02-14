
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_8__ {int pause_ct; int total_delete_ct; int waiting_ct; int total_jobs_ct; int buried_ct; int reserved_ct; int urgent_ct; } ;
struct TYPE_7__ {int len; } ;
struct TYPE_6__ {int len; } ;
struct TYPE_9__ {int pause; int unpause_at; TYPE_3__ stat; int watching_ct; int using_ct; TYPE_2__ delay; TYPE_1__ ready; int name; } ;
typedef TYPE_4__ Tube ;


 char* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,size_t,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_1, size_t VAR_2, Tube *VAR_3)
{
    uint64 VAR_4;

    if (VAR_3->pause > 0) {
        VAR_4 = (VAR_3->unpause_at - FUNC_0()) / 1000000000;
    } else {
        VAR_4 = 0;
    }
    return FUNC_1(VAR_1, VAR_2, VAR_0,
            VAR_3->name,
            VAR_3->stat.urgent_ct,
            VAR_3->ready.len,
            VAR_3->stat.reserved_ct,
            VAR_3->delay.len,
            VAR_3->stat.buried_ct,
            VAR_3->stat.total_jobs_ct,
            VAR_3->using_ct,
            VAR_3->watching_ct,
            VAR_3->stat.waiting_ct,
            VAR_3->stat.total_delete_ct,
            VAR_3->stat.pause_ct,
            VAR_3->pause / 1000000000,
            VAR_4);
}
