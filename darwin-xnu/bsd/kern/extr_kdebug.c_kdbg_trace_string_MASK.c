
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {char* p_comm; } ;
typedef int dbg_parms ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;

void
FUNC_2(struct proc *VAR_0, long *VAR_1, long *VAR_2, long *VAR_3, long *VAR_4)
{
 char *VAR_5;
 int VAR_6;
 long VAR_7[4];

 if (!VAR_0) {
  *VAR_1 = 0;
  *VAR_2 = 0;
  *VAR_3 = 0;
  *VAR_4 = 0;
  return;
 }



 VAR_5 = VAR_0->p_comm;
 VAR_6 = (int)FUNC_0(VAR_0->p_comm);
 VAR_7[0]=0L;
 VAR_7[1]=0L;
 VAR_7[2]=0L;
 VAR_7[3]=0L;

 if(VAR_6 > (int)sizeof(VAR_7))
  VAR_6 = (int)sizeof(VAR_7);

 FUNC_1((char *)VAR_7, VAR_5, VAR_6);

 *VAR_1=VAR_7[0];
 *VAR_2=VAR_7[1];
 *VAR_3=VAR_7[2];
 *VAR_4=VAR_7[3];
}
