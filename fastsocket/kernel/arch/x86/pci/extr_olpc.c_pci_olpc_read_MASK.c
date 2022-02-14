
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int (* read ) (unsigned int,unsigned int,unsigned int,int,int,int *) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ,int) ;
 int VAR_6 ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_3 (unsigned int,unsigned int,unsigned int,int,int,int *) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_13, unsigned int VAR_14,
  unsigned int VAR_15, int VAR_16, int VAR_17, uint32_t *VAR_18)
{
 uint32_t *VAR_19;


 if (!FUNC_2(VAR_14, VAR_15))
  return VAR_11(VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18);





 if (VAR_16 >= 0x70)
  VAR_19 = &VAR_12;
 else {
  switch (VAR_15) {
  case 0x8:
   VAR_19 = FUNC_1(VAR_6 ? VAR_9 : VAR_5, VAR_16);
   break;
  case 0x9:
   VAR_19 = FUNC_1(VAR_6 ? VAR_8 : VAR_4, VAR_16);
   break;
  case 0xa:
   VAR_19 = VAR_6 ? FUNC_1(VAR_1, VAR_16) : &VAR_3;
   break;
  case 0x78:
   VAR_19 = FUNC_1(VAR_7, VAR_16);
   break;
  case 0x7b:
   VAR_19 = FUNC_1(VAR_0, VAR_16);
   break;
  case 0x7c:
   VAR_19 = FUNC_1(VAR_10, VAR_16);
   break;
  case 0x7d:
   VAR_19 = FUNC_1(VAR_2, VAR_16);
   break;
  default:
   VAR_19 = &VAR_3;
   break;
  }
 }
 switch (VAR_17) {
 case 1:
  *VAR_18 = *(uint8_t *)VAR_19;
  break;
 case 2:
  *VAR_18 = *(uint16_t *)VAR_19;
  break;
 case 4:
  *VAR_18 = *VAR_19;
  break;
 default:
  FUNC_0();
 }

 return 0;
}
