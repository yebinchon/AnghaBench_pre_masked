
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cx231xx {int video_input; int ctl_ainput; } ;
struct TYPE_2__ {int vmux; int amux; } ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (struct cx231xx*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct cx231xx*,int ) ;
 int FUNC_4 (struct cx231xx*,int) ;
 int FUNC_5 (struct cx231xx*,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_6(struct cx231xx *VAR_2, int VAR_3)
{
 VAR_2->video_input = VAR_3;
 VAR_2->ctl_ainput = FUNC_0(VAR_3)->amux;

 FUNC_4(VAR_2, VAR_3);

 FUNC_5(VAR_2, VAR_1, VAR_0, FUNC_0(VAR_3)->vmux, 0, 0);

 FUNC_3(VAR_2, VAR_2->ctl_ainput);

 FUNC_2("video_mux : %d\n", VAR_3);


 FUNC_1(VAR_2);
}
