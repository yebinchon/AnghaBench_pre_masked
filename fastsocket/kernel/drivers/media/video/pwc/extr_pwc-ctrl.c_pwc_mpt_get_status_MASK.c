
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_mpt_status {unsigned char status; unsigned char time_pan; unsigned char time_tilt; } ;
struct pwc_device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pwc_device*,int ,int ,unsigned char**,int) ;

__attribute__((used)) static int FUNC_1(struct pwc_device *VAR_2, struct pwc_mpt_status *VAR_3)
{
 int VAR_4;
 unsigned char VAR_5[5];

 VAR_4 = FUNC_0(VAR_2,
  VAR_0, VAR_1, &VAR_5, sizeof(VAR_5));
 if (VAR_4 < 0)
  return VAR_4;
 VAR_3->status = VAR_5[0] & 0x7;
 VAR_3->time_pan = (VAR_5[1] << 8) + VAR_5[2];
 VAR_3->time_tilt = (VAR_5[3] << 8) + VAR_5[4];
 return 0;
}
