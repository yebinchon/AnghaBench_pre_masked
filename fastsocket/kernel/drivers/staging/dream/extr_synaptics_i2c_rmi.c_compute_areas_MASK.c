
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct synaptics_ts_data {int flags; int* snap_down; int* snap_up; int* snap_down_on; int* snap_down_off; int* snap_up_on; int* snap_up_off; int input_dev; } ;
struct synaptics_i2c_rmi_platform_data {int inactive_left; int inactive_right; int inactive_top; int inactive_bottom; int snap_left_on; int snap_left_off; int snap_right_on; int snap_right_off; int snap_top_on; int snap_top_off; int snap_bottom_on; int snap_bottom_off; int fuzz_x; int fuzz_y; int fuzz_p; int fuzz_w; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int,int,int,int ) ;
 int FUNC_1 (char*,int,int,...) ;

__attribute__((used)) static void FUNC_2(struct synaptics_ts_data *VAR_7,
     struct synaptics_i2c_rmi_platform_data *VAR_8,
     u16 VAR_9, u16 VAR_10)
{
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27 = !!(VAR_7->flags & VAR_6);

 VAR_11 = VAR_8->inactive_left;
 VAR_12 = VAR_8->inactive_right;
 VAR_13 = VAR_8->inactive_top;
 VAR_14 = VAR_8->inactive_bottom;
 VAR_15 = VAR_8->snap_left_on;
 VAR_16 = VAR_8->snap_left_off;
 VAR_17 = VAR_8->snap_right_on;
 VAR_18 = VAR_8->snap_right_off;
 VAR_19 = VAR_8->snap_top_on;
 VAR_20 = VAR_8->snap_top_off;
 VAR_21 = VAR_8->snap_bottom_on;
 VAR_22 = VAR_8->snap_bottom_off;
 VAR_23 = VAR_8->fuzz_x;
 VAR_24 = VAR_8->fuzz_y;
 VAR_25 = VAR_8->fuzz_p;
 VAR_26 = VAR_8->fuzz_w;

 VAR_11 = VAR_11 * VAR_9 / 0x10000;
 VAR_12 = VAR_12 * VAR_9 / 0x10000;
 VAR_13 = VAR_13 * VAR_10 / 0x10000;
 VAR_14 = VAR_14 * VAR_10 / 0x10000;
 VAR_15 = VAR_15 * VAR_9 / 0x10000;
 VAR_16 = VAR_16 * VAR_9 / 0x10000;
 VAR_17 = VAR_17 * VAR_9 / 0x10000;
 VAR_18 = VAR_18 * VAR_9 / 0x10000;
 VAR_19 = VAR_19 * VAR_10 / 0x10000;
 VAR_20 = VAR_20 * VAR_10 / 0x10000;
 VAR_21 = VAR_21 * VAR_10 / 0x10000;
 VAR_22 = VAR_22 * VAR_10 / 0x10000;
 VAR_23 = VAR_23 * VAR_9 / 0x10000;
 VAR_24 = VAR_24 * VAR_10 / 0x10000;


 VAR_7->snap_down[VAR_27] = -VAR_11;
 VAR_7->snap_up[VAR_27] = VAR_9 + VAR_12;
 VAR_7->snap_down[!VAR_27] = -VAR_13;
 VAR_7->snap_up[!VAR_27] = VAR_10 + VAR_14;
 VAR_7->snap_down_on[VAR_27] = VAR_15;
 VAR_7->snap_down_off[VAR_27] = VAR_16;
 VAR_7->snap_up_on[VAR_27] = VAR_9 - VAR_17;
 VAR_7->snap_up_off[VAR_27] = VAR_9 - VAR_18;
 VAR_7->snap_down_on[!VAR_27] = VAR_19;
 VAR_7->snap_down_off[!VAR_27] = VAR_20;
 VAR_7->snap_up_on[!VAR_27] = VAR_10 - VAR_21;
 VAR_7->snap_up_off[!VAR_27] = VAR_10 - VAR_22;
 FUNC_1("synaptics_ts_probe: max_x %d, max_y %d\n", VAR_9, VAR_10);
 FUNC_1("synaptics_ts_probe: inactive_x %d %d, inactive_y %d %d\n",
        VAR_11, VAR_12,
        VAR_13, VAR_14);
 FUNC_1("synaptics_ts_probe: snap_x %d-%d %d-%d, snap_y %d-%d %d-%d\n",
        VAR_15, VAR_16, VAR_17, VAR_18,
        VAR_19, VAR_20, VAR_21, VAR_22);

 FUNC_0(VAR_7->input_dev, VAR_4,
        -VAR_11, VAR_9 + VAR_12,
        VAR_23, 0);
 FUNC_0(VAR_7->input_dev, VAR_5,
        -VAR_13, VAR_10 + VAR_14,
        VAR_24, 0);
 FUNC_0(VAR_7->input_dev, VAR_2, 0, 255, VAR_25, 0);
 FUNC_0(VAR_7->input_dev, VAR_3, 0, 15, VAR_26, 0);
 FUNC_0(VAR_7->input_dev, VAR_0, -VAR_11,
        VAR_9 + VAR_12, VAR_23, 0);
 FUNC_0(VAR_7->input_dev, VAR_1, -VAR_13,
        VAR_10 + VAR_14, VAR_24, 0);
}
