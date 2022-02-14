
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsxxxaa {int count; scalar_t__ buf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1 (struct vsxxxaa *VAR_1, int VAR_2)
{
 if (VAR_2 >= VAR_1->count)
  VAR_1->count = 0;
 else {
  FUNC_0 (VAR_1->buf, VAR_1->buf + VAR_2 - 1, VAR_0 - VAR_2);
  VAR_1->count -= VAR_2;
 }
}
