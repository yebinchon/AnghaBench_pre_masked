
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap_data {int fd; int dev_name; int dev; int fixed_config; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(int VAR_1, void *VAR_2)
{
 struct tuntap_data *VAR_3 = VAR_2;

 if (!VAR_3->fixed_config)
  FUNC_1(VAR_3->dev, VAR_0, VAR_3->dev_name);
 FUNC_0(VAR_1);
 VAR_3->fd = -1;
}
