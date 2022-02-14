
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
typedef scalar_t__ uint16 ;
struct timeval {int dummy; } ;
struct time_conv {int dummy; } ;
struct TYPE_8__ {int * buffer; } ;
struct TYPE_7__ {int exec_fcn; int block; } ;
struct TYPE_6__ {int key_len; int filled_entries; int filled_blocks; int shared_memory_blocks; int lut_entries; int block_size; int default_exec; int * shared_memory_base_address; scalar_t__ lut_base_address; } ;
typedef TYPE_1__ TME_DATA ;
typedef TYPE_2__ RECORD ;
typedef TYPE_3__ MEM_TYPE ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct timeval*,struct time_conv*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

uint32 FUNC_5(uint8 *VAR_2, TME_DATA *VAR_3, MEM_TYPE *VAR_4, struct time_conv *VAR_5)
{
 RECORD *VAR_6=(RECORD*)VAR_3->lut_base_address;

 if ((VAR_3->key_len!=1)&&
  (VAR_3->key_len!=2))
  return VAR_0;

 if(VAR_3->key_len==2)
 {
  uint32 VAR_7,VAR_8;
  uint8 *VAR_9;

  VAR_7=FUNC_3(VAR_2,0);
  VAR_8=FUNC_3(VAR_2,4);

  if (VAR_7>VAR_8)
   return VAR_0;
  if (VAR_3->filled_entries>0)
  {
   VAR_9=VAR_4->buffer+FUNC_3(&VAR_6[VAR_3->filled_entries-1].block,0);

   if (FUNC_3(VAR_9,4)>=VAR_7)
    return VAR_0;
  }

  if (VAR_3->filled_blocks==VAR_3->shared_memory_blocks)
   return VAR_0;

  if (VAR_3->filled_entries==VAR_3->lut_entries)
   return VAR_0;

  VAR_9=VAR_3->shared_memory_base_address+VAR_3->block_size*VAR_3->filled_blocks;

  FUNC_0(VAR_9,VAR_2,8);

  FUNC_2(&VAR_6[VAR_3->filled_entries].block,VAR_9-VAR_4->buffer);
  FUNC_2(&VAR_6[VAR_3->filled_entries].exec_fcn,VAR_3->default_exec);

  FUNC_1((struct timeval *)(VAR_9+8),VAR_5);

  VAR_3->filled_blocks++;
  VAR_3->filled_entries++;

  return VAR_1;
 }
 else
 {
  uint16 VAR_10,VAR_11;
  uint8 *VAR_12;

  VAR_10=FUNC_4(VAR_2,0);
  VAR_11=FUNC_4(VAR_2,2);

  if (VAR_10>VAR_11)
   return VAR_0;
  if (VAR_3->filled_entries>0)
  {
   VAR_12=VAR_4->buffer+FUNC_3(&VAR_6[VAR_3->filled_entries-1].block,0);

   if (FUNC_4(VAR_12,2)>=VAR_10)
    return VAR_0;
  }

  if (VAR_3->filled_blocks==VAR_3->shared_memory_blocks)
   return VAR_0;

  if (VAR_3->filled_entries==VAR_3->lut_entries)
   return VAR_0;

  VAR_12=VAR_4->buffer+FUNC_3(&VAR_6[VAR_3->filled_entries].block,0);

  FUNC_0(VAR_12,VAR_2,4);

  FUNC_2(&VAR_6[VAR_3->filled_entries].block,VAR_12-VAR_4->buffer);
  FUNC_2(&VAR_6[VAR_3->filled_entries].exec_fcn,VAR_3->default_exec);

  FUNC_1((struct timeval *)(VAR_12+4),VAR_5);

  VAR_3->filled_blocks++;
  VAR_3->filled_entries++;

  return VAR_1;
 }
}
