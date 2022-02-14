
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_dp_link_train_info {int radeon_connector; int enc_id; int dp_clock; int rdev; int encoder; int use_dpencoder; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct radeon_dp_link_train_info *VAR_5, int VAR_6)
{
 int VAR_7 = 0;


 if (FUNC_0(VAR_5->rdev) || !VAR_5->use_dpencoder) {
  switch (VAR_6) {
  case 130:
   VAR_7 = VAR_1;
   break;
  case 129:
   VAR_7 = VAR_2;
   break;
  case 128:
   VAR_7 = VAR_3;
   break;
  }
  FUNC_1(VAR_5->encoder, VAR_7, 0);
 } else {
  switch (VAR_6) {
  case 130:
   VAR_7 = 0;
   break;
  case 129:
   VAR_7 = 1;
   break;
  }
  FUNC_2(VAR_5->rdev, VAR_0,
       VAR_5->dp_clock, VAR_5->enc_id, VAR_7);
 }


 FUNC_3(VAR_5->radeon_connector, VAR_4, VAR_6);
}
