
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int TickType_t ;
typedef int RingbufHandle_t ;
typedef scalar_t__ BaseType_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,void*,size_t,int ) ;
 scalar_t__ FUNC_2 (int ,void*,size_t,int *) ;

__attribute__((used)) static void FUNC_3(RingbufHandle_t VAR_1, const uint8_t *VAR_2, size_t VAR_3, TickType_t VAR_4, bool VAR_5)
{
    BaseType_t VAR_6;
    if (VAR_5) {
        VAR_6 = FUNC_2(VAR_1, (void *)VAR_2, VAR_3, ((void*)0));
    } else {
        VAR_6 = FUNC_1(VAR_1, (void *)VAR_2, VAR_3, VAR_4);
    }
    FUNC_0(VAR_6 == VAR_0, "Failed to send item");
}
