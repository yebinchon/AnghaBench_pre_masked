
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pwc_device*,int ,int ,unsigned char**,int) ;

__attribute__((used)) static int FUNC_1(struct pwc_device *VAR_2, int VAR_3, int VAR_4)
{
 unsigned char VAR_5[4];






 VAR_3 = 64 * VAR_3 / 100;
 VAR_4 = -64 * VAR_4 / 100;
 VAR_5[0] = VAR_3 & 0xFF;
 VAR_5[1] = (VAR_3 >> 8) & 0xFF;
 VAR_5[2] = VAR_4 & 0xFF;
 VAR_5[3] = (VAR_4 >> 8) & 0xFF;
 return FUNC_0(VAR_2,
  VAR_1, VAR_0, &VAR_5, sizeof(VAR_5));
}
