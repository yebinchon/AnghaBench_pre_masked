
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sccbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_2 ;

void FUNC_3(int VAR_3, void *VAR_4)
{
 volatile unsigned char *VAR_5 = (unsigned char *) VAR_2.sccbase + 2;
 unsigned char VAR_6;
 unsigned long VAR_7;




 FUNC_1(VAR_7);
 *VAR_5 = 3;
 VAR_6 = *VAR_5;
 FUNC_0(VAR_7);
 if (VAR_6 & 0x38)
  FUNC_2(VAR_0);
 if (VAR_6 & 0x07)
  FUNC_2(VAR_1);
}
