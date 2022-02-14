
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int buf ;
struct TYPE_4__ {int output; } ;
struct TYPE_3__ {int fd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int,char*,int) ;
 unsigned long long FUNC_4 (int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(void) {
    int VAR_5 = VAR_3->fd;
    unsigned long long VAR_6 = FUNC_4(VAR_5);
    char VAR_7[1024];
    int VAR_8 = VAR_2.output;

    FUNC_2(VAR_4,"SYNC with master, discarding %llu "
                   "bytes of bulk transfer...\n", VAR_6);


    while(VAR_6) {
        ssize_t VAR_9;

        VAR_9 = FUNC_3(VAR_5,VAR_7,(VAR_6 > sizeof(VAR_7)) ? sizeof(VAR_7) : VAR_6);
        if (VAR_9 <= 0) {
            FUNC_2(VAR_4,"Error reading RDB payload while SYNCing\n");
            FUNC_1(1);
        }
        VAR_6 -= VAR_9;
    }
    FUNC_2(VAR_4,"SYNC done. Logging commands from master.\n");


    VAR_2.output = VAR_0;
    while (FUNC_0(0) == VAR_1);
    VAR_2.output = VAR_8;
}
