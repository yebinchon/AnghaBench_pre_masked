
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int header_index; int context; int (* on_value ) (int ,char const*,size_t,int ) ;int (* on_field ) (int ,char const*,size_t,int ) ;} ;
typedef TYPE_1__ query_string_parser_t ;






 int FUNC_0 (int ,char const*,size_t,int ) ;
 int FUNC_1 (int ,char const*,size_t,int ) ;
 int FUNC_2 (int ,char const*,size_t,int ) ;
 int FUNC_3 (int ,char const*,size_t,int ) ;

void FUNC_4(query_string_parser_t* VAR_0, const char* VAR_1, size_t VAR_2)
{
 int VAR_3;
 size_t VAR_4 = 0;
 const char* VAR_5 = VAR_1;
 size_t VAR_6 = 0;
 const char* VAR_7 = VAR_1;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  switch (VAR_0->state)
  {
   case 130:
    VAR_0->state = 131;
    ++VAR_0->header_index;
    VAR_5 = VAR_1 + VAR_3;
    VAR_4 = 0;

   case 131:
    if (VAR_1[VAR_3] != '&')
    {
     if (VAR_1[VAR_3] == '=')
     {
      VAR_0->state = 128;

      VAR_7 = VAR_1 + VAR_3 + 1;
      VAR_6 = 0;
     }
     if (VAR_0->state == 131)
      VAR_4 = VAR_1 + VAR_3 + 1 - VAR_5;
     break;
    } else

     VAR_0->state = 128;

   case 128:
    if (VAR_4 > 0 && VAR_0->on_field)
    {
     VAR_0->on_field(VAR_0->context, VAR_5, VAR_4, VAR_0->header_index);
     VAR_4 = 0;
    }
    if (VAR_1[VAR_3] != '&')
    {
     VAR_6 = VAR_1 + VAR_3 + 1 - VAR_7;
     break;
    } else
     VAR_0->state = 129;

   case 129:

    VAR_5 = VAR_1 + VAR_3 + 1;
    VAR_4 = 0;
    if (VAR_6 > 0 && VAR_0->on_value)
    {
     VAR_0->on_value(VAR_0->context, VAR_7, VAR_6, VAR_0->header_index);

     VAR_6 = 0;
    }
    ++VAR_0->header_index;
    VAR_0->state = 131;
    break;
  }
 if (VAR_4 > 0 && VAR_0->state == 131 && VAR_0->on_field)
  VAR_0->on_field(VAR_0->context, VAR_5, VAR_4, VAR_0->header_index);
 else if (VAR_6 > 0 && VAR_0->state == 128 && VAR_0->on_value)
  VAR_0->on_value(VAR_0->context, VAR_7, VAR_6, VAR_0->header_index);
}
