
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* dimm_map; int* pin_map; } ;
struct jbusmc_obp_mem_layout {char** dimm_labels; TYPE_1__ map; } ;
struct chmc_obp_mem_layout {char** dimm_labels; struct chmc_obp_map* map; scalar_t__ symmetric; } ;
struct chmc_obp_map {int* dimm_map; int* pin_map; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int VAR_7, unsigned long VAR_8,
     int *VAR_9, char **VAR_10, void *VAR_11,
     int VAR_12)
{
 int VAR_13 = FUNC_0(VAR_7);
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;

 if (VAR_6 == VAR_2) {
  struct jbusmc_obp_mem_layout *VAR_18 = VAR_11;


  VAR_14 = VAR_13;
  VAR_15 = (VAR_0 - VAR_14);
  VAR_16 = VAR_15 / 8;
  VAR_17 = VAR_18->map.dimm_map[VAR_16];
  VAR_17 = ((VAR_17 >> ((7 - (VAR_15 & 7)))) & 1);
  *VAR_10 = VAR_18->dimm_labels[VAR_12 + VAR_17];
  *VAR_9 = VAR_18->map.pin_map[VAR_14];
 } else {
  struct chmc_obp_mem_layout *VAR_19 = VAR_11;
  struct chmc_obp_map *VAR_20;
  int VAR_21;


  if (VAR_19->symmetric)
   VAR_20 = &VAR_19->map[0];
  else
   VAR_20 = &VAR_19->map[1];

  VAR_21 = (VAR_8 & VAR_1) / VAR_4;
  VAR_14 = ((3 - VAR_21) * VAR_3) + VAR_13;
  VAR_15 = (VAR_5 - VAR_14);
  VAR_16 = VAR_15 >> 2;
  VAR_17 = VAR_20->dimm_map[VAR_16];
  VAR_17 = ((VAR_17 >> ((3 - (VAR_15 & 3)) << 1)) & 0x3);
  *VAR_10 = VAR_19->dimm_labels[VAR_12 + VAR_17];
  *VAR_9 = VAR_20->pin_map[VAR_14];
 }
}
