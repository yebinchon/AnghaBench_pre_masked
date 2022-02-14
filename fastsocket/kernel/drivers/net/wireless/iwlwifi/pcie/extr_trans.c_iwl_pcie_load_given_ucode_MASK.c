
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {int dummy; } ;
struct fw_img {TYPE_1__* sec; } ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_trans*,int,TYPE_1__*) ;
 int FUNC_1 (struct iwl_trans*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct iwl_trans *VAR_2,
    const struct fw_img *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (!VAR_3->sec[VAR_4].data)
   break;

  VAR_5 = FUNC_0(VAR_2, VAR_4, &VAR_3->sec[VAR_4]);
  if (VAR_5)
   return VAR_5;
 }


 FUNC_1(VAR_2, VAR_0, 0);

 return 0;
}
