
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uip_pbuf_layer ;
typedef int uip_pbuf_flag ;
typedef void u8_t ;
typedef int u16_t ;
struct uip_pbuf {int tot_len; int len; int ref; void* flags; struct uip_pbuf* next; int * payload; } ;
typedef int s32_t ;


 void* FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;



 int VAR_6 ;





 int VAR_7 ;
 struct uip_pbuf* FUNC_3 (int *) ;
 struct uip_pbuf* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct uip_pbuf*) ;
 int VAR_8 ;
 int VAR_9 ;

struct uip_pbuf* FUNC_6(uip_pbuf_layer VAR_10,u16_t VAR_11,uip_pbuf_flag VAR_12)
{
 u16_t VAR_13;
 s32_t VAR_14;
 struct uip_pbuf *VAR_15,*VAR_16,*VAR_17;

 VAR_13 = 0;
 switch(VAR_10) {
  case 128:
   VAR_13 += VAR_7;
  case 135:
   VAR_13 += VAR_0;
  case 134:
   VAR_13 += VAR_1;
   break;
  case 131:
   break;
  default:
   FUNC_2("uip_pbuf_alloc: bad pbuf layer.\n");
   return ((void*)0);
 }

 switch(VAR_12) {
  case 133:
   VAR_15 = FUNC_3(&VAR_8);
   if(VAR_15==((void*)0)) {
    FUNC_2("uip_pbuf_alloc: couldn't allocate pbuf(p) from pool\n");
    return ((void*)0);
   }

   VAR_15->next = ((void*)0);
   VAR_15->payload = FUNC_0((void*)((u8_t*)VAR_15+(sizeof(struct uip_pbuf)+VAR_13)));
   VAR_15->tot_len = VAR_11;
   VAR_15->len = (VAR_11>(VAR_6-VAR_13)?(VAR_6-VAR_13):VAR_11);
   VAR_15->flags = VAR_2;
   VAR_15->ref = 1;

   VAR_17 = VAR_15;
   VAR_14 = VAR_11 - VAR_15->len;
   while(VAR_14>0) {
    VAR_16 = FUNC_3(&VAR_8);
    if(VAR_16==((void*)0)) {
     FUNC_2("uip_pbuf_alloc: couldn't allocate pbuf(q) from pool\n");
     FUNC_5(VAR_15);
     return ((void*)0);
    }

    VAR_16->next = ((void*)0);
    VAR_17->next = VAR_16;
    VAR_16->tot_len = VAR_14;
    VAR_16->len = (VAR_14>VAR_6?VAR_6:VAR_14);
    VAR_16->payload = (void*)((u8_t*)VAR_16+sizeof(struct uip_pbuf));
    VAR_16->flags = VAR_2;
    VAR_16->ref = 1;

    VAR_14 -= VAR_16->len;
    VAR_17 = VAR_16;
   }
   break;
  case 132:
   VAR_15 = FUNC_4(FUNC_1(sizeof(struct uip_pbuf)+VAR_13)+FUNC_1(VAR_11));
   if(VAR_15==((void*)0)) {
    FUNC_2("uip_pbuf_alloc: couldn't allocate pbuf from ram\n");
    return ((void*)0);
   }
   VAR_15->payload = FUNC_0((u8_t*)VAR_15+sizeof(struct uip_pbuf)+VAR_13);
   VAR_15->len = VAR_15->tot_len = VAR_11;
   VAR_15->next = ((void*)0);
   VAR_15->flags = VAR_3;
   break;
  case 129:
  case 130:
   VAR_15 = FUNC_3(&VAR_9);
   if(VAR_15==((void*)0)) {
    FUNC_2("uip_pbuf_alloc: couldn't allocate pbuf from rom/ref\n");
    return ((void*)0);
   }
   VAR_15->payload = ((void*)0);
   VAR_15->next = ((void*)0);
   VAR_15->len = VAR_15->tot_len = VAR_11;
   VAR_15->flags = (VAR_12==129?VAR_5:VAR_4);
   break;
  default:
   FUNC_2("uip_pbuf_alloc: bad flag value.\n");
   return ((void*)0);
 }

 VAR_15->ref = 1;
 return VAR_15;
}
