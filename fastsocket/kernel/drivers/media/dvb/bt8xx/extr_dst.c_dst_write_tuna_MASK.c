
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dvb_frontend {struct dst_state* demodulator_priv; } ;
struct dst_state {scalar_t__ type_flags; scalar_t__ dst_type; int diseq_flags; int dst_mutex; void** tx_tuna; scalar_t__ decode_snr; scalar_t__ decode_strength; scalar_t__ decode_lock; scalar_t__ decode_freq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,int,char*,...) ;
 void* FUNC_1 (void**,int) ;
 scalar_t__ FUNC_2 (struct dst_state*) ;
 int FUNC_3 (struct dst_state*) ;
 scalar_t__ FUNC_4 (struct dst_state*) ;
 int FUNC_5 (struct dvb_frontend*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct dst_state*,scalar_t__*,int ) ;
 int VAR_13 ;
 int FUNC_9 (struct dst_state*,void**,int) ;

__attribute__((used)) static int FUNC_10(struct dvb_frontend *VAR_14)
{
 struct dst_state *VAR_15 = VAR_14->demodulator_priv;
 int VAR_16;
 u8 VAR_17;

 FUNC_0(VAR_13, VAR_3, 1, "type_flags 0x%x ", VAR_15->type_flags);
 VAR_15->decode_freq = 0;
 VAR_15->decode_lock = VAR_15->decode_strength = VAR_15->decode_snr = 0;
 if (VAR_15->dst_type == VAR_6) {
  if (!(VAR_15->diseq_flags & VAR_11))
   FUNC_5(VAR_14, VAR_12);
 }
 VAR_15->diseq_flags &= ~(VAR_10 | VAR_1);
 FUNC_6(&VAR_15->dst_mutex);
 if ((FUNC_2(VAR_15)) < 0) {
  FUNC_0(VAR_13, VAR_2, 1, "DST Communication initialization failed.");
  goto error;
 }

 if ((VAR_15->type_flags & VAR_4) &&
  (!(VAR_15->dst_type == VAR_5))) {

  VAR_15->tx_tuna[9] = FUNC_1(&VAR_15->tx_tuna[0], 9);
  VAR_16 = FUNC_9(VAR_15, &VAR_15->tx_tuna[0], 10);
 } else {
  VAR_15->tx_tuna[9] = FUNC_1(&VAR_15->tx_tuna[2], 7);
  VAR_16 = FUNC_9(VAR_15, &VAR_15->tx_tuna[2], VAR_8);
 }
 if (VAR_16 < 0) {
  FUNC_4(VAR_15);
  FUNC_0(VAR_13, VAR_2, 1, "write not successful");
  goto werr;
 }
 if ((FUNC_4(VAR_15)) < 0) {
  FUNC_0(VAR_13, VAR_2, 1, "DST PIO disable failed !");
  goto error;
 }
 if ((FUNC_8(VAR_15, &VAR_17, VAR_9) < 0)) {
  FUNC_0(VAR_13, VAR_2, 1, "read verify not successful.");
  goto error;
 }
 if (VAR_17 != VAR_0) {
  FUNC_0(VAR_13, VAR_2, 1, "write not acknowledged 0x%02x ", VAR_17);
  goto error;
 }
 VAR_15->diseq_flags |= VAR_1;
 VAR_16 = FUNC_3(VAR_15);
werr:
 FUNC_7(&VAR_15->dst_mutex);
 return VAR_16;

error:
 FUNC_7(&VAR_15->dst_mutex);
 return -VAR_7;
}
