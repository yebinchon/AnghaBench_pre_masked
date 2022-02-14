
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_address_t ;
struct TYPE_4__ {int length; scalar_t__ buffer; } ;
typedef TYPE_1__ TPCircularBuffer ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(TPCircularBuffer *VAR_0) {
    FUNC_2(FUNC_0(), (vm_address_t)VAR_0->buffer, VAR_0->length * 2);
    FUNC_1(VAR_0, 0, sizeof(TPCircularBuffer));
}
