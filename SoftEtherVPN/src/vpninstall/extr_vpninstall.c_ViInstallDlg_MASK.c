
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int d ;
struct TYPE_4__ {int BufSize; int Buf; } ;
typedef TYPE_1__ VI_INSTALL_DLG ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4()
{
 VI_INSTALL_DLG VAR_2;

 FUNC_3(&VAR_2, sizeof(VAR_2));

 VAR_2.BufSize = 65535;
 VAR_2.Buf = FUNC_2(VAR_2.BufSize);

 FUNC_0(((void*)0), VAR_0, VAR_1, &VAR_2);

 FUNC_1(VAR_2.Buf);
}
