
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t guint ;
typedef scalar_t__ guchar ;
typedef enum enum_field_types { ____Placeholder_enum_field_types } enum_field_types ;
struct TYPE_2__ {char const* name; scalar_t__ type; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int ,int) ;

const char *FUNC_1(enum enum_field_types VAR_2) {
 static const char *VAR_3 = "UNKNOWN";
 guint VAR_4;

 for (VAR_4 = 0; VAR_1[VAR_4].name; VAR_4++) {
  if ((guchar)VAR_1[VAR_4].type == (guchar)VAR_2) return VAR_1[VAR_4].name;
 }

 FUNC_0("%s: field-type %d isn't known yet",
   VAR_0,
   VAR_2);

 return VAR_3;
}
