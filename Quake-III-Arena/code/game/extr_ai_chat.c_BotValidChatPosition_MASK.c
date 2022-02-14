
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_6__ {scalar_t__ ent; } ;
typedef TYPE_1__ bsp_trace_t ;
struct TYPE_7__ {int client; int origin; int entitynum; scalar_t__* inventory; } ;
typedef TYPE_2__ bot_state_t ;


 int FUNC_0 (TYPE_1__*,int*,int*,int*,int*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,int*,int*) ;
 int FUNC_4 (int*,int ) ;

int FUNC_5(bot_state_t *VAR_13) {
 vec3_t VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 bsp_trace_t VAR_19;


 if (FUNC_1(VAR_13)) return VAR_12;

 if (VAR_13->inventory[VAR_6] ||
  VAR_13->inventory[VAR_4] ||
  VAR_13->inventory[VAR_5] ||
  VAR_13->inventory[VAR_7] ||
  VAR_13->inventory[VAR_3]) return VAR_11;



 FUNC_2(VAR_13->origin, VAR_14);
 VAR_14[2] -= 24;
 if (FUNC_4(VAR_14,VAR_13->entitynum) & (VAR_0|VAR_1)) return VAR_11;

 FUNC_2(VAR_13->origin, VAR_14);
 VAR_14[2] += 32;
 if (FUNC_4(VAR_14,VAR_13->entitynum) & VAR_9) return VAR_11;

 FUNC_2(VAR_13->origin, VAR_15);
 FUNC_2(VAR_13->origin, VAR_16);
 VAR_15[2] += 1;
 VAR_16[2] -= 10;
 FUNC_3(VAR_10, VAR_17, VAR_18);
 FUNC_0(&VAR_19, VAR_15, VAR_17, VAR_18, VAR_16, VAR_13->client, VAR_8);
 if (VAR_19.ent != VAR_2) return VAR_11;

 return VAR_12;
}
