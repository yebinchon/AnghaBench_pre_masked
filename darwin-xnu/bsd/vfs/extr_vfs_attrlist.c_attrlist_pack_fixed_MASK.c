
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _attrlist_buf {scalar_t__ fixedcursor; scalar_t__ base; scalar_t__ allocated; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (void*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3(struct _attrlist_buf *VAR_0, void *VAR_1, ssize_t VAR_2)
{




 ssize_t VAR_3;
 VAR_3 = FUNC_1(VAR_2, VAR_0->allocated - (VAR_0->fixedcursor - VAR_0->base));
 if (VAR_3 > 0) {

  FUNC_0(VAR_1, VAR_0->fixedcursor, VAR_3);
 }


 VAR_0->fixedcursor += FUNC_2(VAR_2, 4);
}
