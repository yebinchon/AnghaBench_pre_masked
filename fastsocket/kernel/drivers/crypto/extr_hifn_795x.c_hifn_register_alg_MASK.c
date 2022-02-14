
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hifn_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hifn_device*,int *) ;
 int * VAR_0 ;
 int FUNC_2 (struct hifn_device*) ;

__attribute__((used)) static int FUNC_3(struct hifn_device *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2=0; VAR_2<FUNC_0(VAR_0); ++VAR_2) {
  VAR_3 = FUNC_1(VAR_1, &VAR_0[VAR_2]);
  if (VAR_3)
   goto err_out_exit;
 }

 return 0;

err_out_exit:
 FUNC_2(VAR_1);
 return VAR_3;
}
