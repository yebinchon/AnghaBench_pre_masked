
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ucText; int ulErrSubtype; int ulErrType; } ;
typedef TYPE_1__ tErrLogEntry ;
typedef int hysdn_card ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,char*,int ,int ,int ) ;

void
FUNC_2(hysdn_card * VAR_1, tErrLogEntry * VAR_2, int VAR_3)
{
 char VAR_4[VAR_0 + 40];

 FUNC_1(VAR_4, "LOG 0x%08lX 0x%08lX : %s\n", VAR_2->ulErrType, VAR_2->ulErrSubtype, VAR_2->ucText);
 FUNC_0(VAR_1, VAR_4);
}
