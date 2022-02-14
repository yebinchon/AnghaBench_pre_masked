
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int byte ;
struct TYPE_5__ {scalar_t__ error; int outputEncoding; int state; } ;
typedef int Symbol ;
typedef TYPE_1__* JSON_Writer ;
typedef int JSON_Status ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int const* const,size_t) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static JSON_Status FUNC_6(JSON_Writer VAR_6, Symbol VAR_7, const byte* const* VAR_8, size_t VAR_9)
{
   JSON_Status VAR_10 = VAR_1;
   if (VAR_6 && !FUNC_0(VAR_6->state, VAR_3) && VAR_6->error == VAR_0)
   {
      size_t VAR_11 = VAR_9 * (size_t)FUNC_5(VAR_6->outputEncoding);
      FUNC_4(VAR_5, VAR_6->state, VAR_4 | VAR_3);
      if (FUNC_2(VAR_6, VAR_7) &&
            FUNC_1(VAR_6, VAR_8[VAR_6->outputEncoding - 1], VAR_11))
         VAR_10 = VAR_2;
      FUNC_3(VAR_5, VAR_6->state, VAR_3);
   }
   return VAR_10;
}
