
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_size; } ;
struct TYPE_2__ {int loading; int loading_total_bytes; int loading_start_time; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct stat*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int *) ;

void FUNC_3(FILE *VAR_1) {
    struct stat VAR_2;


    VAR_0.loading = 1;
    VAR_0.loading_start_time = FUNC_2(((void*)0));
    if (FUNC_1(FUNC_0(VAR_1), &VAR_2) == -1) {
        VAR_0.loading_total_bytes = 1;
    } else {
        VAR_0.loading_total_bytes = VAR_2.st_size;
    }
}
