
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {TYPE_1__* drv; } ;
struct TYPE_2__ {scalar_t__ phy_id; } ;


 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*,int ,int) ;
 int FUNC_3 (struct phy_device*,int ) ;
 int FUNC_4 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct phy_device *VAR_10)
{
 int VAR_11, VAR_12;


 VAR_11 = FUNC_2(VAR_10,
       VAR_2,
       VAR_0 |
       VAR_1);
 if (VAR_11 < 0)
  return VAR_11;

 if (FUNC_0(VAR_10) == VAR_7 ||
     FUNC_0(VAR_10) == VAR_8) {

  VAR_11 = FUNC_4(VAR_10, VAR_3,
     VAR_4);
  if (VAR_11 < 0)
   goto error;

  if (VAR_10->drv->phy_id == VAR_7) {
   VAR_11 = FUNC_1(VAR_10);
   if (VAR_11 < 0)
    goto error;
  }
 }

 if (FUNC_0(VAR_10) == VAR_9) {
  int VAR_13;

  VAR_13 = FUNC_3(VAR_10, VAR_5);
  if (VAR_13 < 0)
   goto error;

  VAR_13 |= VAR_6;
  VAR_11 = FUNC_4(VAR_10, VAR_5, VAR_13);
 }

error:

 VAR_12 = FUNC_2(VAR_10,
        VAR_2,
        VAR_1);


 return VAR_11 ? VAR_11 : VAR_12;
}
