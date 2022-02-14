
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int LineNumber; } ;
typedef int IPTABLES_STATE ;
typedef TYPE_1__ IPTABLES_ENTRY ;
typedef int IP ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 TYPE_1__* FUNC_2 (int *,char*,int *,int *,int ) ;

UINT FUNC_3(char *VAR_0, IP *VAR_1, IP *VAR_2, UINT VAR_3)
{
 IPTABLES_STATE *VAR_4;
 IPTABLES_ENTRY *VAR_5;
 UINT VAR_6 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0)
 {
  return 0;
 }

 VAR_4 = FUNC_1();

 VAR_5 = FUNC_2(VAR_4, VAR_0, VAR_1, VAR_2, VAR_3);

 if (VAR_5 != ((void*)0))
 {
  VAR_6 = VAR_5->LineNumber;
 }

 FUNC_0(VAR_4);

 return VAR_6;
}
