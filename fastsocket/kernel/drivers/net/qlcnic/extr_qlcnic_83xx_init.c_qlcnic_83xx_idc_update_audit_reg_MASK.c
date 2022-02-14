
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qlcnic_adapter {int portnum; TYPE_2__* ahw; } ;
struct TYPE_4__ {int sec_counter; } ;
struct TYPE_5__ {TYPE_1__ idc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_4,
         u8 VAR_5, int VAR_6)
{
 u32 VAR_7;
 int VAR_8;

 if (VAR_6) {
  if (FUNC_2(VAR_4))
   return -VAR_0;
 }

 VAR_7 = FUNC_0(VAR_4->ahw, VAR_2);
 VAR_7 |= (VAR_4->portnum & 0xf);
 VAR_7 |= VAR_5 << 7;
 if (VAR_5)
  VAR_8 = VAR_3 / VAR_1 - VAR_4->ahw->idc.sec_counter;
 else
  VAR_8 = VAR_3 / VAR_1;

 VAR_7 |= VAR_8 << 8;
 FUNC_1(VAR_4->ahw, VAR_2, VAR_7);
 VAR_4->ahw->idc.sec_counter = VAR_3 / VAR_1;

 if (VAR_6)
  FUNC_3(VAR_4);

 return 0;
}
