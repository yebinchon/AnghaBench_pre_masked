
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct ether_header {int ether_type; int * ether_dhost; } ;



__attribute__((used)) static uint32_t
FUNC_0(struct ether_header * VAR_0)
{
    uint32_t VAR_1;


    VAR_1 = (*((uint16_t *)&VAR_0->ether_dhost[4]) << 16)
 | VAR_0->ether_type;
    VAR_1 ^= *((uint32_t *)&VAR_0->ether_dhost[0]);
    return (VAR_1);
}
