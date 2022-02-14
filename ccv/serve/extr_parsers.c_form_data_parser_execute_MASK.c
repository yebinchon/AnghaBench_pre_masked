
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int name ;
struct TYPE_3__ {int state; size_t cursor; int disposition_index; char lookbehind; int context; int (* on_name ) (int ,char const*,size_t) ;} ;
typedef TYPE_1__ form_data_parser_t ;
typedef int form_data ;
typedef int content_disposition ;


 int VAR_0 ;





 int FUNC_0 (int ,char const*,size_t) ;
 int FUNC_1 (int ,char const*,size_t) ;
 int FUNC_2 (char const) ;

void FUNC_3(form_data_parser_t* VAR_1, const char* VAR_2, size_t VAR_3, int VAR_4)
{
 static const char VAR_5[] = "content-disposition";
 static const char VAR_6[] = "form-data;";
 static const char VAR_7[] = "name=\"";

 int VAR_8, VAR_9;
 size_t VAR_10 = 0;
 const char* VAR_11 = VAR_2;
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
 {
  VAR_9 = FUNC_2(VAR_2[VAR_8]);
  switch (VAR_1->state)
  {
   default:

    VAR_1->state = 128;

   case 128:
    VAR_1->state = 132;
    VAR_1->cursor = 0;

   case 132:

    if (VAR_9 != VAR_5[VAR_1->cursor])
    {
     VAR_1->state = 128;
     return;
    }
    ++VAR_1->cursor;
    if (VAR_1->cursor == sizeof(VAR_5) - 1)
    {
     VAR_1->disposition_index = VAR_4;
     VAR_1->state = 129;
     VAR_1->cursor = 0;
    }
    break;
   case 129:
    if (VAR_9 == ' ' || VAR_9 == '\t')
     continue;
    if (VAR_9 != VAR_6[VAR_1->cursor])
    {
     VAR_1->state = 128;
     return;
    }
    ++VAR_1->cursor;
    if (VAR_1->cursor == sizeof(VAR_6) - 1)
    {

     VAR_1->state = 130;
     VAR_1->cursor = 0;
    }
    break;
   case 130:
    if (VAR_9 == ' ' || VAR_9 == '\t')
     continue;
    if (VAR_9 != VAR_7[VAR_1->cursor])
    {
     VAR_1->state = 128;
     return;
    }
    ++VAR_1->cursor;
    if (VAR_1->cursor == sizeof(VAR_7) - 1)
    {
     VAR_1->state = 131;
     VAR_1->lookbehind = '\0';
     VAR_1->cursor = 0;
     VAR_11 = VAR_2 + VAR_8 + 1;
     VAR_10 = 0;
    }
    break;
   case 131:
    if (VAR_1->lookbehind != '\\' && VAR_2[VAR_8] == '"')
    {
     VAR_1->state = VAR_0;
     if (VAR_10 > 0 && VAR_1->on_name)
      VAR_1->on_name(VAR_1->context, VAR_11, VAR_10);
     return;
    }
    VAR_10 = VAR_2 + VAR_8 + 1 - VAR_11;


    VAR_1->lookbehind = (VAR_1->lookbehind != '\\') ? VAR_2[VAR_8] : '\0';
    break;
  }
 }
 if (VAR_10 > 0 && VAR_1->state == 131 && VAR_1->on_name)
  VAR_1->on_name(VAR_1->context, VAR_11, VAR_10);
}
