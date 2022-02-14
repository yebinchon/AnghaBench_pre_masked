
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char blksize; int max_dtr; } ;
struct mmc_card {TYPE_1__ cis; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct mmc_card *VAR_3,
          const unsigned char *VAR_4, unsigned VAR_5)
{
 if (VAR_5 < 0x04 || VAR_4[0] != 0)
  return -VAR_0;


 VAR_3->cis.blksize = VAR_4[1] | (VAR_4[2] << 8);


 VAR_3->cis.max_dtr = VAR_2[(VAR_4[3] >> 3) & 15] *
       VAR_1[VAR_4[3] & 7];

 return 0;
}
