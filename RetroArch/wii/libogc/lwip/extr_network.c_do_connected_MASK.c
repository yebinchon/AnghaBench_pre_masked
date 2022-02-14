
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_pcb {int dummy; } ;
struct netconn {scalar_t__ type; int mbox; scalar_t__ err; } ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct netconn*) ;

__attribute__((used)) static err_t FUNC_2(void *VAR_4,struct tcp_pcb *VAR_5,err_t VAR_6)
{
 u32 VAR_7 = 0;
 struct netconn *VAR_8 = (struct netconn*)VAR_4;

 if(!VAR_8) return VAR_1;

 VAR_8->err = VAR_6;
 if(VAR_8->type==VAR_3 && VAR_6==VAR_0) FUNC_1(VAR_8);

 FUNC_0(VAR_8->mbox,&VAR_7,VAR_2);
 return VAR_0;
}
