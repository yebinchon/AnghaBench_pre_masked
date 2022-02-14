
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_address_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_3__ {int length; scalar_t__ tail; scalar_t__ head; scalar_t__ fillCount; void* buffer; } ;
typedef TYPE_1__ TPCircularBuffer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__*,int,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_6 (int ,scalar_t__*,int,int ,int ,int ,scalar_t__,int ,int *,int *,int ) ;

bool FUNC_7(TPCircularBuffer *VAR_3, int VAR_4) {


    int VAR_5 = 3;
    while ( 1 ) {

        VAR_3->length = FUNC_3(VAR_4);



        vm_address_t VAR_6;
        kern_return_t VAR_7 = FUNC_4(FUNC_0(),
                                           &VAR_6,
                                           VAR_3->length * 2,
                                           VAR_1);
        if ( VAR_7 != VAR_0 ) {
            if ( VAR_5-- == 0 ) {
                FUNC_2(VAR_7, "Buffer allocation");
                return 0;
            }

            continue;
        }


        VAR_7 = FUNC_5(FUNC_0(),
                               VAR_6 + VAR_3->length,
                               VAR_3->length);
        if ( VAR_7 != VAR_0 ) {
            if ( VAR_5-- == 0 ) {
                FUNC_2(VAR_7, "Buffer deallocation");
                return 0;
            }

            FUNC_5(FUNC_0(), VAR_6, VAR_3->length);
            continue;
        }


        vm_address_t VAR_8 = VAR_6 + VAR_3->length;
        vm_prot_t VAR_9, VAR_10;
        VAR_7 = FUNC_6(FUNC_0(),
                          &VAR_8,
                          VAR_3->length,
                          0,
                          0,
                          FUNC_0(),
                          VAR_6,
                          0,
                          &VAR_9,
                          &VAR_10,
                          VAR_2);
        if ( VAR_7 != VAR_0 ) {
            if ( VAR_5-- == 0 ) {
                FUNC_2(VAR_7, "Remap buffer memory");
                return 0;
            }

            FUNC_5(FUNC_0(), VAR_6, VAR_3->length);
            continue;
        }

        if ( VAR_8 != VAR_6+VAR_3->length ) {

            if ( VAR_5-- == 0 ) {
                FUNC_1("Couldn't map buffer memory to end of buffer\n");
                return 0;
            }

            FUNC_5(FUNC_0(), VAR_8, VAR_3->length);
            FUNC_5(FUNC_0(), VAR_6, VAR_3->length);
            continue;
        }

        VAR_3->buffer = (void*)VAR_6;
        VAR_3->fillCount = 0;
        VAR_3->head = VAR_3->tail = 0;

        return 1;
    }
    return 0;
}
