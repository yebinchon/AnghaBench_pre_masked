
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ahd_softc {scalar_t__* tags; TYPE_1__* bshs; } ;
typedef scalar_t__ port ;
struct TYPE_2__ {scalar_t__ ioport; scalar_t__ maddr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;

uint8_t
FUNC_3(struct ahd_softc * VAR_1, long VAR_2)
{
 uint8_t VAR_3;

 if (VAR_1->tags[0] == VAR_0) {
  VAR_3 = FUNC_2(VAR_1->bshs[0].maddr + VAR_2);
 } else {
  VAR_3 = FUNC_0(VAR_1->bshs[(VAR_2) >> 8].ioport + ((VAR_2) & 0xFF));
 }
 FUNC_1();
 return (VAR_3);
}
