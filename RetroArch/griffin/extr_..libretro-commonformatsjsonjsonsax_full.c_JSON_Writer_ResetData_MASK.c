
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int * outputHandler; int grammarianData; int error; int outputEncoding; int flags; int * userData; } ;
typedef TYPE_1__* JSON_Writer ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(JSON_Writer VAR_4, int VAR_5)
{
   VAR_4->userData = ((void*)0);
   VAR_4->flags = VAR_2;
   VAR_4->outputEncoding = VAR_1;
   VAR_4->error = VAR_0;
   FUNC_0(&VAR_4->grammarianData, VAR_5);
   VAR_4->outputHandler = ((void*)0);
   VAR_4->state = VAR_3;
}
