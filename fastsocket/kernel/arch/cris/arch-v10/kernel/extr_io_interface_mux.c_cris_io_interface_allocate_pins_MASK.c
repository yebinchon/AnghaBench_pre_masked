
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cris_io_interface { ____Placeholder_cris_io_interface } cris_io_interface ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (unsigned int const) ;
 int FUNC_2 () ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int* VAR_4 ;
 unsigned int VAR_5 ;
 int* VAR_6 ;
 unsigned int VAR_7 ;
 int* VAR_8 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char const,unsigned int const,unsigned int const,unsigned int const) ;

int FUNC_7(const enum cris_io_interface VAR_9,
        const char VAR_10,
        const unsigned VAR_11,
        const unsigned VAR_12)
{
 unsigned int VAR_13;
 unsigned int VAR_14 = 0;
 unsigned int VAR_15;
 unsigned long int VAR_16;
 enum cris_io_interface *VAR_17;

 (void)FUNC_2();

 FUNC_0(FUNC_6("cris_io_interface_allocate_pins: if=%d port=%c start=%u stop=%u\n",
     VAR_9, VAR_10, VAR_11, VAR_12));

 if (!((VAR_11 <= VAR_12) &&
       ((((VAR_10 == 'a') || (VAR_10 == 'b')) && (VAR_12 < 8)) ||
        ((VAR_10 == 'g') && (VAR_12 < 32))))) {
  return -VAR_1;
 }

 VAR_14 = FUNC_1(VAR_12 + 1);
 VAR_15 = FUNC_1(VAR_11);
 VAR_14 &= ~VAR_15;

 FUNC_0(FUNC_6("cris_io_interface_allocate_pins: port=%c start=%u stop=%u mask=0x%08x\n",
     VAR_10, VAR_11, VAR_12, VAR_14));

 FUNC_4(VAR_16);

 switch (VAR_10) {
 case 'a':
  if ((VAR_5 & VAR_14) != VAR_14) {
   FUNC_3(VAR_16);
   return -VAR_0;
  }
  VAR_17 = VAR_4;
  VAR_5 &= ~VAR_14;
  break;
 case 'b':
  if ((VAR_7 & VAR_14) != VAR_14) {
   FUNC_3(VAR_16);
   return -VAR_0;
  }
  VAR_17 = VAR_6;
  VAR_7 &= ~VAR_14;
  break;
 case 'g':
  if (((VAR_2 & VAR_14) != VAR_14) ||
      ((VAR_3 & VAR_14) != VAR_14)) {
   FUNC_3(VAR_16);
   return -VAR_0;
  }
  VAR_17 = VAR_8;
  VAR_2 &= ~VAR_14;
  VAR_3 &= ~VAR_14;
  break;
 default:
  FUNC_3(VAR_16);
  return -VAR_1;
 }

 for (VAR_13 = VAR_11; VAR_13 <= VAR_12; VAR_13++) {
  VAR_17[VAR_13] = VAR_9;
 }
 FUNC_3(VAR_16);

 FUNC_5();
 return 0;
}
