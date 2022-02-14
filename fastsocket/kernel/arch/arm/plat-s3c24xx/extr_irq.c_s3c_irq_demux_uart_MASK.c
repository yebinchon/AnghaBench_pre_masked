
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5;
 unsigned int VAR_6 = VAR_3 - VAR_0;




 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_0(VAR_1);

 FUNC_2("s3c_irq_demux_uart: start=%d (%d), subsrc=0x%08x,0x%08x\n",
  VAR_3, VAR_6, VAR_4, VAR_5);

 VAR_4 &= ~VAR_5;
 VAR_4 >>= VAR_6;
 VAR_4 &= 7;

 if (VAR_4 != 0) {
  if (VAR_4 & 1)
   FUNC_1(VAR_3);

  if (VAR_4 & 2)
   FUNC_1(VAR_3+1);

  if (VAR_4 & 4)
   FUNC_1(VAR_3+2);
 }
}
