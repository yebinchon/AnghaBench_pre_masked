
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* fMessage ) (char*,int ) ;scalar_t__ (* fGetSaveFilename ) (int ,int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 if (VAR_1->fGetSaveFilename(VAR_4, VAR_3, VAR_2)) {
  int VAR_5;
  VAR_1->fMessage("Please wait while saving...", 0);
  VAR_5 = FUNC_1(VAR_4, "wb", VAR_0);
  if (!VAR_5)
   FUNC_0(VAR_4);
 }
}
