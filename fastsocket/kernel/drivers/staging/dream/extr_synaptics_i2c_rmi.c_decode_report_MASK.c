
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct synaptics_ts_data {int flags; int* max; int** snap_state; int* snap_down_off; int* snap_down; int* snap_up_off; int* snap_up; int* snap_down_on; int* snap_up_on; int input_dev; } ;


 int VAR_0 ;
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
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct synaptics_ts_data *VAR_11, u8 *VAR_12)
{
 int VAR_13[2][2];
 int VAR_14, VAR_15;
 int VAR_16 = 2;
 int VAR_17 = VAR_12[1];
 int VAR_18 = VAR_12[0] >> 4;
 int VAR_19 = VAR_12[0] & 7;
 int VAR_20;

 for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
  u32 VAR_21 = VAR_8;
  for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {
   int VAR_22 = VAR_12[VAR_16 + 1];
   VAR_22 |= (u16)(VAR_12[VAR_16] & 0x1f) << 8;
   if (VAR_11->flags & VAR_21)
    VAR_22 = VAR_11->max[VAR_15] - VAR_22;
   if (VAR_11->flags & VAR_9) {
    if (VAR_11->snap_state[VAR_14][VAR_15]) {
     if (VAR_22 <= VAR_11->snap_down_off[VAR_15])
      VAR_22 = VAR_11->snap_down[VAR_15];
     else if (VAR_22 >= VAR_11->snap_up_off[VAR_15])
      VAR_22 = VAR_11->snap_up[VAR_15];
     else
      VAR_11->snap_state[VAR_14][VAR_15] = 0;
    } else {
     if (VAR_22 <= VAR_11->snap_down_on[VAR_15]) {
      VAR_22 = VAR_11->snap_down[VAR_15];
      VAR_11->snap_state[VAR_14][VAR_15] = 1;
     } else if (VAR_22 >= VAR_11->snap_up_on[VAR_15]) {
      VAR_22 = VAR_11->snap_up[VAR_15];
      VAR_11->snap_state[VAR_14][VAR_15] = 1;
     }
    }
   }
   VAR_13[VAR_14][VAR_15] = VAR_22;
   VAR_16 += 2;
   VAR_21 <<= 1;
  }
  VAR_16 += 2;
  if (VAR_11->flags & VAR_10)
   FUNC_3(VAR_13[VAR_14][0], VAR_13[VAR_14][1]);
 }
 if (VAR_17) {
  FUNC_0(VAR_11->input_dev, VAR_4, VAR_13[0][0]);
  FUNC_0(VAR_11->input_dev, VAR_5, VAR_13[0][1]);
 }
 FUNC_0(VAR_11->input_dev, VAR_2, VAR_17);
 FUNC_0(VAR_11->input_dev, VAR_3, VAR_18);
 FUNC_1(VAR_11->input_dev, VAR_7, VAR_19);
 VAR_20 = VAR_19 > 1 && VAR_19 != 7;
 FUNC_1(VAR_11->input_dev, VAR_6, VAR_20);
 if (VAR_20) {
  FUNC_0(VAR_11->input_dev, VAR_0, VAR_13[1][0]);
  FUNC_0(VAR_11->input_dev, VAR_1, VAR_13[1][1]);
 }
 FUNC_2(VAR_11->input_dev);
}
