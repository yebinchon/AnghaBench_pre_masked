
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t guint ;
typedef scalar_t__ guchar ;
typedef enum Log_event_type { ____Placeholder_Log_event_type } Log_event_type ;
struct TYPE_2__ {char const* name; scalar_t__ type; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int ,int) ;

const char *FUNC_1(enum Log_event_type VAR_2) {
 static const char *VAR_3 = "UNKNOWN";
 guint VAR_4;

 for (VAR_4 = 0; VAR_1[VAR_4].name; VAR_4++) {
  if ((guchar)VAR_1[VAR_4].type == (guchar)VAR_2) return VAR_1[VAR_4].name;
 }

 FUNC_0("%s: event-type %d isn't known yet",
   VAR_0,
   VAR_2);

 return VAR_3;
}
