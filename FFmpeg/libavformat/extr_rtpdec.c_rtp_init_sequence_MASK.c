
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_3__ {scalar_t__ transit; scalar_t__ jitter; scalar_t__ received_prior; scalar_t__ expected_prior; scalar_t__ received; scalar_t__ bad_seq; void* base_seq; scalar_t__ cycles; void* max_seq; } ;
typedef TYPE_1__ RTPStatistics ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(RTPStatistics *VAR_1, uint16_t VAR_2)
{
    VAR_1->max_seq = VAR_2;
    VAR_1->cycles = 0;
    VAR_1->base_seq = VAR_2 - 1;
    VAR_1->bad_seq = VAR_0 + 1;
    VAR_1->received = 0;
    VAR_1->expected_prior = 0;
    VAR_1->received_prior = 0;
    VAR_1->jitter = 0;
    VAR_1->transit = 0;
}
