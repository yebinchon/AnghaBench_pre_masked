
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int romsize; scalar_t__ rom; } ;
struct TYPE_7__ {int ssp1601; int * dram; int * iram_rom; } ;
struct TYPE_6__ {int * ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_1__* VAR_17 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 () ;
 TYPE_2__* VAR_18 ;
 int VAR_19 ;
 TYPE_1__* VAR_20 ;

void FUNC_4(void)
{
 int VAR_21;

 FUNC_1(VAR_0, "SVP startup");

 VAR_21 = FUNC_0(VAR_4.romsize + sizeof(*VAR_18));
 if (VAR_21 != 0) {
  FUNC_1(VAR_0|VAR_1, "OOM for SVP data");
  return;
 }

 VAR_18 = (void *) ((char *)VAR_4.rom + VAR_4.romsize);
 FUNC_2(VAR_18, 0, sizeof(*VAR_18));


 VAR_19 = 0;
 VAR_6 = VAR_15;
 VAR_8 = VAR_12;
 VAR_11 = VAR_16;
 VAR_9 = VAR_14;
 VAR_7 = VAR_13;


 VAR_20[0].ptr = VAR_18->iram_rom;
 VAR_20[1].ptr = VAR_18->dram;
 VAR_20[2].ptr = &VAR_18->ssp1601;
 VAR_17 = VAR_20;
 VAR_5 |= VAR_2;
}
