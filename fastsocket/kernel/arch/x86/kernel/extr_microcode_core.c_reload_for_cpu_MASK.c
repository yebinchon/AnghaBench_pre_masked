
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucode_cpu_info {scalar_t__ valid; } ;
typedef enum ucode_state { ____Placeholder_ucode_state } ucode_state ;
struct TYPE_4__ {int (* request_microcode_fw ) (int,int *) ;} ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 struct ucode_cpu_info* VAR_6 ;

__attribute__((used)) static int FUNC_4(int VAR_7)
{
 struct ucode_cpu_info *VAR_8 = VAR_6 + VAR_7;
 int VAR_9 = 0;

 FUNC_1(&VAR_3);
 if (VAR_8->valid) {
  enum ucode_state VAR_10;

  VAR_10 = VAR_4->request_microcode_fw(VAR_7, &VAR_5->dev);
  if (VAR_10 == VAR_2)
   FUNC_0(VAR_7);
  else
   if (VAR_10 == VAR_1)
    VAR_9 = -VAR_0;
 }
 FUNC_2(&VAR_3);

 return VAR_9;
}
