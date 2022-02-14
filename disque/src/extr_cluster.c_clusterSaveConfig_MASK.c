
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ sds ;
typedef scalar_t__ off_t ;
struct TYPE_4__ {TYPE_1__* cluster; int cluster_configfile; } ;
struct TYPE_3__ {int todo_before_sleep; scalar_t__ lastVoteEpoch; scalar_t__ currentEpoch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,struct stat*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,size_t) ;
 int FUNC_5 (scalar_t__,char,scalar_t__) ;
 int FUNC_6 (int ,int,int) ;
 scalar_t__ FUNC_7 (scalar_t__,char*,unsigned long long,unsigned long long) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 size_t FUNC_10 (scalar_t__) ;
 TYPE_2__ VAR_5 ;
 scalar_t__ FUNC_11 (int,scalar_t__,size_t) ;

int FUNC_12(int VAR_6) {
    sds VAR_7;
    size_t VAR_8;
    struct stat VAR_9;
    int VAR_10;

    VAR_5.cluster->todo_before_sleep &= ~VAR_2;



    VAR_7 = FUNC_1(VAR_0);





    VAR_8 = FUNC_10(VAR_7);

    if ((VAR_10 = FUNC_6(VAR_5.cluster_configfile,VAR_4|VAR_3,0644))
        == -1) goto err;


    if (FUNC_2(VAR_10,&VAR_9) != -1) {
        if (VAR_9.st_size > (off_t)VAR_8) {
            VAR_7 = FUNC_9(VAR_7,VAR_9.st_size);
            FUNC_5(VAR_7+VAR_8,'\n',VAR_9.st_size-VAR_8);
        }
    }
    if (FUNC_11(VAR_10,VAR_7,FUNC_10(VAR_7)) != (ssize_t)FUNC_10(VAR_7)) goto err;
    if (VAR_6) {
        VAR_5.cluster->todo_before_sleep &= ~VAR_1;
        FUNC_3(VAR_10);
    }



    if (VAR_8 != FUNC_10(VAR_7) && FUNC_4(VAR_10,VAR_8) == -1) {

    }
    FUNC_0(VAR_10);
    FUNC_8(VAR_7);
    return 0;

err:
    if (VAR_10 != -1) FUNC_0(VAR_10);
    FUNC_8(VAR_7);
    return -1;
}
