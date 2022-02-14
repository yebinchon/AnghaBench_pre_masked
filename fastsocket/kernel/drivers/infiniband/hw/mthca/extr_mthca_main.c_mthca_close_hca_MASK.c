
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fw_icm; } ;
struct TYPE_4__ {TYPE_1__ arbel; } ;
struct mthca_dev {int mthca_flags; TYPE_2__ fw; } ;


 int VAR_0 ;
 int FUNC_0 (struct mthca_dev*,int ) ;
 int FUNC_1 (struct mthca_dev*) ;
 int FUNC_2 (struct mthca_dev*) ;
 int FUNC_3 (struct mthca_dev*) ;
 int FUNC_4 (struct mthca_dev*,int ,int ) ;
 int FUNC_5 (struct mthca_dev*) ;
 scalar_t__ FUNC_6 (struct mthca_dev*) ;

__attribute__((used)) static void FUNC_7(struct mthca_dev *VAR_1)
{
 FUNC_0(VAR_1, 0);

 if (FUNC_6(VAR_1)) {
  FUNC_5(VAR_1);

  FUNC_3(VAR_1);
  FUNC_4(VAR_1, VAR_1->fw.arbel.fw_icm, 0);

  if (!(VAR_1->mthca_flags & VAR_0))
   FUNC_1(VAR_1);
 } else
  FUNC_2(VAR_1);
}
