
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_3__ {int SRR0; int * GPR; int EXCPT_Number; } ;
typedef TYPE_1__ frame_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 char* FUNC_3 (char*,char*,int) ;
 char* VAR_2 ;
 char* FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5(frame_context *VAR_3,s32 VAR_4)
{
 s32 VAR_5;
 char *VAR_6;

 VAR_6 = VAR_2;
 VAR_5 = FUNC_0(VAR_3->EXCPT_Number);
 *VAR_6++ = 'T';
 *VAR_6++ = FUNC_1(VAR_5);
 *VAR_6++ = FUNC_2(VAR_5);
 *VAR_6++ = FUNC_1(VAR_1);
 *VAR_6++ = FUNC_2(VAR_1);
 *VAR_6++ = ':';
 VAR_6 = FUNC_3(VAR_6,(char*)&VAR_3->GPR[1],4);
 *VAR_6++ = ';';
 *VAR_6++ = FUNC_1(VAR_0);
 *VAR_6++ = FUNC_2(VAR_0);
 *VAR_6++ = ':';
 VAR_6 = FUNC_3(VAR_6,(char*)&VAR_3->SRR0,4);
 *VAR_6++ = ';';

 *VAR_6++ = 't';
 *VAR_6++ = 'h';
 *VAR_6++ = 'r';
 *VAR_6++ = 'e';
 *VAR_6++ = 'a';
 *VAR_6++ = 'd';
 *VAR_6++ = ':';
 VAR_6 = FUNC_4(VAR_6,VAR_4);
 *VAR_6++ = ';';

 *VAR_6++ = '\0';

}
