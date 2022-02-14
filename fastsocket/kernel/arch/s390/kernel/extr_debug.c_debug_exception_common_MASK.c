
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; int buf_size; int areas; } ;
typedef TYPE_1__ debug_info_t ;
typedef int debug_entry_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *,int,int) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,void const*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

debug_entry_t
*FUNC_9(debug_info_t * VAR_2, int VAR_3, const void *VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 debug_entry_t *VAR_7;

 if (!VAR_0 || !VAR_2->areas)
  return ((void*)0);
 if (VAR_1) {
  if (!FUNC_7(&VAR_2->lock, VAR_6))
   return ((void*)0);
 } else
  FUNC_6(&VAR_2->lock, VAR_6);
 VAR_7 = FUNC_2(VAR_2);
 FUNC_4(FUNC_0(VAR_7), 0, VAR_2->buf_size);
 FUNC_3(FUNC_0(VAR_7), VAR_4, FUNC_5(VAR_5, VAR_2->buf_size));
 FUNC_1(VAR_2, VAR_7, VAR_3, 1);
 FUNC_8(&VAR_2->lock, VAR_6);

 return VAR_7;
}
