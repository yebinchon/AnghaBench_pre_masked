
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_5__ {scalar_t__ in_job_read; char* reply; int reply_len; int state; scalar_t__ reply_sent; scalar_t__ in_job; } ;
typedef TYPE_1__ Conn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int,int ) ;

__attribute__((used)) static void
FUNC_2(Conn *VAR_2, int64 VAR_3, char *VAR_4, int VAR_5)
{


    VAR_2->in_job = 0;
    VAR_2->in_job_read = VAR_3;
    FUNC_0(VAR_2);

    if (VAR_2->in_job_read == 0) {
        FUNC_1(VAR_2, VAR_4, VAR_5, VAR_1);
        return;
    }

    VAR_2->reply = VAR_4;
    VAR_2->reply_len = VAR_5;
    VAR_2->reply_sent = 0;
    VAR_2->state = VAR_0;
}
