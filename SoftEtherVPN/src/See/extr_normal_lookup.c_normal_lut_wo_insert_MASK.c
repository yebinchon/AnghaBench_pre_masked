
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
typedef size_t uint32 ;
struct timeval {int dummy; } ;
struct time_conv {int dummy; } ;
struct TYPE_8__ {int * buffer; } ;
struct TYPE_7__ {scalar_t__ block; } ;
struct TYPE_6__ {size_t key_len; size_t lut_entries; size_t filled_entries; size_t rehashing_value; int * last_found; scalar_t__ shared_memory_base_address; scalar_t__ lut_base_address; } ;
typedef TYPE_1__ TME_DATA ;
typedef TYPE_2__ RECORD ;
typedef TYPE_3__ MEM_TYPE ;


 int FUNC_0 (struct timeval*,struct time_conv*) ;
 int FUNC_1 (scalar_t__*,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_2 (int *,size_t) ;

uint32 FUNC_3(uint8 *VAR_2, TME_DATA *VAR_3, MEM_TYPE *VAR_4, struct time_conv *VAR_5)
{
 uint32 VAR_6;
 uint32 VAR_7=0;
 uint32 *VAR_8=(uint32*) VAR_2;
 uint32 VAR_9=0;
 uint32 VAR_10;
 RECORD *VAR_11=(RECORD*)VAR_3->lut_base_address;
 uint8 *VAR_12;
 uint32 VAR_13=VAR_3->key_len;

 for (VAR_6=0; VAR_6<VAR_13;VAR_6++)
  VAR_9^=VAR_8[VAR_6];

 VAR_10=VAR_9 % VAR_3->lut_entries;

 while (VAR_7<=VAR_3->filled_entries)
 {

  if (VAR_11[VAR_10].block==0)
  {
   FUNC_0((struct timeval *)(VAR_3->shared_memory_base_address+4*VAR_13),VAR_5);
   VAR_3->last_found=((void*)0);
   return VAR_0;
  }



  VAR_12=VAR_4->buffer+FUNC_1(&VAR_11[VAR_10].block,0);

  for (VAR_6=0; (VAR_6<VAR_13) && (VAR_8[VAR_6]==FUNC_2(VAR_12,VAR_6*4)); VAR_6++);

  if (VAR_6==VAR_13)
   {

    FUNC_0((struct timeval *)(VAR_12+4*VAR_13),VAR_5);
    VAR_3->last_found=(uint8*)&VAR_11[VAR_10];
    return VAR_1;
   }
  else
  {

   VAR_10=(VAR_10+VAR_3->rehashing_value) % VAR_3->lut_entries;
   VAR_7++;
  }
 }


 FUNC_0((struct timeval *)(VAR_3->shared_memory_base_address+4*VAR_13),VAR_5);
 VAR_3->last_found=((void*)0);
 return VAR_0;

}
