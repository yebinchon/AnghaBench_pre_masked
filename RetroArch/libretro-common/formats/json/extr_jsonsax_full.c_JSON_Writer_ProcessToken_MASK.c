
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int memorySuite; int grammarianData; } ;
typedef int Symbol ;
typedef TYPE_1__* JSON_Writer ;
typedef int JSON_Status ;
typedef int GrammarianOutput ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ) ;



__attribute__((used)) static JSON_Status FUNC_3(JSON_Writer VAR_4, Symbol VAR_5)
{
   GrammarianOutput VAR_6 = FUNC_1(&VAR_4->grammarianData, VAR_5, &VAR_4->memorySuite);
   switch (FUNC_0(VAR_6))
   {
      case 129:
         FUNC_2(VAR_4, VAR_1);
         return VAR_2;

      case 128:
         FUNC_2(VAR_4, VAR_0);
         return VAR_2;
   }
   return VAR_3;
}
