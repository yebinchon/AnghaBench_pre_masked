
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
typedef scalar_t__ uint16 ;
struct timeval {int dummy; } ;
struct time_conv {int dummy; } ;
struct TYPE_3__ {int key_len; int filled_blocks; int block_size; int * lut_base_address; int * last_found; int * shared_memory_base_address; } ;
typedef TYPE_1__ TME_DATA ;
typedef int RECORD ;
typedef int MEM_TYPE ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct timeval*,struct time_conv*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

uint32 FUNC_4(uint8 *VAR_3, TME_DATA *VAR_4, MEM_TYPE *VAR_5, struct time_conv *VAR_6)
{
 uint32 VAR_7;
 uint32 VAR_8,VAR_9;
 int VAR_10=-1;
 uint32 VAR_11;
 uint32 VAR_12;
 uint8 *VAR_13;
 if ((VAR_4->key_len!=1)&&
  (VAR_4->key_len!=2))
  return VAR_0;


 VAR_11=VAR_4->filled_blocks-1;
 VAR_12=VAR_4->block_size;
 VAR_8=VAR_11/2;
 VAR_9=VAR_8;
 VAR_13=VAR_4->shared_memory_base_address+VAR_12;

 if (VAR_4->key_len==2)
 {
  VAR_7=FUNC_2(VAR_3,0);

  if((VAR_7<FUNC_2(VAR_13,0))||(VAR_7>FUNC_2(VAR_13+VAR_12*(VAR_11-1),4)))
  {
   uint32 *VAR_14=(uint32*) VAR_3;
   VAR_14[0]=VAR_14[1]=0;

   FUNC_1((struct timeval *)(VAR_4->shared_memory_base_address+8),VAR_6);

   VAR_4->last_found=((void*)0);
   return VAR_1;
  }

  while(VAR_10==-1)
  {
   VAR_8=(VAR_8==1)? 1:VAR_8>>1;
   if (FUNC_2(VAR_13+VAR_12*VAR_9,0)>VAR_7)
    if (FUNC_2(VAR_13+VAR_12*(VAR_9-1),4)<VAR_7)
     VAR_10=-2;
    else
     VAR_9-=VAR_8;
   else
    if (FUNC_2(VAR_13+VAR_12*VAR_9,4)<VAR_7)
     if (FUNC_2(VAR_13+VAR_12*VAR_9,0)>VAR_7)
      VAR_10=-2;
     else
      VAR_9+=VAR_8;
    else VAR_10=VAR_9;
  }
  if (VAR_10<0)
  {
   uint32 *VAR_15=(uint32*) VAR_3;
   VAR_15[0]=VAR_15[1]=0;

   FUNC_1((struct timeval *)(VAR_4->shared_memory_base_address+8),VAR_6);

   VAR_4->last_found=((void*)0);
   return VAR_1;
  }

  VAR_4->last_found=VAR_4->lut_base_address+VAR_10*sizeof(RECORD);

  FUNC_0(VAR_3,VAR_13+VAR_12*VAR_10,8);

  FUNC_1((struct timeval *)(VAR_13+VAR_12*VAR_10+8),VAR_6);

  return VAR_2;
 }
 else
 {
  VAR_7=FUNC_3(VAR_3,0);

  if((VAR_7<FUNC_3(VAR_13,0))||(VAR_7>FUNC_3(VAR_13+VAR_12*(VAR_11-1),2)))
  {
   uint16 *VAR_16=(uint16*) VAR_3;
   VAR_16[0]=VAR_16[1]=0;

   FUNC_1((struct timeval *)(VAR_4->shared_memory_base_address+4),VAR_6);

   VAR_4->last_found=((void*)0);
   return VAR_1;
  }

  while(VAR_10==-1)
  {
   VAR_8=(VAR_8==1)? 1:VAR_8>>1;
   if (FUNC_3(VAR_13+VAR_12*VAR_9,0)>VAR_7)
    if (FUNC_3(VAR_13+VAR_12*(VAR_9-1),2)<VAR_7)
     VAR_10=-2;
    else
     VAR_9-=VAR_8;
   else
    if (FUNC_3(VAR_13+VAR_12*VAR_9,2)<VAR_7)
     if (FUNC_3(VAR_13+VAR_12*VAR_9,0)>VAR_7)
      VAR_10=-2;
     else
      VAR_9+=VAR_8;
    else VAR_10=VAR_9;
  }

  if (VAR_10<0)
  {
   uint16 *VAR_17=(uint16*) VAR_3;
   VAR_17[0]=VAR_17[1]=0;

   FUNC_1((struct timeval *)(VAR_4->shared_memory_base_address+4),VAR_6);

   VAR_4->last_found=((void*)0);
   return VAR_1;
  }

  VAR_4->last_found=VAR_4->lut_base_address+VAR_10*sizeof(RECORD);

  FUNC_1((struct timeval *)(VAR_13+VAR_12*VAR_10+4),VAR_6);

  FUNC_0(VAR_3,VAR_13+VAR_12*VAR_10,4);

  return VAR_2;
 }

}
