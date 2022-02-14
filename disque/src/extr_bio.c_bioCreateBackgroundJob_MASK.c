
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_job {void* arg3; void* arg2; void* arg1; int time; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ,struct bio_job*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct bio_job* FUNC_5 (int) ;

void FUNC_6(int VAR_4, void *VAR_5, void *VAR_6, void *VAR_7) {
    struct bio_job *VAR_8 = FUNC_5(sizeof(*VAR_8));

    VAR_8->time = FUNC_4(((void*)0));
    VAR_8->arg1 = VAR_5;
    VAR_8->arg2 = VAR_6;
    VAR_8->arg3 = VAR_7;
    FUNC_2(&VAR_1[VAR_4]);
    FUNC_0(VAR_0[VAR_4],VAR_8);
    VAR_3[VAR_4]++;
    FUNC_1(&VAR_2[VAR_4]);
    FUNC_3(&VAR_1[VAR_4]);
}
