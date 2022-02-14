
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int Udp; int lock; } ;
typedef TYPE_1__ SLOG ;
typedef int IP ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 TYPE_1__* FUNC_3 (int) ;

SLOG *FUNC_4(char *VAR_0, UINT VAR_1, IP *VAR_2)
{

 SLOG *VAR_3 = FUNC_3(sizeof(SLOG));

 VAR_3->lock = FUNC_0();
 VAR_3->Udp = FUNC_1(0, 0, VAR_2);

 FUNC_2(VAR_3, VAR_0, VAR_1);

 return VAR_3;
}
