
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
typedef int scratch ;
struct TYPE_4__ {char* data; struct TYPE_4__* prev; struct TYPE_4__* next; } ;
typedef TYPE_1__ STRING_T ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int,char const*,int ) ;

char *FUNC_4(const char *VAR_1, va_list VAR_2)
{
    char VAR_3[512];
    int VAR_4;
    STRING_T *VAR_5;
    VAR_4 = FUNC_3(VAR_3, sizeof(VAR_3), VAR_1, VAR_2) + 1;

    if (VAR_4 > sizeof(VAR_3))
 FUNC_0("Maximum string length exceeded");

    VAR_5 = FUNC_1(sizeof(STRING_T) + VAR_4);
    if (!VAR_5)
 FUNC_0("Out of memory");

    FUNC_2(VAR_5->data, VAR_3, VAR_4);
    if (VAR_0)
    {
 VAR_5->next = VAR_0;
 VAR_5->prev = VAR_0->prev;
 VAR_5->next->prev = VAR_5;
 VAR_5->prev->next = VAR_5;
    }
    else
    {
 VAR_5->next = VAR_5;
 VAR_5->prev = VAR_5;
 VAR_0 = VAR_5;
    }

    return VAR_5->data;
}
