
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cursor; char* uri; int resource; scalar_t__ context; TYPE_4__* dispatcher; } ;
typedef TYPE_1__ ebb_request_extras ;
struct TYPE_6__ {scalar_t__ data; } ;
typedef TYPE_2__ ebb_request ;
struct TYPE_7__ {int context; scalar_t__ (* parse ) (int ,scalar_t__,int,char*,size_t,int ,int ) ;} ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (char*) ;
 size_t FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int,char*,size_t,int ,int ) ;

__attribute__((used)) static void FUNC_3(ebb_request* VAR_1)
{

 ebb_request_extras* VAR_2 = (ebb_request_extras*)VAR_1->data;
 if (VAR_2->cursor > 0)
 {
  char* VAR_3 = VAR_2->uri;
  size_t VAR_4 = FUNC_1(VAR_2->uri, 256);
  int VAR_5;
  int VAR_6 = 0, VAR_7 = 1;
  for (VAR_5 = VAR_4 - 1; VAR_5 >= 0; VAR_5--)
   if (VAR_3[VAR_5] >= '0' && VAR_3[VAR_5] <= '9')
   {
    VAR_6 += (VAR_3[VAR_5] - '0') * VAR_7;
    VAR_7 *= 10;
   } else if (VAR_5 == VAR_4 - 1 || VAR_3[VAR_5] != '/') {

    VAR_5 = VAR_4;
    VAR_6 = -1;
    break;
   } else
    break;
  VAR_3[VAR_5] = '\0';
  VAR_2->dispatcher = FUNC_0(VAR_3);
  VAR_2->resource = VAR_6;
  VAR_2->context = 0;
  if (VAR_6 >= 0 && VAR_2->dispatcher && VAR_2->dispatcher->parse)
   VAR_2->context = VAR_2->dispatcher->parse(VAR_2->dispatcher->context, VAR_2->context, VAR_2->resource, VAR_3, VAR_4, VAR_0, 0);
  VAR_2->cursor = 0;
 }
}
