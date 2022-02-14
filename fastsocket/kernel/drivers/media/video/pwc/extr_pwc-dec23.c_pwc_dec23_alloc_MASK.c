
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int * decompress_data; } ;
struct pwc_dec23_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int ) ;

int FUNC_1(struct pwc_device *VAR_2)
{
 VAR_2->decompress_data = FUNC_0(sizeof(struct pwc_dec23_private), VAR_1);
 if (VAR_2->decompress_data == ((void*)0))
  return -VAR_0;
 return 0;
}
