
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct iop_msg {int dummy; } ;
struct adb_request {scalar_t__ reply_expected; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct adb_request* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_2(struct iop_msg *VAR_4)
{
 struct adb_request *VAR_5;
 uint VAR_6;

 FUNC_1(VAR_6);

 VAR_5 = VAR_2;
 if ((VAR_0 == VAR_3) && VAR_5 && VAR_5->reply_expected) {
  VAR_0 = VAR_1;
 }

 FUNC_0(VAR_6);
}
