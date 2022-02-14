
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* current_entry_val; } ;
typedef TYPE_1__ RtlJSONContext ;
typedef int JSON_StringAttributes ;
typedef int JSON_Parser_HandlerResult ;
typedef int JSON_Parser ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static JSON_Parser_HandlerResult FUNC_4(JSON_Parser VAR_1, char *VAR_2, size_t VAR_3, JSON_StringAttributes VAR_4)
{
   RtlJSONContext *VAR_5 = (RtlJSONContext*)FUNC_0(VAR_1);
   (void)VAR_4;

   if (VAR_5->current_entry_val && VAR_3 && !FUNC_3(VAR_2))
   {
      if (*VAR_5->current_entry_val)
         FUNC_1(*VAR_5->current_entry_val);

      *VAR_5->current_entry_val = FUNC_2(VAR_2);
   }


   VAR_5->current_entry_val = ((void*)0);

   return VAR_0;
}
