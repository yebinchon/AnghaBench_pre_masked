
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scsi_cmnd {int dummy; } ;
struct esp_cmd_entry {int flags; } ;
struct esp {int prev_cfg3; int sreg; scalar_t__ rev; int data_dma_len; int prev_soff; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct esp*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct esp *VAR_15, struct esp_cmd_entry *VAR_16,
          struct scsi_cmnd *VAR_17)
{
 int VAR_18, VAR_19, VAR_20, VAR_21;

 VAR_18 = FUNC_1(VAR_5) & VAR_6;
 if (VAR_15->prev_cfg3 & VAR_2)
  VAR_18 <<= 1;

 VAR_19 = 0;
 if (!(VAR_15->sreg & VAR_10)) {
  VAR_19 = ((unsigned int)FUNC_1(VAR_11) |
     (((unsigned int)FUNC_1(VAR_12)) << 8));
  if (VAR_15->rev == VAR_13)
   VAR_19 |= ((unsigned int)FUNC_1(VAR_14)) << 16;
 }

 VAR_20 = VAR_15->data_dma_len;
 VAR_20 -= VAR_19;

 if (!(VAR_16->flags & VAR_1))
  VAR_20 -= VAR_18;

 VAR_21 = 0;
 if (!VAR_15->prev_soff) {

  VAR_21 = 1;
 } else {
  if (VAR_15->rev == VAR_0) {
   u32 VAR_22, VAR_23;
   VAR_15->sreg = FUNC_1(VAR_8);
   VAR_23 = VAR_15->sreg & VAR_9;
   VAR_22 = FUNC_1(VAR_5);

   if ((VAR_23 == VAR_4 &&
        (VAR_22 & VAR_7)) ||
       (VAR_23 == VAR_3 &&
        (VAR_22 & VAR_6)))
    return -1;
  }
  if (!(VAR_16->flags & VAR_1))
   VAR_21 = 1;
 }

 if (VAR_21)
  FUNC_0(VAR_15);

 return VAR_20;
}
