
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int level; scalar_t__ buf_size; } ;


 int FUNC_0 (TYPE_1__*,int,void*,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(int VAR_1, void *VAR_2, int VAR_3)
{
 if (VAR_1 > VAR_0->level)
  return;
 while (VAR_3 > 0) {
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  VAR_3 -= VAR_0->buf_size;
  VAR_2 += VAR_0->buf_size;
 }
}
