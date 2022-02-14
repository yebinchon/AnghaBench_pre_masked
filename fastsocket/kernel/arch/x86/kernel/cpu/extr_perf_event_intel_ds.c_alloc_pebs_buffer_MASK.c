
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct debug_store {scalar_t__ pebs_buffer_base; scalar_t__ pebs_interrupt_threshold; scalar_t__ pebs_absolute_maximum; scalar_t__ pebs_index; } ;
struct TYPE_4__ {struct debug_store* ds; } ;
struct TYPE_3__ {int pebs_record_size; int pebs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int,int,int) ;
 TYPE_2__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static int FUNC_4(int VAR_6)
{
 struct debug_store *VAR_7 = FUNC_2(VAR_4, VAR_6).ds;
 int VAR_8 = FUNC_0(VAR_6);
 int VAR_9, VAR_10 = 1;
 void *VAR_11;

 if (!VAR_5.pebs)
  return 0;

 VAR_11 = FUNC_1(VAR_2, VAR_1 | VAR_3, VAR_8);
 if (FUNC_3(!VAR_11))
  return -VAR_0;

 VAR_9 = VAR_2 / VAR_5.pebs_record_size;

 VAR_7->pebs_buffer_base = (u64)(unsigned long)VAR_11;
 VAR_7->pebs_index = VAR_7->pebs_buffer_base;
 VAR_7->pebs_absolute_maximum = VAR_7->pebs_buffer_base +
  VAR_9 * VAR_5.pebs_record_size;

 VAR_7->pebs_interrupt_threshold = VAR_7->pebs_buffer_base +
  VAR_10 * VAR_5.pebs_record_size;

 return 0;
}
