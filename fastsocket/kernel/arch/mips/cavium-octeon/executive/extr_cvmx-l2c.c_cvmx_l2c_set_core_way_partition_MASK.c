
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

int FUNC_5(uint32_t VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6;
 uint32_t VAR_7;

 VAR_7 = (0x1 << FUNC_1()) - 1;

 VAR_5 &= VAR_7;


 if (VAR_5 == VAR_7)
  return -1;


 if (VAR_4 >= FUNC_2())
  return -1;


 if (((VAR_5 | FUNC_0(VAR_4)) & VAR_7) ==
     VAR_7)
  return -1;




 VAR_6 = (VAR_4 & 0x3) * 8;





 switch (VAR_4 & 0xC) {
 case 0x0:
  FUNC_4(VAR_0,
          (FUNC_3(VAR_0) &
    ~(0xFF << VAR_6)) | VAR_5 << VAR_6);
  break;
 case 0x4:
  FUNC_4(VAR_1,
          (FUNC_3(VAR_1) &
    ~(0xFF << VAR_6)) | VAR_5 << VAR_6);
  break;
 case 0x8:
  FUNC_4(VAR_2,
          (FUNC_3(VAR_2) &
    ~(0xFF << VAR_6)) | VAR_5 << VAR_6);
  break;
 case 0xC:
  FUNC_4(VAR_3,
          (FUNC_3(VAR_3) &
    ~(0xFF << VAR_6)) | VAR_5 << VAR_6);
  break;
 }
 return 0;
}
