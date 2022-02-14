
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_9__ {scalar_t__ state; int deadline_at; int created_at; int delay; int ttr; int kick_ct; int bury_ct; int release_ct; int timeout_ct; int reserve_ct; int pri; int id; } ;
struct TYPE_10__ {TYPE_3__ r; TYPE_2__* tube; TYPE_1__* file; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {int seq; } ;
typedef TYPE_4__ Job ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,size_t,char*,int ,int ,int ,int ,int,int,int,int,int,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(char *VAR_3, size_t VAR_4, Job *VAR_5)
{
    int64 VAR_6;
    int64 VAR_7;
    int VAR_8 = 0;

    VAR_6 = FUNC_1();
    if (VAR_5->r.state == VAR_1 || VAR_5->r.state == VAR_0) {
        VAR_7 = (VAR_5->r.deadline_at - VAR_6) / 1000000000;
    } else {
        VAR_7 = 0;
    }
    if (VAR_5->file) {
        VAR_8 = VAR_5->file->seq;
    }
    return FUNC_2(VAR_3, VAR_4, VAR_2,
            VAR_5->r.id,
            VAR_5->tube->name,
            FUNC_0(VAR_5),
            VAR_5->r.pri,
            (VAR_6 - VAR_5->r.created_at) / 1000000000,
            VAR_5->r.delay / 1000000000,
            VAR_5->r.ttr / 1000000000,
            VAR_7,
            VAR_8,
            VAR_5->r.reserve_ct,
            VAR_5->r.timeout_ct,
            VAR_5->r.release_ct,
            VAR_5->r.bury_ct,
            VAR_5->r.kick_ct);
}
