
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int midoutcnt; int midflag; int * midoutbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

void
FUNC_0 (u8 VAR_3)
{
  VAR_2.midflag &= ~VAR_0;

  if (VAR_2.midoutcnt > 3) return;

  VAR_2.midoutbuf[VAR_2.midoutcnt++] = VAR_3;

  if (VAR_2.midoutcnt > 3) VAR_2.midflag |= VAR_1;
}
