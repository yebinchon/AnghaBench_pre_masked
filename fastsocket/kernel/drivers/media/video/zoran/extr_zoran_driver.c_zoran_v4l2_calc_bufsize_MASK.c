
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zoran_jpg_settings {int VerDcm; int HorDcm; int TmpDcm; } ;
typedef int __u8 ;
typedef int __u32 ;


 int VAR_0 ;

__attribute__((used)) static __u32
FUNC_0 (struct zoran_jpg_settings *VAR_1)
{
 __u8 VAR_2 = VAR_1->VerDcm * VAR_1->HorDcm * VAR_1->TmpDcm;
 __u32 VAR_3 = (1024 * 512) / (VAR_2);
 __u32 VAR_4 = 2;

 VAR_3--;
 while (VAR_3) {
  VAR_3 >>= 1;
  VAR_4 <<= 1;
 }

 if (VAR_4 > VAR_0)
  return VAR_0;
 if (VAR_4 < 8192)
  return 8192;
 return VAR_4;
}
