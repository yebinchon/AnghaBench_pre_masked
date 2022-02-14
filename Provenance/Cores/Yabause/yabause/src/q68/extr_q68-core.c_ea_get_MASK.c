
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int ea_addr; int fault_addr; int fault_status; void* exception; int * A; int * D; } ;
typedef TYPE_1__ Q68State ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_1__*,int ,int,int ) ;

__attribute__((used)) static uint32_t FUNC_6(Q68State *VAR_8, uint32_t VAR_9, int VAR_10,
                       int VAR_11, int *VAR_12)
{
    const unsigned int VAR_13 = FUNC_1(VAR_9);
    switch (FUNC_0(VAR_9)) {
      case 128:
        *VAR_12 = 0;
        return VAR_10==VAR_6 ? (uint8_t) VAR_8->D[VAR_13] :
               VAR_10==VAR_7 ? (uint16_t)VAR_8->D[VAR_13] : VAR_8->D[VAR_13];
      case 129:
        if (VAR_10 == VAR_6) {

            VAR_8->exception = VAR_3;
            *VAR_12 = -1;
            return 0;
        } else {
            *VAR_12 = 0;
            return VAR_10==VAR_7 ? (uint16_t)VAR_8->A[VAR_13] : VAR_8->A[VAR_13];
        }
      default: {
        *VAR_12 = FUNC_5(VAR_8, VAR_9, VAR_10,
                                 VAR_11 ? VAR_0 : VAR_1);
        if (*VAR_12 < 0) {
            VAR_8->exception = VAR_3;
            return 0;
        }
        if (VAR_10 == VAR_6) {
            return FUNC_4(VAR_8, VAR_8->ea_addr);
        } else {

            if (VAR_8->ea_addr & 1) {
                VAR_8->exception = VAR_2;
                VAR_8->fault_addr = VAR_8->ea_addr;
                VAR_8->fault_status = VAR_4
                                    | VAR_5;
                *VAR_12 = -1;
                return 0;
            }

            return VAR_10==VAR_7 ? FUNC_2(VAR_8, VAR_8->ea_addr)
                                : FUNC_3(VAR_8, VAR_8->ea_addr);
        }
      }
    }
}
