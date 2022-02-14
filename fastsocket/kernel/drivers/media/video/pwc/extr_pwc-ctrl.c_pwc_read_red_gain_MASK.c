
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pwc_device*,int ,int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(struct pwc_device *VAR_2, int *VAR_3)
{
 unsigned char VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2,
  VAR_0, VAR_1, &VAR_4, sizeof(VAR_4));
 if (VAR_5 < 0)
  return VAR_5;
 *VAR_3 = VAR_4 << 8;
 return 0;
}
