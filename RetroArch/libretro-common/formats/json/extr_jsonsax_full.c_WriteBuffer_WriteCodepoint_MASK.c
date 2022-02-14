
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* WriteBuffer ;
struct TYPE_8__ {int outputEncoding; } ;
struct TYPE_7__ {int used; int * bytes; } ;
typedef TYPE_2__* JSON_Writer ;
typedef int JSON_Status ;
typedef int Codepoint ;


 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static JSON_Status FUNC_2(WriteBuffer VAR_3, JSON_Writer VAR_4, Codepoint VAR_5)
{
   if (VAR_3->used + VAR_2 > sizeof(VAR_3->bytes) &&
         !FUNC_1(VAR_3, VAR_4))
      return VAR_0;

   VAR_3->used += FUNC_0(VAR_5, VAR_4->outputEncoding, &VAR_3->bytes[VAR_3->used]);
   return VAR_1;
}
