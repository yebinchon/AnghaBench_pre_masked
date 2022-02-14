
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_map_offset_t ;
typedef int boolean_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;




 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;

vm_map_offset_t
FUNC_2(
 boolean_t VAR_4,
 unsigned int VAR_5)
{
 unsigned int VAR_6 = 0;

 switch (VAR_5) {
 case 131:
  VAR_6 = VAR_0;
                break;
        case 128:
  VAR_6 = VAR_3;
                break;
        case 129:
  VAR_6 = VAR_2;
                break;
        case 130:
  VAR_6 = VAR_1;
                break;
        default:
  FUNC_0("ml_get_max_offset(): Illegal option 0x%x\n", VAR_5);
                break;
        }
 return FUNC_1(VAR_4, VAR_6);
}
