
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; void* ldt; } ;
typedef TYPE_1__ mm_context_t ;
struct TYPE_6__ {int mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (void*,void*,int) ;
 int FUNC_5 (void*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*,int) ;
 int FUNC_8 (void*,int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 () ;
 int FUNC_14 (void*) ;
 int FUNC_15 (void*) ;
 void* FUNC_16 (int) ;
 int FUNC_17 () ;

__attribute__((used)) static int FUNC_18(mm_context_t *VAR_6, int VAR_7, int VAR_8)
{
 void *VAR_9, *VAR_10;
 int VAR_11;

 if (VAR_7 <= VAR_6->size)
  return 0;
 VAR_11 = VAR_6->size;
 VAR_7 = (VAR_7 + (VAR_3 / VAR_2 - 1)) &
   (~(VAR_3 / VAR_2 - 1));
 if (VAR_7 * VAR_2 > VAR_3)
  VAR_10 = FUNC_16(VAR_7 * VAR_2);
 else
  VAR_10 = (void *)FUNC_0(VAR_1);

 if (!VAR_10)
  return -VAR_0;

 if (VAR_11)
  FUNC_4(VAR_10, VAR_6->ldt, VAR_11 * VAR_2);
 VAR_9 = VAR_6->ldt;
 FUNC_5(VAR_10 + VAR_11 * VAR_2, 0,
        (VAR_7 - VAR_11) * VAR_2);

 FUNC_7(VAR_10, VAR_7);





 VAR_6->ldt = VAR_10;
 FUNC_17();
 VAR_6->size = VAR_7;
 FUNC_17();

 if (VAR_8) {
  FUNC_3(VAR_6);

 }
 if (VAR_11) {
  FUNC_8(VAR_9, VAR_11);
  if (VAR_11 * VAR_2 > VAR_3)
   FUNC_14(VAR_9);
  else
   FUNC_11(FUNC_15(VAR_9));
 }
 return 0;
}
