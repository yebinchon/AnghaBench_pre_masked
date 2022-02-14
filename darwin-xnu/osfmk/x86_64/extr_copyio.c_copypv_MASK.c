
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kern_return_t ;
typedef int addr64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned int,unsigned int,unsigned int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int,unsigned int) ;
 scalar_t__ FUNC_2 (int,int,unsigned int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,unsigned int,int) ;
 int FUNC_4 (char*) ;

kern_return_t
FUNC_5(addr64_t VAR_9, addr64_t VAR_10, unsigned int VAR_11, int VAR_12)
{
 unsigned int VAR_13, VAR_14;
 int VAR_15 = 0;

 FUNC_0(0xeff7004c | VAR_1, (unsigned)VAR_9,
       (unsigned)VAR_10, VAR_11, VAR_12, 0);

 if ((VAR_12 & (VAR_8 | VAR_7)) == 0 )
  FUNC_4("copypv: no more than 1 parameter may be virtual\n");

 if ((VAR_12 & (VAR_8 | VAR_7)) == (VAR_8 | VAR_7))
         VAR_15 = 1;

 while (VAR_11) {

         if (VAR_15) {
          VAR_13 = (unsigned int)(VAR_4 - (VAR_10 & (VAR_4 - 1)));

   if (VAR_13 > (unsigned int)(VAR_4 - (VAR_9 & (VAR_4 - 1))))
           VAR_13 = (unsigned int)(VAR_4 - (VAR_9 & (VAR_4 - 1)));
  } else {





          if (VAR_12 & VAR_8)
           VAR_13 = (unsigned int)(VAR_4 - (VAR_9 & (VAR_4 - 1)));
   else
           VAR_13 = (unsigned int)(VAR_4 - (VAR_10 & (VAR_4 - 1)));
  }
  VAR_14 = VAR_11;
  if (VAR_13 < VAR_11)
          VAR_14 = VAR_13;
  if (VAR_15)
          FUNC_1(VAR_9, VAR_10, VAR_14);
  else {
          if (FUNC_2(VAR_9, VAR_10, VAR_14, VAR_12))
           return (VAR_2);
  }






  VAR_11 -= VAR_14;
  VAR_10 += VAR_14;
  VAR_9 += VAR_14;
 }
 FUNC_0(0xeff7004c | VAR_0, (unsigned)VAR_9,
       (unsigned)VAR_10, VAR_11, VAR_12, 0);

 return VAR_3;
}
