
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct esp_event_ent {void* val; int type; } ;
struct esp {int esp_event_cur; void* event; struct esp_event_ent* esp_event_log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct esp*,struct esp_event_ent*) ;

__attribute__((used)) static void FUNC_1(struct esp *VAR_2, u8 VAR_3)
{
 struct esp_event_ent *VAR_4;
 int VAR_5 = VAR_2->esp_event_cur;

 VAR_4 = &VAR_2->esp_event_log[VAR_5];
 VAR_4->type = VAR_1;
 VAR_4->val = VAR_3;
 FUNC_0(VAR_2, VAR_4);

 VAR_2->esp_event_cur = (VAR_5 + 1) & (VAR_0 - 1);

 VAR_2->event = VAR_3;
}
