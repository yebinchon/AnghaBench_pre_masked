
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {scalar_t__ last_cb_index; struct command_block* cb_list; } ;
struct ipw_priv {TYPE_1__ sram_desc; } ;
struct command_block {size_t status; size_t dest_addr; size_t source_addr; size_t control; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (char*,size_t,size_t,size_t) ;

__attribute__((used)) static int FUNC_1(struct ipw_priv *VAR_11,
     u32 VAR_12,
     u32 VAR_13,
     u32 VAR_14,
     int VAR_15, int VAR_16)
{

 u32 VAR_17 = VAR_10 | VAR_8 | VAR_1 | VAR_6 |
     VAR_7 | VAR_0 | VAR_9 |
     VAR_2;
 struct command_block *VAR_18;
 u32 VAR_19 = 0;

 FUNC_0("src_address=0x%x dest_address=0x%x length=0x%x\n",
     VAR_12, VAR_13, VAR_14);

 if (VAR_11->sram_desc.last_cb_index >= VAR_5)
  return -1;

 VAR_19 = VAR_11->sram_desc.last_cb_index;
 VAR_18 = &VAR_11->sram_desc.cb_list[VAR_19];
 VAR_11->sram_desc.last_cb_index++;


 if (VAR_15)
  VAR_17 |= VAR_3;

 if (VAR_16)
  VAR_17 |= VAR_4;

 VAR_17 |= VAR_14;


 VAR_18->status = VAR_17 ^ VAR_12 ^ VAR_13;


 VAR_18->dest_addr = VAR_13;
 VAR_18->source_addr = VAR_12;


 VAR_18->control = VAR_17;

 return 0;
}
