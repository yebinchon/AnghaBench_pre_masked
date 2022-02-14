
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct airq_t {int dummy; } ;
typedef int dbf_txt ;
typedef int addr_t ;
struct TYPE_2__ {scalar_t__* byte; } ;


 int FUNC_0 (int,char*) ;
 int ** VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct airq_t*) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 () ;
 struct airq_t* FUNC_4 (int *,int *) ;

void FUNC_5(void *VAR_2, u8 VAR_3)
{
 struct airq_t *VAR_4;
 char VAR_5[16];
 int VAR_6;

 VAR_6 = (int) ((addr_t) VAR_2) - ((addr_t) &VAR_1[VAR_3].byte[0]);
 FUNC_2(VAR_5, sizeof(VAR_5), "urairq:%d", VAR_6);
 FUNC_0(4, VAR_5);
 VAR_1[VAR_3].byte[VAR_6] = 0;
 VAR_4 = FUNC_4(&VAR_0[VAR_3][VAR_6], ((void*)0));




 FUNC_3();
 FUNC_1(VAR_4);
}
