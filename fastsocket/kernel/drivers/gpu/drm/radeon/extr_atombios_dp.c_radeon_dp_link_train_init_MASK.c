
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct radeon_encoder_atom_dig {scalar_t__ panel_mode; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_dp_link_train_info {int* dpcd; int dp_lane_count; int radeon_connector; int enc_id; int dp_clock; int rdev; int encoder; int use_dpencoder; TYPE_1__* connector; } ;
struct TYPE_2__ {scalar_t__ connector_type; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 struct radeon_encoder* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct radeon_dp_link_train_info *VAR_17)
{
 struct radeon_encoder *VAR_18 = FUNC_5(VAR_17->encoder);
 struct radeon_encoder_atom_dig *VAR_19 = VAR_18->enc_priv;
 u8 VAR_20;


 if (VAR_17->dpcd[0] >= 0x11)
  FUNC_4(VAR_17->radeon_connector,
          VAR_11, VAR_12);


 if (VAR_17->dpcd[3] & 0x1)
  FUNC_4(VAR_17->radeon_connector,
          VAR_2, VAR_13);
 else
  FUNC_4(VAR_17->radeon_connector,
          VAR_2, 0);

 if ((VAR_17->connector->connector_type == VAR_16) &&
     (VAR_19->panel_mode == VAR_10)) {
  FUNC_4(VAR_17->radeon_connector, VAR_4, 1);
 }


 VAR_20 = VAR_17->dp_lane_count;
 if (VAR_17->dpcd[VAR_3] >= 0x11 &&
     VAR_17->dpcd[VAR_9] & VAR_5)
  VAR_20 |= VAR_6;
 FUNC_4(VAR_17->radeon_connector, VAR_7, VAR_20);


 VAR_20 = FUNC_2(VAR_17->dp_clock);
 FUNC_4(VAR_17->radeon_connector, VAR_8, VAR_20);


 if (FUNC_0(VAR_17->rdev) || !VAR_17->use_dpencoder)
  FUNC_1(VAR_17->encoder,
        VAR_1, 0);
 else
  FUNC_3(VAR_17->rdev, VAR_0,
       VAR_17->dp_clock, VAR_17->enc_id, 0);


 FUNC_4(VAR_17->radeon_connector,
         VAR_15,
         VAR_14);

 return 0;
}
