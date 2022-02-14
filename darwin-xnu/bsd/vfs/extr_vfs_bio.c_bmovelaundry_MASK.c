
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* buf_t ;
struct TYPE_4__ {size_t b_whichq; int b_timestamp; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,size_t) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int * VAR_2 ;

__attribute__((used)) static __inline__ void
FUNC_2(buf_t VAR_3)
{
 VAR_3->b_whichq = VAR_0;
 VAR_3->b_timestamp = FUNC_1();
 FUNC_0(VAR_3, &VAR_2[VAR_0], VAR_0);
 VAR_1++;
}
