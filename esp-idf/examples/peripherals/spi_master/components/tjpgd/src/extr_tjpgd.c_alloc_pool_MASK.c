
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int sz_pool; void* pool; } ;
typedef TYPE_1__ JDEC ;



__attribute__((used)) static void* FUNC_0 (
 JDEC* VAR_0,
 uint16_t VAR_1
)
{
 char *VAR_2 = 0;


 VAR_1 = (VAR_1 + 3) & ~3;

 if (VAR_0->sz_pool >= VAR_1) {
  VAR_0->sz_pool -= VAR_1;
  VAR_2 = (char*)VAR_0->pool;
  VAR_0->pool = (void*)(VAR_2 + VAR_1);
 }

 return (void*)VAR_2;
}
