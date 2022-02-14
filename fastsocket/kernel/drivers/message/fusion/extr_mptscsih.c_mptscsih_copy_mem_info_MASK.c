
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info_str {scalar_t__ pos; scalar_t__ length; scalar_t__ offset; scalar_t__ buffer; } ;


 int FUNC_0 (scalar_t__,char*,int) ;

__attribute__((used)) static void
FUNC_1(struct info_str *VAR_0, char *VAR_1, int VAR_2)
{
 if (VAR_0->pos + VAR_2 > VAR_0->length)
  VAR_2 = VAR_0->length - VAR_0->pos;

 if (VAR_0->pos + VAR_2 < VAR_0->offset) {
  VAR_0->pos += VAR_2;
  return;
 }

 if (VAR_0->pos < VAR_0->offset) {
         VAR_1 += (VAR_0->offset - VAR_0->pos);
         VAR_2 -= (VAR_0->offset - VAR_0->pos);
 }

 if (VAR_2 > 0) {
                FUNC_0(VAR_0->buffer + VAR_0->pos, VAR_1, VAR_2);
                VAR_0->pos += VAR_2;
 }
}
