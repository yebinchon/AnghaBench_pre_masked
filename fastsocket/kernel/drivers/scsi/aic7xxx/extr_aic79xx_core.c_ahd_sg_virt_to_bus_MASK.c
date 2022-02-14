
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct scb {scalar_t__ sg_list_busaddr; scalar_t__ sg_list; } ;
struct ahd_softc {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ FUNC_0 (struct ahd_softc*) ;

__attribute__((used)) static uint32_t
FUNC_1(struct ahd_softc *VAR_0, struct scb *VAR_1, void *VAR_2)
{
 dma_addr_t VAR_3;


 VAR_3 = ((uint8_t *)VAR_2 - (uint8_t *)VAR_1->sg_list)
    - FUNC_0(VAR_0);

 return (VAR_1->sg_list_busaddr + VAR_3);
}
