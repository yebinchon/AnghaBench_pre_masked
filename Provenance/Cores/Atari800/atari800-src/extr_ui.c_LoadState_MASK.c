
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* fMessage ) (char*,int ) ;scalar_t__ (* fGetLoadFilename ) (int ,int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 if (VAR_0->fGetLoadFilename(VAR_3, VAR_2, VAR_1)) {
  VAR_0->fMessage("Please wait while loading...", 0);
  if (!FUNC_1(VAR_3, "rb"))
   FUNC_0(VAR_3);
 }
}
