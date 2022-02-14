
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {unsigned long ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned long,int ,int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (unsigned long,int ,int) ;
 int FUNC_3 (int) ;
 TYPE_1__* VAR_6 ;

void FUNC_4(int VAR_7)
{
 unsigned long VAR_8 = VAR_6[VAR_7].ioaddr;
 uint32_t VAR_9;

 FUNC_0(VAR_8, VAR_2, 0);
 VAR_9 = FUNC_1(VAR_8, VAR_1);
 VAR_9 &= ~(VAR_5 | VAR_3);
 VAR_9 |= VAR_4;
 FUNC_2(VAR_8, VAR_1, VAR_9);
 FUNC_2(VAR_8, VAR_0, 0);
 FUNC_3(VAR_7);
}
