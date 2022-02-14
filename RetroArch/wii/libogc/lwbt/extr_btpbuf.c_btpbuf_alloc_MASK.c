
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8_t ;
typedef int u16_t ;
struct pbuf {int tot_len; int len; int ref; void* flags; struct pbuf* next; int * payload; } ;
typedef int s32_t ;
typedef int pbuf_layer ;
typedef int pbuf_flag ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 void* FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;


 int VAR_5 ;





 int VAR_6 ;
 struct pbuf* FUNC_3 (int *) ;
 struct pbuf* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct pbuf*) ;
 int VAR_7 ;
 int VAR_8 ;

struct pbuf* FUNC_6(pbuf_layer VAR_9,u16_t VAR_10,pbuf_flag VAR_11)
{
 u16_t VAR_12;
 s32_t VAR_13;
 struct pbuf *VAR_14,*VAR_15,*VAR_16;

 VAR_12 = 0;
 switch(VAR_9) {
  case 128:
   VAR_12 += VAR_6;
  case 134:
   VAR_12 += VAR_0;
   break;
  case 131:
   break;
  default:
   FUNC_0("btpbuf_alloc: bad pbuf layer.\n");
   return ((void*)0);
 }

 switch(VAR_11) {
  case 133:
   VAR_14 = FUNC_3(&VAR_7);
   if(VAR_14==((void*)0)) {
    FUNC_0("btbtpbuf_alloc: couldn't allocate pbuf(p) from pool\n");
    return ((void*)0);
   }

   VAR_14->next = ((void*)0);
   VAR_14->payload = FUNC_1((void*)((u8_t*)VAR_14+(sizeof(struct pbuf)+VAR_12)));
   VAR_14->tot_len = VAR_10;
   VAR_14->len = (VAR_10>(VAR_5-VAR_12)?(VAR_5-VAR_12):VAR_10);
   VAR_14->flags = VAR_1;
   VAR_14->ref = 1;

   VAR_16 = VAR_14;
   VAR_13 = VAR_10 - VAR_14->len;
   while(VAR_13>0) {
    VAR_15 = FUNC_3(&VAR_7);
    if(VAR_15==((void*)0)) {
     FUNC_0("btpbuf_alloc: couldn't allocate pbuf(q) from pool\n");
     FUNC_5(VAR_14);
     return ((void*)0);
    }

    VAR_15->next = ((void*)0);
    VAR_16->next = VAR_15;
    VAR_15->tot_len = VAR_13;
    VAR_15->len = (VAR_13>VAR_5?VAR_5:VAR_13);
    VAR_15->payload = (void*)((u8_t*)VAR_15+sizeof(struct pbuf));
    VAR_15->flags = VAR_1;
    VAR_15->ref = 1;

    VAR_13 -= VAR_15->len;
    VAR_16 = VAR_15;
   }
   break;
  case 132:
   VAR_14 = FUNC_4(FUNC_2(sizeof(struct pbuf)+VAR_12)+FUNC_2(VAR_10));
   if(VAR_14==((void*)0)) {
    FUNC_0("btpbuf_alloc: couldn't allocate pbuf from ram\n");
    return ((void*)0);
   }
   VAR_14->payload = FUNC_1((u8_t*)VAR_14+sizeof(struct pbuf)+VAR_12);
   VAR_14->len = VAR_14->tot_len = VAR_10;
   VAR_14->next = ((void*)0);
   VAR_14->flags = VAR_2;
   break;
  case 129:
  case 130:
   VAR_14 = FUNC_3(&VAR_8);
   if(VAR_14==((void*)0)) {
    FUNC_0("btpbuf_alloc: couldn't allocate pbuf from rom/ref\n");
    return ((void*)0);
   }
   VAR_14->payload = ((void*)0);
   VAR_14->next = ((void*)0);
   VAR_14->len = VAR_14->tot_len = VAR_10;
   VAR_14->flags = (VAR_11==129?VAR_4:VAR_3);
   break;
  default:
   FUNC_0("btpbuf_alloc: bad flag value.\n");
   return ((void*)0);
 }

 VAR_14->ref = 1;
 return VAR_14;
}
