
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (struct block_device*) ;
 int FUNC_2 (unsigned char*,unsigned long,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_3 (unsigned long,unsigned int*,unsigned int*,unsigned int*) ;

int FUNC_4(struct block_device *VAR_0, sector_t VAR_1, int *VAR_2)
{
 unsigned char *VAR_3;
 u64 VAR_4 = VAR_1;
 int VAR_5;

 VAR_3 = FUNC_1(VAR_0);
 if (!VAR_3)
  return -1;


 VAR_5 = FUNC_2(VAR_3, (unsigned long)VAR_1, (unsigned int *)VAR_2 + 2,
          (unsigned int *)VAR_2 + 0, (unsigned int *)VAR_2 + 1);
 FUNC_0(VAR_3);

 if (VAR_5 == -1 && VAR_4 < (1ULL << 32)) {



  VAR_5 = FUNC_3((unsigned long)VAR_1, (unsigned int *)VAR_2 + 2,
         (unsigned int *)VAR_2 + 0, (unsigned int *)VAR_2 + 1);
 }



 if (VAR_5 || VAR_2[0] > 255 || VAR_2[1] > 63) {
  if ((VAR_1 >> 11) > 65534) {
   VAR_2[0] = 255;
   VAR_2[1] = 63;
  } else {
   VAR_2[0] = 64;
   VAR_2[1] = 32;
  }

  if (VAR_1 > 65535*63*255)
   VAR_2[2] = 65535;
  else
   VAR_2[2] = (unsigned long)VAR_1 / (VAR_2[0] * VAR_2[1]);
 }

 return 0;
}
