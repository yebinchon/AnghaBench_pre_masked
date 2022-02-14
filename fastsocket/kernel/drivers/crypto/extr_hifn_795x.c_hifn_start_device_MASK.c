
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hifn_device {scalar_t__ active; scalar_t__ started; } ;


 int FUNC_0 (struct hifn_device*) ;
 int FUNC_1 (struct hifn_device*) ;
 int FUNC_2 (struct hifn_device*) ;
 int FUNC_3 (struct hifn_device*) ;
 int FUNC_4 (struct hifn_device*,int) ;
 int FUNC_5 (struct hifn_device*) ;

__attribute__((used)) static int FUNC_6(struct hifn_device *VAR_0)
{
 int VAR_1;

 VAR_0->started = VAR_0->active = 0;
 FUNC_4(VAR_0, 1);

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_5(VAR_0);

 FUNC_1(VAR_0);

 FUNC_3(VAR_0);

 FUNC_2(VAR_0);

 return 0;
}
