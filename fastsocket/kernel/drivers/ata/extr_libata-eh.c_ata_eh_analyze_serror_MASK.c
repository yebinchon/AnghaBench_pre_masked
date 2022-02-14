
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int serror; unsigned int err_mask; unsigned int action; } ;
struct ata_eh_context {TYPE_1__ i; } ;
struct ata_link {int flags; struct ata_eh_context eh_context; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct ata_link*) ;

__attribute__((used)) static void FUNC_2(struct ata_link *VAR_11)
{
 struct ata_eh_context *VAR_12 = &VAR_11->eh_context;
 u32 VAR_13 = VAR_12->i.serror;
 unsigned int VAR_14 = 0, VAR_15 = 0;
 u32 VAR_16;

 if (VAR_13 & (VAR_8 | VAR_5)) {
  VAR_14 |= VAR_0;
  VAR_15 |= VAR_3;
 }
 if (VAR_13 & VAR_10) {
  VAR_14 |= VAR_1;
  VAR_15 |= VAR_3;
 }
 if (VAR_13 & VAR_7) {
  VAR_14 |= VAR_2;
  VAR_15 |= VAR_3;
 }






 VAR_16 = 0;

 if (!(VAR_11->flags & VAR_4) || FUNC_1(VAR_11))
  VAR_16 = VAR_9 | VAR_6;
 else
  VAR_16 = VAR_9;

 if (VAR_13 & VAR_16)
  FUNC_0(&VAR_12->i);

 VAR_12->i.err_mask |= VAR_14;
 VAR_12->i.action |= VAR_15;
}
