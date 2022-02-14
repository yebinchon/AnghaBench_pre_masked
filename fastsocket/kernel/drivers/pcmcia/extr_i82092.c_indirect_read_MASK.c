
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned short io_base; } ;


 unsigned char FUNC_0 (unsigned short) ;
 int FUNC_1 (unsigned short,unsigned short) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static unsigned char FUNC_4(int VAR_2, unsigned short VAR_3)
{
 unsigned short int VAR_4;
 unsigned char VAR_5;
 unsigned long VAR_6;
 FUNC_2(&VAR_0,VAR_6);
 VAR_3 += VAR_2 * 0x40;
 VAR_4 = VAR_1[VAR_2].io_base;
 FUNC_1(VAR_3,VAR_4);
 VAR_5 = FUNC_0(VAR_4+1);
 FUNC_3(&VAR_0,VAR_6);
 return VAR_5;
}
