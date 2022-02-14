
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds2760_device_info {char* raw; int w1_dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ds2760_device_info *VAR_3,
     char VAR_4)
{
 if (VAR_4 == VAR_3->raw[VAR_1])
  return;

 FUNC_2(VAR_3->w1_dev, &VAR_4, VAR_2, 1);
 FUNC_1(VAR_3->w1_dev, VAR_0);
 FUNC_0(VAR_3->w1_dev, VAR_0);
}
