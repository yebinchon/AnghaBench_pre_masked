
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int diseq_flags; int type_flags; scalar_t__ dst_type; int* rx_tuna; int decode_freq; int decode_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (struct dst_state*,int ) ;
 int FUNC_3 (struct dst_state*,int*,int) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_4(struct dst_state *VAR_11)
{
 int VAR_12;

 if ((VAR_11->diseq_flags & VAR_0) == 0)
  return 0;
 VAR_11->diseq_flags &= ~(VAR_8);
 if (!FUNC_2(VAR_11, VAR_9))
  return -VAR_6;
 if ((VAR_11->type_flags & VAR_3) &&
  !(VAR_11->dst_type == VAR_4))

  VAR_12 = FUNC_3(VAR_11, VAR_11->rx_tuna, 10);
 else
  VAR_12 = FUNC_3(VAR_11, &VAR_11->rx_tuna[2], VAR_7);
 if (VAR_12 < 0) {
  FUNC_0(VAR_10, VAR_1, 1, "read not successful");
  return VAR_12;
 }
 if ((VAR_11->type_flags & VAR_3) &&
    !(VAR_11->dst_type == VAR_4)) {

  if (VAR_11->rx_tuna[9] != FUNC_1(&VAR_11->rx_tuna[0], 9)) {
   FUNC_0(VAR_10, VAR_2, 1, "checksum failure ? ");
   return -VAR_6;
  }
 } else {
  if (VAR_11->rx_tuna[9] != FUNC_1(&VAR_11->rx_tuna[2], 7)) {
   FUNC_0(VAR_10, VAR_2, 1, "checksum failure? ");
   return -VAR_6;
  }
 }
 if (VAR_11->rx_tuna[2] == 0 && VAR_11->rx_tuna[3] == 0)
  return 0;
 if (VAR_11->dst_type == VAR_5) {
  VAR_11->decode_freq = ((VAR_11->rx_tuna[2] & 0x7f) << 8) + VAR_11->rx_tuna[3];
 } else {
  VAR_11->decode_freq = ((VAR_11->rx_tuna[2] & 0x7f) << 16) + (VAR_11->rx_tuna[3] << 8) + VAR_11->rx_tuna[4];
 }
 VAR_11->decode_freq = VAR_11->decode_freq * 1000;
 VAR_11->decode_lock = 1;
 VAR_11->diseq_flags |= VAR_8;

 return 1;
}
