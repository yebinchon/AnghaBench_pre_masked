
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_adc_client {unsigned int is_ts; void (* select_cb ) (struct s3c_adc_client*,unsigned int) ;void (* convert_cb ) (struct s3c_adc_client*,unsigned int,unsigned int,unsigned int*) ;struct platform_device* pdev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct s3c_adc_client* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 struct s3c_adc_client* FUNC_3 (int,int ) ;
 void FUNC_4 (struct s3c_adc_client*,unsigned int) ;

struct s3c_adc_client *FUNC_5(struct platform_device *VAR_3,
     void (*VAR_4)(struct s3c_adc_client *VAR_5,
             unsigned int VAR_6),
     void (*VAR_7)(struct s3c_adc_client *VAR_8,
           unsigned VAR_9, unsigned VAR_10,
           unsigned *VAR_11),
     unsigned int VAR_12)
{
 struct s3c_adc_client *VAR_13;

 FUNC_1(!VAR_3);

 if (!VAR_4)
  VAR_4 = FUNC_4;

 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_13 = FUNC_3(sizeof(struct s3c_adc_client), VAR_2);
 if (!VAR_13) {
  FUNC_2(&VAR_3->dev, "no memory for adc client\n");
  return FUNC_0(-VAR_1);
 }

 VAR_13->pdev = VAR_3;
 VAR_13->is_ts = VAR_12;
 VAR_13->select_cb = VAR_4;
 VAR_13->convert_cb = VAR_7;

 return VAR_13;
}
