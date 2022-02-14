
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int maxSize; int ** values; void** keywords; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (char const*) ;

void
FUNC_4(const char *VAR_3, const char *VAR_4)
{
 if (VAR_0.size + 1 >= VAR_0.maxSize)
 {

  FUNC_0(VAR_2, (FUNC_1(VAR_1),
      FUNC_2("ConnParams arrays bound check failed")));
 }

 VAR_0.keywords[VAR_0.size] = FUNC_3(VAR_3);
 VAR_0.values[VAR_0.size] = FUNC_3(VAR_4);
 VAR_0.size++;

 VAR_0.keywords[VAR_0.size] = VAR_0.values[VAR_0.size] = ((void*)0);
}
