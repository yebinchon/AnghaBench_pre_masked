
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_deliv; int num_nacks; int body; int id; int queue; } ;
typedef TYPE_1__ job ;
typedef int client ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ) ;

void FUNC_6(client *VAR_2, job *VAR_3, int VAR_4) {
    int VAR_5 = 3;

    if (VAR_4 & VAR_0) VAR_5 += 4;
    FUNC_4(VAR_2,VAR_5);

    FUNC_0(VAR_2,VAR_3->queue);
    FUNC_1(VAR_2,VAR_3->id,VAR_1);
    FUNC_1(VAR_2,VAR_3->body,FUNC_5(VAR_3->body));

    if (VAR_4 & VAR_0) {
        FUNC_2(VAR_2,"nacks");
        FUNC_3(VAR_2,VAR_3->num_nacks);

        FUNC_2(VAR_2,"additional-deliveries");
        FUNC_3(VAR_2,VAR_3->num_deliv);
    }
}
