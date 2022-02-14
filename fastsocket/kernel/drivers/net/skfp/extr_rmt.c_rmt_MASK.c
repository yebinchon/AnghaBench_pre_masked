
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* m; } ;
struct s_smc {TYPE_1__ mib; } ;
struct TYPE_4__ {int fddiMACRMTState; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 size_t VAR_1 ;
 char** VAR_2 ;
 int FUNC_1 (struct s_smc*,int) ;
 int FUNC_2 (struct s_smc*,int) ;
 int * VAR_3 ;

void FUNC_3(struct s_smc *VAR_4, int VAR_5)
{
 int VAR_6 ;

 do {
  FUNC_0("RMT : state %s%s",
   (VAR_4->mib.m[VAR_1].fddiMACRMTState & VAR_0) ? "ACTIONS " : "",
   VAR_3[VAR_4->mib.m[VAR_1].fddiMACRMTState & ~VAR_0]) ;
  FUNC_0(" event %s\n",VAR_2[VAR_5],0) ;
  VAR_6 = VAR_4->mib.m[VAR_1].fddiMACRMTState ;
  FUNC_1(VAR_4,VAR_5) ;
  VAR_5 = 0 ;
 } while (VAR_6 != VAR_4->mib.m[VAR_1].fddiMACRMTState) ;
 FUNC_2(VAR_4,(int)VAR_4->mib.m[VAR_1].fddiMACRMTState) ;
}
