
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w9968cf_device {int sensor_sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,unsigned int,void*) ;

__attribute__((used)) static int
FUNC_1(struct w9968cf_device* VAR_3, unsigned int VAR_4, void* VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3->sensor_sd, VAR_1, VAR_2, VAR_4, VAR_5);

 return (VAR_6 < 0 && VAR_6 != -VAR_0) ? VAR_6 : 0;
}
