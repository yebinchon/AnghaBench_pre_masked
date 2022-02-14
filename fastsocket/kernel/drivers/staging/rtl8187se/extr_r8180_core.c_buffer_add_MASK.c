
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct buffer {struct buffer* next; void* dma; int * buf; } ;
typedef void* dma_addr_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 void* FUNC_1 (int,int ) ;

short FUNC_2(struct buffer **VAR_1, u32 *VAR_2, dma_addr_t VAR_3,
  struct buffer **VAR_4)
{
        struct buffer *VAR_5;

 if(! *VAR_1){

  *VAR_1 = FUNC_1(sizeof(struct buffer),VAR_0);

  if (*VAR_1 == ((void*)0)) {
   FUNC_0("Failed to kmalloc head of TX/RX struct");
   return -1;
  }
  (*VAR_1)->next=*VAR_1;
  (*VAR_1)->buf=VAR_2;
  (*VAR_1)->dma=VAR_3;
  if(VAR_4 !=((void*)0))
   (*VAR_4) = (*VAR_1);
  return 0;
 }
 VAR_5=*VAR_1;

 while(VAR_5->next!=(*VAR_1)) VAR_5=VAR_5->next;
 if ((VAR_5->next= FUNC_1(sizeof(struct buffer),VAR_0)) == ((void*)0)){
  FUNC_0("Failed to kmalloc TX/RX struct");
  return -1;
 }
 VAR_5->next->buf=VAR_2;
 VAR_5->next->dma=VAR_3;
 VAR_5->next->next=*VAR_1;

 return 0;
}
