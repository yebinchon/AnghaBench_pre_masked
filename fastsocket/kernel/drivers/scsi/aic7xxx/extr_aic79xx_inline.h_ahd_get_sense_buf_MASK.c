
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct scb {int * sense_data; } ;
struct ahd_softc {int dummy; } ;



__attribute__((used)) static inline uint8_t *
FUNC_0(struct ahd_softc *VAR_0, struct scb *VAR_1)
{
 return (VAR_1->sense_data);
}
