
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int code; char* text; } ;
typedef TYPE_1__ twa_message_type ;



__attribute__((used)) static char *FUNC_0(twa_message_type *VAR_0, unsigned int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; ((VAR_1 != VAR_0[VAR_2].code) &&
        (VAR_0[VAR_2].text != (char *)0)); VAR_2++);
 return(VAR_0[VAR_2].text);
}
