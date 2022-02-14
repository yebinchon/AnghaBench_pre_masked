
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int dummy; } ;
struct sddr09_card_info {int flags; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct us_data*,unsigned char*) ;

__attribute__((used)) static int
FUNC_2(struct us_data *VAR_2, struct sddr09_card_info *VAR_3) {
 int VAR_4;
 unsigned char VAR_5;

 VAR_4 = FUNC_1(VAR_2, &VAR_5);
 if (VAR_4) {
  FUNC_0("sddr09_get_wp: read_status fails\n");
  return VAR_4;
 }
 FUNC_0("sddr09_get_wp: status 0x%02X", VAR_5);
 if ((VAR_5 & 0x80) == 0) {
  VAR_3->flags |= VAR_1;
  FUNC_0(" WP");
 }
 if (VAR_5 & 0x40)
  FUNC_0(" Ready");
 if (VAR_5 & VAR_0)
  FUNC_0(" Suspended");
 if (VAR_5 & 0x1)
  FUNC_0(" Error");
 FUNC_0("\n");
 return 0;
}
