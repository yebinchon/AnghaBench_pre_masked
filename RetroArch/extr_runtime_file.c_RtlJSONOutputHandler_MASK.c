
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int file; } ;
typedef TYPE_1__ RtlJSONContext ;
typedef int JSON_Writer_HandlerResult ;
typedef int JSON_Writer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int ,char const*,size_t) ;

__attribute__((used)) static JSON_Writer_HandlerResult FUNC_2(JSON_Writer VAR_2, const char *VAR_3, size_t VAR_4)
{
   RtlJSONContext *VAR_5 = (RtlJSONContext*)FUNC_0(VAR_2);
   (void)VAR_2;

   return FUNC_1(VAR_5->file, VAR_3, VAR_4) == VAR_4 ? VAR_1 : VAR_0;
}
