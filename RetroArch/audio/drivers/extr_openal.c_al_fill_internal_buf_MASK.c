
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tmpbuf_ptr; scalar_t__ tmpbuf; } ;
typedef TYPE_1__ al_t ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (scalar_t__,size_t) ;
 int FUNC_1 (scalar_t__,void const*,size_t) ;

__attribute__((used)) static size_t FUNC_2(al_t *VAR_1, const void *VAR_2, size_t VAR_3)
{
   size_t VAR_4 = FUNC_0(VAR_0 - VAR_1->tmpbuf_ptr, VAR_3);
   FUNC_1(VAR_1->tmpbuf + VAR_1->tmpbuf_ptr, VAR_2, VAR_4);
   VAR_1->tmpbuf_ptr += VAR_4;
   return VAR_4;
}
