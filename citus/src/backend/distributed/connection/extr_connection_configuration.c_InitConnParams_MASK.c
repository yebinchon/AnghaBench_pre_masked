
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int maxSize; int values; int keywords; int size; } ;
typedef int Size ;
typedef TYPE_1__ ConnParamsInfo ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;

void
FUNC_3()
{
 Size VAR_1 = FUNC_0();
 ConnParamsInfo VAR_2 = {
  .keywords = FUNC_1(VAR_1 * sizeof(char *)),
  .values = FUNC_1(VAR_1 * sizeof(char *)),
  .size = 0,
  .maxSize = VAR_1
 };

 FUNC_2(VAR_2.keywords, 0, VAR_1 * sizeof(char *));
 FUNC_2(VAR_2.values, 0, VAR_1 * sizeof(char *));

 VAR_0 = VAR_2;
}
