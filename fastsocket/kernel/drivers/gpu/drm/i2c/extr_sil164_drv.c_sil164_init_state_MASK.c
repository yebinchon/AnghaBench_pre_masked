
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sil164_encoder_params {int input_skew; int duallink_skew; scalar_t__ pll_filter; scalar_t__ input_dual; scalar_t__ input_width; scalar_t__ input_edge; } ;
struct i2c_client {int dummy; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct i2c_client *VAR_20,
    struct sil164_encoder_params *VAR_21,
    bool VAR_22)
{
 FUNC_0(VAR_20, VAR_0,
       VAR_3 |
       VAR_5 |
       (VAR_21->input_edge ? VAR_2 : 0) |
       (VAR_21->input_width ? VAR_4 : 0) |
       (VAR_21->input_dual ? VAR_1 : 0));

 FUNC_0(VAR_20, VAR_13,
       VAR_14 |
       VAR_15);

 FUNC_0(VAR_20, VAR_6,
       (VAR_21->input_skew ? VAR_7 : 0) |
       (((VAR_21->input_skew + 4) & 0x7)
        << VAR_8));

 FUNC_0(VAR_20, VAR_9,
       VAR_12 |
       (VAR_21->pll_filter ? 0 : VAR_10) |
       (4 << VAR_11));

 FUNC_0(VAR_20, VAR_19, 0);

 if (VAR_22)
  FUNC_0(VAR_20, VAR_16,
        VAR_17 |
        (((VAR_21->duallink_skew + 4) & 0x7)
         << VAR_18));
 else
  FUNC_0(VAR_20, VAR_16, 0);
}
