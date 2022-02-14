
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct debug_store {scalar_t__ bts_absolute_maximum; scalar_t__ bts_interrupt_threshold; scalar_t__ bts_buffer_base; scalar_t__ bts_index; } ;
struct TYPE_4__ {struct debug_store* ds; } ;
struct TYPE_3__ {int bts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int,int,int) ;
 TYPE_2__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static int FUNC_4(int VAR_7)
{
 struct debug_store *VAR_8 = FUNC_2(VAR_5, VAR_7).ds;
 int VAR_9 = FUNC_0(VAR_7);
 int VAR_10, VAR_11;
 void *VAR_12;

 if (!VAR_6.bts)
  return 0;

 VAR_12 = FUNC_1(VAR_0, VAR_3 | VAR_4, VAR_9);
 if (FUNC_3(!VAR_12))
  return -VAR_2;

 VAR_10 = VAR_0 / VAR_1;
 VAR_11 = VAR_10 / 16;

 VAR_8->bts_buffer_base = (u64)(unsigned long)VAR_12;
 VAR_8->bts_index = VAR_8->bts_buffer_base;
 VAR_8->bts_absolute_maximum = VAR_8->bts_buffer_base +
  VAR_10 * VAR_1;
 VAR_8->bts_interrupt_threshold = VAR_8->bts_absolute_maximum -
  VAR_11 * VAR_1;

 return 0;
}
