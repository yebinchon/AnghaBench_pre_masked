
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qlcnic_adapter {scalar_t__ heartbeat; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (struct qlcnic_adapter*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct qlcnic_adapter *VAR_5)
{
 u32 VAR_6, VAR_7 = -VAR_0;
 int VAR_8 = VAR_1;

 VAR_5->heartbeat = FUNC_0(VAR_5,
       VAR_3);

 do {
  FUNC_1(VAR_2);
  VAR_6 = FUNC_0(VAR_5,
      VAR_3);
  if (VAR_6 != VAR_5->heartbeat) {
   VAR_7 = VAR_4;
   break;
  }
 } while (--VAR_8);

 return VAR_7;
}
