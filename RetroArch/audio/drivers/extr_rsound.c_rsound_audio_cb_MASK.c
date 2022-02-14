
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_2__ {int cond; int buffer; } ;
typedef TYPE_1__ rsd_t ;


 int FUNC_0 (int ,void*,size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(void *VAR_0, size_t VAR_1, void *VAR_2)
{
   rsd_t *VAR_3 = (rsd_t*)VAR_2;

   size_t VAR_4 = FUNC_1(VAR_3->buffer);
   size_t VAR_5 = VAR_1 > VAR_4 ? VAR_4 : VAR_1;
   FUNC_0(VAR_3->buffer, VAR_0, VAR_5);
   FUNC_2(VAR_3->cond);

   return VAR_5;
}
