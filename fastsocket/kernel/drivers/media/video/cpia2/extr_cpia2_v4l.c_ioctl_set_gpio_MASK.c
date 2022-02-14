
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camera_data {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (struct camera_data*,unsigned char) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, struct camera_data *VAR_2)
{
 __u32 VAR_3;

 VAR_3 = *(__u32*) VAR_1;

 if (VAR_3 &~ 0xFFU)
  return -VAR_0;

 return FUNC_0(VAR_2, (unsigned char)VAR_3);
}
