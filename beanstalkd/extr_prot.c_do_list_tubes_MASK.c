
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char* name; } ;
typedef TYPE_2__ Tube ;
struct TYPE_10__ {int state; } ;
struct TYPE_14__ {char* body; TYPE_1__ r; } ;
struct TYPE_13__ {scalar_t__ out_job_sent; TYPE_9__* out_job; } ;
struct TYPE_12__ {size_t len; TYPE_2__** items; } ;
typedef TYPE_3__ Ms ;
typedef TYPE_4__ Conn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_9__* FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_4__*,int ,char*,size_t) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (char*,int,char*,...) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(Conn *VAR_3, Ms *VAR_4)
{
    char *VAR_5;
    Tube *VAR_6;
    size_t VAR_7, VAR_8;


    VAR_8 = 6;
    for (VAR_7 = 0; VAR_7 < VAR_4->len; VAR_7++) {
        VAR_6 = VAR_4->items[VAR_7];
        VAR_8 += 3 + FUNC_4(VAR_6->name);
    }

    VAR_3->out_job = FUNC_0(VAR_8);
    if (!VAR_3->out_job) {
        FUNC_2(VAR_3, VAR_1);
        return;
    }


    VAR_3->out_job->r.state = VAR_0;


    VAR_5 = VAR_3->out_job->body;
    VAR_5 += FUNC_3(VAR_5, 5, "---\n");
    for (VAR_7 = 0; VAR_7 < VAR_4->len; VAR_7++) {
        VAR_6 = VAR_4->items[VAR_7];
        VAR_5 += FUNC_3(VAR_5, 4 + FUNC_4(VAR_6->name), "- %s\n", VAR_6->name);
    }
    VAR_5[0] = '\r';
    VAR_5[1] = '\n';

    VAR_3->out_job_sent = 0;
    FUNC_1(VAR_3, VAR_2, "OK %zu\r\n", VAR_8 - 2);
}
