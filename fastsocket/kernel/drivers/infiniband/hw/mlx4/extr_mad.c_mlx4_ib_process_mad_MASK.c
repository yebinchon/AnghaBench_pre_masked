
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_wc {int dummy; } ;
struct ib_mad {int dummy; } ;
struct ib_grh {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct ib_device*,int,int ,struct ib_wc*,struct ib_grh*,struct ib_mad*,struct ib_mad*) ;
 int FUNC_1 (struct ib_device*,int,int ,struct ib_wc*,struct ib_grh*,struct ib_mad*,struct ib_mad*) ;
 int FUNC_2 (struct ib_device*,int ) ;

int FUNC_3(struct ib_device *VAR_1, int VAR_2, u8 VAR_3,
   struct ib_wc *VAR_4, struct ib_grh *VAR_5,
   struct ib_mad *VAR_6, struct ib_mad *VAR_7)
{
 switch (FUNC_2(VAR_1, VAR_3)) {
 case 128:
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
          VAR_5, VAR_6, VAR_7);
 case 129:
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_6, VAR_7);
 default:
  return -VAR_0;
 }
}
