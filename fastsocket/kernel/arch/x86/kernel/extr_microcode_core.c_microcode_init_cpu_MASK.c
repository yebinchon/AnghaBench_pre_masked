
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum ucode_state { ____Placeholder_ucode_state } ucode_state ;
struct TYPE_4__ {int (* request_microcode_fw ) (int,int *) ;} ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,int *) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static enum ucode_state FUNC_4(int VAR_7)
{
 enum ucode_state VAR_8;

 if (FUNC_1(VAR_7))
  return VAR_1;


 if (VAR_6 != VAR_0)
  return VAR_2;

 VAR_8 = VAR_4->request_microcode_fw(VAR_7, &VAR_5->dev);

 if (VAR_8 == VAR_3) {
  FUNC_2("microcode: CPU%d updated upon init\n", VAR_7);
  FUNC_0(VAR_7);
 }

 return VAR_8;
}
