
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ yyidx; } ;
typedef TYPE_1__ yyParser ;
typedef int YYMINORTYPE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(yyParser *VAR_5, YYMINORTYPE *VAR_6){
   VAR_1;
   VAR_5->yyidx--;

   if( VAR_3 ){
     FUNC_1(VAR_3,"%sStack Overflow!\n",VAR_4);
   }

   while( VAR_5->yyidx>=0 ) FUNC_3(VAR_5);



  FUNC_0(VAR_6);
  FUNC_2(VAR_0, "parser stack overflow");
   VAR_2;
}
