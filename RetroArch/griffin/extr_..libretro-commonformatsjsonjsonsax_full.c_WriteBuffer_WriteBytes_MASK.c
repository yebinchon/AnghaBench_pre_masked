
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int byte ;
typedef TYPE_1__* WriteBuffer ;
struct TYPE_4__ {size_t used; int * bytes; } ;
typedef int JSON_Writer ;
typedef int JSON_Status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int const*,size_t) ;

__attribute__((used)) static JSON_Status FUNC_2(WriteBuffer VAR_2, JSON_Writer VAR_3, const byte* VAR_4, size_t VAR_5)
{
   if (VAR_2->used + VAR_5 > sizeof(VAR_2->bytes) &&
         !FUNC_0(VAR_2, VAR_3))
      return VAR_0;

   FUNC_1(&VAR_2->bytes[VAR_2->used], VAR_4, VAR_5);
   VAR_2->used += VAR_5;
   return VAR_1;
}
