
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct obj_mlmeex {int id; int state; int code; int size; } ;
struct obj_mlme {int id; int state; int code; } ;
struct obj_frequencies {int nr; int* mhz; } ;
struct obj_buffer {int size; int addr; } ;
struct obj_bsslist {int nr; int * bsslist; } ;
struct obj_bss {int age; int channel; int capinfo; int rates; int basic_rates; } ;
struct obj_attachment {int id; int size; } ;


 int FUNC_0 () ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(int VAR_0, void *VAR_1)
{
 switch (VAR_0) {
 case 128:
  *(u32 *) VAR_1 = FUNC_2(*(u32 *) VAR_1);
  break;
 case 135:{
   struct obj_buffer *VAR_2 = VAR_1;
   VAR_2->size = FUNC_2(VAR_2->size);
   VAR_2->addr = FUNC_2(VAR_2->addr);
   break;
  }
 case 137:{
   struct obj_bss *VAR_3 = VAR_1;
   VAR_3->age = FUNC_1(VAR_3->age);
   VAR_3->channel = FUNC_1(VAR_3->channel);
   VAR_3->capinfo = FUNC_1(VAR_3->capinfo);
   VAR_3->rates = FUNC_1(VAR_3->rates);
   VAR_3->basic_rates = FUNC_1(VAR_3->basic_rates);
   break;
  }
 case 136:{
   struct obj_bsslist *VAR_4 = VAR_1;
   int VAR_5;
   VAR_4->nr = FUNC_2(VAR_4->nr);
   for (VAR_5 = 0; VAR_5 < VAR_4->nr; VAR_5++)
    FUNC_3(137, &VAR_4->bsslist[VAR_5]);
   break;
  }
 case 134:{
   struct obj_frequencies *VAR_6 = VAR_1;
   int VAR_7;
   VAR_6->nr = FUNC_1(VAR_6->nr);
   for (VAR_7 = 0; VAR_7 < VAR_6->nr; VAR_7++)
    VAR_6->mhz[VAR_7] = FUNC_1(VAR_6->mhz[VAR_7]);
   break;
  }
 case 132:{
   struct obj_mlme *VAR_8 = VAR_1;
   VAR_8->id = FUNC_1(VAR_8->id);
   VAR_8->state = FUNC_1(VAR_8->state);
   VAR_8->code = FUNC_1(VAR_8->code);
   break;
  }
 case 131:{
   struct obj_mlmeex *VAR_9 = VAR_1;
   VAR_9->id = FUNC_1(VAR_9->id);
   VAR_9->state = FUNC_1(VAR_9->state);
   VAR_9->code = FUNC_1(VAR_9->code);
   VAR_9->size = FUNC_1(VAR_9->size);
   break;
  }
 case 138:{
   struct obj_attachment *VAR_10 = VAR_1;
   VAR_10->id = FUNC_1(VAR_10->id);
   VAR_10->size = FUNC_1(VAR_10->size);
   break;
 }
 case 129:
 case 133:
 case 139:
 case 130:
  break;
 default:
  FUNC_0();
 }
}
