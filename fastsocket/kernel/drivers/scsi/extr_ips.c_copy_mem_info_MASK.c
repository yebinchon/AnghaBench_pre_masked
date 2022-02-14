
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pos; scalar_t__ offset; scalar_t__ localpos; scalar_t__ length; int buffer; } ;
typedef TYPE_1__ IPS_INFOSTR ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static void
FUNC_2(IPS_INFOSTR * VAR_0, char *VAR_1, int VAR_2)
{
 FUNC_0("copy_mem_info", 1);

 if (VAR_0->pos + VAR_2 < VAR_0->offset) {
  VAR_0->pos += VAR_2;
  return;
 }

 if (VAR_0->pos < VAR_0->offset) {
  VAR_1 += (VAR_0->offset - VAR_0->pos);
  VAR_2 -= (VAR_0->offset - VAR_0->pos);
  VAR_0->pos += (VAR_0->offset - VAR_0->pos);
 }

 if (VAR_0->localpos + VAR_2 > VAR_0->length)
  VAR_2 = VAR_0->length - VAR_0->localpos;

 if (VAR_2 > 0) {
  FUNC_1(VAR_0->buffer + VAR_0->localpos, VAR_1, VAR_2);
  VAR_0->pos += VAR_2;
  VAR_0->localpos += VAR_2;
 }
}
