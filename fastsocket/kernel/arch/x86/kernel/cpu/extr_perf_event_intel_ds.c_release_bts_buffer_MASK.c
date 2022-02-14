
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct debug_store {scalar_t__ bts_buffer_base; } ;
struct TYPE_4__ {struct debug_store* ds; } ;
struct TYPE_3__ {int bts; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 TYPE_2__ FUNC_1 (int ,int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_2(int VAR_2)
{
 struct debug_store *VAR_3 = FUNC_1(VAR_0, VAR_2).ds;

 if (!VAR_3 || !VAR_1.bts)
  return;

 FUNC_0((void *)(unsigned long)VAR_3->bts_buffer_base);
 VAR_3->bts_buffer_base = 0;
}
