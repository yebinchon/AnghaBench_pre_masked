
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint8_t ;
typedef void* uint32_t ;
typedef void* uint16_t ;
typedef void* int16_t ;
struct TYPE_6__ {int ea_addr; int fault_addr; int fault_status; int exception; void** A; void** D; } ;
typedef TYPE_1__ Q68State ;


 int VAR_0 ;


 int FUNC_0 (void*) ;
 unsigned int FUNC_1 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,int,void*) ;
 int FUNC_3 (TYPE_1__*,int,void*) ;
 int FUNC_4 (TYPE_1__*,int,void*) ;

__attribute__((used)) static void FUNC_5(Q68State *VAR_5, uint32_t VAR_6, int VAR_7, uint32_t VAR_8)
{
    const unsigned int VAR_9 = FUNC_1(VAR_6);
    switch (FUNC_0(VAR_6)) {
      case 130:
        switch (VAR_7) {
          case 129: *(VAR_0 + (uint8_t *)&VAR_5->D[VAR_9]) = VAR_8; break;
          case 128: *(VAR_4 + (uint16_t *)&VAR_5->D[VAR_9]) = VAR_8; break;
          default: VAR_5->D[VAR_9] = VAR_8; break;
        }
        return;
      case 131:
        if (VAR_7 == 128) {
            VAR_5->A[VAR_9] = (int16_t)VAR_8;
        } else {
            VAR_5->A[VAR_9] = VAR_8;
        }
        return;
      default: {
        if (VAR_7 == 129) {
            FUNC_4(VAR_5, VAR_5->ea_addr, VAR_8);
        } else {

            if (VAR_5->ea_addr & 1) {
                VAR_5->exception = VAR_1;
                VAR_5->fault_addr = VAR_5->ea_addr;
                VAR_5->fault_status = VAR_2
                                    | VAR_3;
                return;
            } else

            if (VAR_7 == 128) {
                FUNC_2(VAR_5, VAR_5->ea_addr, VAR_8);
            } else {
                FUNC_3(VAR_5, VAR_5->ea_addr, VAR_8);
            }
        }
        return;
      }
    }
}
