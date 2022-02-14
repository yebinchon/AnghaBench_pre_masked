
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc911x_data {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (struct smsc911x_data*,int ) ;
 int FUNC_1 (struct smsc911x_data*,int ,unsigned int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct smsc911x_data *VAR_6)
{
 unsigned int VAR_7 = FUNC_0(VAR_6, VAR_0);


 VAR_7 &= (~VAR_2);
 VAR_7 |= VAR_3;
 FUNC_1(VAR_6, VAR_0, VAR_7);
 FUNC_2(10);


 VAR_7 |= VAR_1;
 FUNC_1(VAR_6, VAR_0, VAR_7);


 VAR_7 &= (~VAR_2);
 VAR_7 |= VAR_4;
 FUNC_1(VAR_6, VAR_0, VAR_7);
 FUNC_2(10);

 VAR_7 |= VAR_5;
 FUNC_1(VAR_6, VAR_0, VAR_7);
}
