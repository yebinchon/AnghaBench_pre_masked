
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ene_device {int tx_sample_pulse; int tx_sample; scalar_t__ tx_pos; scalar_t__ tx_len; int tx_done; int tx_reg; int tx_sim_timer; int * tx_buffer; int tx_complete; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct ene_device*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct ene_device*,int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int,unsigned int) ;
 int FUNC_7 (int *,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_8(struct ene_device *VAR_8)
{
 u8 VAR_9;
 u32 VAR_10;
 bool VAR_11 = VAR_8->tx_sample_pulse;

 if (!VAR_8->tx_buffer) {
  FUNC_4("TX: BUG: attempt to transmit NULL buffer");
  return;
 }


 if (!VAR_8->tx_sample) {

  if (VAR_8->tx_pos == VAR_8->tx_len) {
   if (!VAR_8->tx_done) {
    FUNC_2("TX: no more data to send");
    VAR_8->tx_done = 1;
    goto exit;
   } else {
    FUNC_2("TX: last sample sent by hardware");
    FUNC_3(VAR_8);
    FUNC_1(&VAR_8->tx_complete);
    return;
   }
  }

  VAR_10 = VAR_8->tx_buffer[VAR_8->tx_pos++];
  VAR_8->tx_sample_pulse = !VAR_8->tx_sample_pulse;

  VAR_8->tx_sample = FUNC_0(VAR_10, VAR_6);

  if (!VAR_8->tx_sample)
   VAR_8->tx_sample = 1;
 }

 VAR_9 = FUNC_6(VAR_8->tx_sample , (unsigned int)VAR_2);
 VAR_8->tx_sample -= VAR_9;

 FUNC_2("TX: sample %8d (%s)", VAR_9 * VAR_6,
      VAR_11 ? "pulse" : "space");
 if (VAR_11)
  VAR_9 |= VAR_3;

 FUNC_5(VAR_8,
  VAR_8->tx_reg ? VAR_1 : VAR_0, VAR_9);

 VAR_8->tx_reg = !VAR_8->tx_reg;
exit:

 if (VAR_7)
  FUNC_7(&VAR_8->tx_sim_timer, VAR_5 + VAR_4 / 500);
}
