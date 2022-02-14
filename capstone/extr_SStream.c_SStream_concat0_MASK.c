
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buffer; int index; } ;
typedef TYPE_1__ SStream ;


 int FUNC_0 (char*,char const*,unsigned int) ;
 scalar_t__ FUNC_1 (char const*) ;

void FUNC_2(SStream *VAR_0, const char *VAR_1)
{

 unsigned int VAR_2 = (unsigned int) FUNC_1(VAR_1);

 FUNC_0(VAR_0->buffer + VAR_0->index, VAR_1, VAR_2);
 VAR_0->index += VAR_2;
 VAR_0->buffer[VAR_0->index] = '\0';

}
