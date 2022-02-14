
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (unsigned long,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (char*,int,unsigned long,unsigned long,unsigned long,unsigned long) ;

void FUNC_2(int VAR_5)
{
 unsigned long VAR_6 = VAR_4[VAR_5].ioaddr;
 unsigned long VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_7 = FUNC_0(VAR_6, VAR_1);
 VAR_8 = FUNC_0(VAR_6, VAR_2);
 VAR_9 = FUNC_0(VAR_6, VAR_3);
 VAR_10 = FUNC_0(VAR_6, VAR_0);

 FUNC_1("DMA[%d] cstr=%lx pix=%lx six=%lx bcl=%lx\n", VAR_5, VAR_7, VAR_8, VAR_9, VAR_10);

}
