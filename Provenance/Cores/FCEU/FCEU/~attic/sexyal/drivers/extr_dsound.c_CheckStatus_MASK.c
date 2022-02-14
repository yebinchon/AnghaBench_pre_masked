
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ppbufw; int wf; int ppbufsec; scalar_t__ ToWritePos; } ;
typedef int DWORD ;
typedef TYPE_1__ DSFobby ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(DSFobby *VAR_3)
{
 DWORD VAR_4=0;

 FUNC_0(VAR_3->ppbufw, &VAR_4);
 if(VAR_4&VAR_1)
  FUNC_2(VAR_3->ppbufw);

 if(!(VAR_4&VAR_2))
 {
  VAR_3->ToWritePos=0;
  FUNC_3(VAR_3->ppbufsec,0);
  FUNC_4(VAR_3->ppbufw,&VAR_3->wf);
  FUNC_1(VAR_3->ppbufw,0,0,VAR_0);
 }
}
