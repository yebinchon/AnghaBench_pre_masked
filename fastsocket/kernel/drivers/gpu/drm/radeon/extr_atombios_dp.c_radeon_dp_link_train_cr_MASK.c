
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct radeon_dp_link_train_info {int* train_set; int tries; int dp_lane_count; int link_status; int radeon_connector; int dpcd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int,int*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct radeon_dp_link_train_info*,int ) ;
 int FUNC_8 (struct radeon_dp_link_train_info*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct radeon_dp_link_train_info *VAR_5)
{
 bool VAR_6;
  u8 VAR_7;
 int VAR_8;

 FUNC_7(VAR_5, VAR_0);
 FUNC_5(VAR_5->train_set, 0, 4);
 FUNC_8(VAR_5);

 FUNC_9(400);


 VAR_6 = 0;
 VAR_5->tries = 0;
 VAR_7 = 0xff;
 while (1) {
  FUNC_4(VAR_5->dpcd);

  if (!FUNC_6(VAR_5->radeon_connector, VAR_5->link_status)) {
   FUNC_1("displayport link status failed\n");
   break;
  }

  if (FUNC_3(VAR_5->link_status, VAR_5->dp_lane_count)) {
   VAR_6 = 1;
   break;
  }

  for (VAR_8 = 0; VAR_8 < VAR_5->dp_lane_count; VAR_8++) {
   if ((VAR_5->train_set[VAR_8] & VAR_1) == 0)
    break;
  }
  if (VAR_8 == VAR_5->dp_lane_count) {
   FUNC_1("clock recovery reached max voltage\n");
   break;
  }

  if ((VAR_5->train_set[0] & VAR_4) == VAR_7) {
   ++VAR_5->tries;
   if (VAR_5->tries == 5) {
    FUNC_1("clock recovery tried 5 times\n");
    break;
   }
  } else
   VAR_5->tries = 0;

  VAR_7 = VAR_5->train_set[0] & VAR_4;


  FUNC_2(VAR_5->link_status, VAR_5->dp_lane_count, VAR_5->train_set);

  FUNC_8(VAR_5);
 }
 if (!VAR_6) {
  FUNC_1("clock recovery failed\n");
  return -1;
 } else {
  FUNC_0("clock recovery at voltage %d pre-emphasis %d\n",
     VAR_5->train_set[0] & VAR_4,
     (VAR_5->train_set[0] & VAR_2) >>
     VAR_3);
  return 0;
 }
}
