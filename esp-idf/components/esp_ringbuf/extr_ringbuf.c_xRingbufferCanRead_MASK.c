
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Ringbuffer_t ;
typedef scalar_t__ RingbufHandle_t ;
typedef scalar_t__ QueueSetMemberHandle_t ;
typedef int BaseType_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;

BaseType_t FUNC_2(RingbufHandle_t VAR_2, QueueSetMemberHandle_t VAR_3)
{

    Ringbuffer_t *VAR_4 = (Ringbuffer_t *)VAR_2;
    FUNC_0(VAR_4);
    return (FUNC_1(VAR_4) == VAR_3) ? VAR_1 : VAR_0;
}
