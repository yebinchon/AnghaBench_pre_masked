
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct console {int dummy; } ;
struct TYPE_2__ {unsigned char rhrb_thrb; int srb_csrb; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0 (struct console *VAR_1, const char *VAR_2,unsigned int VAR_3)
{
   while(VAR_3--) {
 if (*VAR_2 == '\n') {
 VAR_0 = (unsigned char)'\r';
 while (!(VAR_0 & 0x4))
                ;
 }
    VAR_0 = (unsigned char)*VAR_2++;
    while (!(VAR_0 & 0x4))
            ;
  }
}
