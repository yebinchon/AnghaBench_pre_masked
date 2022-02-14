
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct smsc911x_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct smsc911x_data*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct smsc911x_data*) ;
 unsigned int FUNC_4 (struct smsc911x_data*,int ) ;
 int FUNC_5 (struct smsc911x_data*,int ,unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;

__attribute__((used)) static void FUNC_7(struct smsc911x_data *VAR_5,
          unsigned int VAR_6, u32 VAR_7)
{
 unsigned int VAR_8;

 FUNC_0(VAR_5);

 VAR_8 = FUNC_4(VAR_5, VAR_2);
 if (FUNC_6(VAR_8 & VAR_3)) {
  FUNC_1(VAR_1,
   "smsc911x_mac_write failed, MAC busy at entry");
  return;
 }


 FUNC_5(VAR_5, VAR_4, VAR_7);


 FUNC_5(VAR_5, VAR_2, ((VAR_6 & 0xFF) |
  VAR_3));


 VAR_8 = FUNC_4(VAR_5, VAR_0);


 if (FUNC_2(FUNC_3(VAR_5) == 0))
  return;

 FUNC_1(VAR_1,
  "smsc911x_mac_write failed, MAC busy after write");
}
