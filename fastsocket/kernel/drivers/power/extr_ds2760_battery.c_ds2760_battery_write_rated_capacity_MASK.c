
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds2760_device_info {unsigned char* raw; int w1_dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,unsigned char*,size_t,int) ;

__attribute__((used)) static void FUNC_3(struct ds2760_device_info *VAR_2,
      unsigned char VAR_3)
{
 if (VAR_3 == VAR_2->raw[VAR_1])
  return;

 FUNC_2(VAR_2->w1_dev, &VAR_3, VAR_1, 1);
 FUNC_1(VAR_2->w1_dev, VAR_0);
 FUNC_0(VAR_2->w1_dev, VAR_0);
}
