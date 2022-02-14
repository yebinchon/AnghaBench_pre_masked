
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum avmcardtype { ____Placeholder_avmcardtype } avmcardtype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int* VAR_3 ;
 int FUNC_0 (unsigned int,int ,int) ;
 int FUNC_1 (unsigned int,int ,int) ;

__attribute__((used)) static inline void FUNC_2(unsigned int VAR_4, unsigned VAR_5,
       enum avmcardtype VAR_6)
{
 switch (VAR_6) {
    case 129:
              FUNC_1(VAR_4, VAR_0, 0x00);
              FUNC_1(VAR_4, VAR_0, 0x02);
       FUNC_1(VAR_4, VAR_2, 0x08);
       break;
    case 134:
       FUNC_0(VAR_4, VAR_0, 0x00);
       FUNC_0(VAR_4, VAR_1, VAR_3[VAR_5]);
       FUNC_0(VAR_4, VAR_0, 0x02);
       break;
    default:
    case 131:
    case 130:
    case 133:
       FUNC_0(VAR_4, VAR_0, 0x00);
       FUNC_0(VAR_4, VAR_1, 0xf0);
       FUNC_0(VAR_4, VAR_0, 0x02);
       break;
    case 132:
    case 128:
       FUNC_0(VAR_4, VAR_1, 0xf0);
       break;
  }
}
