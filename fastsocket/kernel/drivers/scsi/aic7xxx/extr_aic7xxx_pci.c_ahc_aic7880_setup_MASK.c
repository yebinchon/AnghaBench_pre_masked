
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ahc_softc {char channel; int bugs; int instruction_ram_size; int features; int chip; int dev_softc; } ;
typedef int ahc_dev_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct ahc_softc *VAR_7)
{
 ahc_dev_softc_t VAR_8;
 uint8_t VAR_9;

 VAR_8 = VAR_7->dev_softc;
 VAR_7->channel = 'A';
 VAR_7->chip = VAR_0;
 VAR_7->features = VAR_1;
 VAR_7->bugs |= VAR_5;
 VAR_9 = FUNC_0(VAR_8, VAR_6, 1);
 if (VAR_9 >= 1) {
  VAR_7->bugs |= VAR_3;
 } else {
  VAR_7->bugs |= VAR_2|VAR_4;
 }
 VAR_7->instruction_ram_size = 512;
 return (0);
}
