
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {char channel; int instruction_ram_size; int bugs; int flags; int features; int chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct ahc_softc *VAR_4)
{

 VAR_4->channel = 'A';
 VAR_4->chip = VAR_0;
 VAR_4->features = VAR_1;
 VAR_4->flags |= VAR_2;
 VAR_4->bugs |= VAR_3;
 VAR_4->instruction_ram_size = 1024;
 return (0);
}
