
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct dbg_port {int started; int nbr; int baudrate; char parity; int bits; int instance; } ;
struct TYPE_7__ {int en; int dma_mode; int div; void* data_bits; void* par; void* par_en; int base_freq; int member_0; } ;
typedef TYPE_1__ reg_ser_rw_tr_dma_en ;
typedef TYPE_1__ reg_ser_rw_tr_ctrl ;
typedef TYPE_1__ reg_ser_rw_tr_baud_div ;
typedef TYPE_1__ reg_ser_rw_rec_ctrl ;
typedef TYPE_1__ reg_ser_rw_rec_baud_div ;


 int FUNC_0 (int ,int ,int ,TYPE_1__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void
FUNC_2(struct dbg_port* VAR_16)
{
 if (!VAR_16)
  return;

 if (VAR_16->started)
  return;
 VAR_16->started = 1;

 if (VAR_16->nbr == 1)
  FUNC_1(VAR_0);
 else if (VAR_16->nbr == 2)
  FUNC_1(VAR_1);
 else if (VAR_16->nbr == 3)
  FUNC_1(VAR_2);






 reg_ser_rw_tr_ctrl VAR_17 = {0};
 reg_ser_rw_tr_dma_en VAR_18 = {0};

 reg_ser_rw_rec_ctrl VAR_19 = {0};
 reg_ser_rw_tr_baud_div VAR_20 = {0};
 reg_ser_rw_rec_baud_div VAR_21 = {0};

 VAR_17.base_freq = VAR_19.base_freq = VAR_6;
 VAR_18.en = VAR_19.dma_mode = VAR_7;
 VAR_20.div = VAR_21.div = 29493000 / VAR_16->baudrate / 8;
 VAR_17.en = VAR_19.en = 1;

 if (VAR_16->parity == 'O')
 {
  VAR_17.par_en = VAR_9;
  VAR_17.par = VAR_8;
  VAR_19.par_en = VAR_9;
  VAR_19.par = VAR_8;
 }
 else if (VAR_16->parity == 'E')
 {
  VAR_17.par_en = VAR_9;
  VAR_17.par = VAR_5;
  VAR_19.par_en = VAR_9;
  VAR_19.par = VAR_8;
 }

 if (VAR_16->bits == 7)
 {
  VAR_17.data_bits = VAR_4;
  VAR_19.data_bits = VAR_4;
 }

 FUNC_0 (VAR_15, VAR_16->instance, VAR_12, VAR_20);
 FUNC_0 (VAR_15, VAR_16->instance, VAR_10, VAR_21);
 FUNC_0 (VAR_15, VAR_16->instance, VAR_14, VAR_18);
 FUNC_0 (VAR_15, VAR_16->instance, VAR_13, VAR_17);
 FUNC_0 (VAR_15, VAR_16->instance, VAR_11, VAR_19);
}
