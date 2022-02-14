
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_adc_client {int result; int * convert_cb; int * wait; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct s3c_adc_client*,unsigned int,int) ;
 int * VAR_2 ;
 int FUNC_2 (int ,int,int) ;
 int VAR_3 ;

int FUNC_3(struct s3c_adc_client *VAR_4, unsigned int VAR_5)
{
 FUNC_0(VAR_3);
 int VAR_6;

 VAR_4->convert_cb = VAR_2;
 VAR_4->wait = &VAR_3;
 VAR_4->result = -1;

 VAR_6 = FUNC_1(VAR_4, VAR_5, 1);
 if (VAR_6 < 0)
  goto err;

 VAR_6 = FUNC_2(VAR_3, VAR_4->result >= 0, VAR_1 / 2);
 if (VAR_4->result < 0) {
  VAR_6 = -VAR_0;
  goto err;
 }

 VAR_4->convert_cb = ((void*)0);
 return VAR_4->result;

err:
 return VAR_6;
}
