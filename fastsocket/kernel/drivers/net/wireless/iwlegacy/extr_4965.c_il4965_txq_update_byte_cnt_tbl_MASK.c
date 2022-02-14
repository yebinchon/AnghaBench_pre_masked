
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int id; int write_ptr; } ;
struct il_tx_queue {TYPE_2__ q; } ;
struct TYPE_3__ {struct il4965_scd_bc_tbl* addr; } ;
struct il_priv {TYPE_1__ scd_bc_tbls; } ;
struct il4965_scd_bc_tbl {void** tfd_offset; } ;
typedef void* __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct il_priv *VAR_4, struct il_tx_queue *VAR_5,
          u16 VAR_6)
{
 struct il4965_scd_bc_tbl *VAR_7 = VAR_4->scd_bc_tbls.addr;
 int VAR_8 = VAR_5->q.id;
 int VAR_9 = VAR_5->q.write_ptr;
 int VAR_10 = VAR_6 + VAR_0 + VAR_1;
 __le16 VAR_11;

 FUNC_0(VAR_10 > 0xFFF || VAR_9 >= VAR_3);

 VAR_11 = FUNC_1(VAR_10 & 0xFFF);

 VAR_7[VAR_8].tfd_offset[VAR_9] = VAR_11;


 if (VAR_9 < VAR_2)
  VAR_7[VAR_8].tfd_offset[VAR_3 + VAR_9] =
      VAR_11;
}
