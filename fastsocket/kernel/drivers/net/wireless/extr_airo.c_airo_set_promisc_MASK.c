
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct airo_info {int flags; int sem; int jobs; } ;
typedef int cmd ;
struct TYPE_4__ {int parm0; int cmd; } ;
typedef int Resp ;
typedef TYPE_1__ Cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct airo_info*,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct airo_info *VAR_5) {
 Cmd VAR_6;
 Resp VAR_7;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.cmd=VAR_0;
 FUNC_0(VAR_2, &VAR_5->jobs);
 VAR_6.parm0=(VAR_5->flags&VAR_1) ? VAR_4 : VAR_3;
 FUNC_1(VAR_5, &VAR_6, &VAR_7);
 FUNC_3(&VAR_5->sem);
}
