
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int intfstream_t ;
struct TYPE_6__ {int size; int * data; } ;
struct TYPE_5__ {int writable; TYPE_2__ buf; } ;
struct TYPE_7__ {TYPE_1__ memory; int type; } ;
typedef TYPE_3__ intfstream_info_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int *,unsigned int,unsigned int) ;

intfstream_t *FUNC_4(void *VAR_1,
      unsigned VAR_2, unsigned VAR_3, uint64_t VAR_4)
{
   intfstream_info_t VAR_5;
   intfstream_t *VAR_6 = ((void*)0);

   VAR_5.type = VAR_0;
   VAR_5.memory.buf.data = (uint8_t*)VAR_1;
   VAR_5.memory.buf.size = VAR_4;
   VAR_5.memory.writable = 0;

   VAR_6 = (intfstream_t*)FUNC_2(&VAR_5);
   if (!VAR_6)
      return ((void*)0);

   if (!FUNC_3(VAR_6, ((void*)0), VAR_2, VAR_3))
      goto error;

   return VAR_6;

error:
   if (VAR_6)
   {
      FUNC_1(VAR_6);
      FUNC_0(VAR_6);
   }
   return ((void*)0);
}
