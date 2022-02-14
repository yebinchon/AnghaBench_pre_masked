
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int type; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct pwc_device*,unsigned int,unsigned int) ;
 unsigned int FUNC_3 (struct pwc_device*,unsigned int,unsigned int) ;
 unsigned int FUNC_4 (struct pwc_device*,unsigned int,unsigned int) ;

unsigned int FUNC_5(struct pwc_device *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 if (FUNC_0(VAR_0->type)) {
  VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);

 } else if (FUNC_1(VAR_0->type)) {
  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);

 } else {
  VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2);
 }

 return VAR_3;
}
