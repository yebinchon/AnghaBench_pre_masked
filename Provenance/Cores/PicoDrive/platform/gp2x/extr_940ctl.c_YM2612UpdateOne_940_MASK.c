
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ym_active_chs; int writebuffsel; int* writebuff0; int* writebuff1; int length; int stereo; } ;
struct TYPE_3__ {int* ym_buffer; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int ,int) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;

int FUNC_5(int *VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 int *VAR_11 = VAR_5->ym_buffer;
 int VAR_12;



 if (FUNC_0(VAR_0)) FUNC_4(VAR_0);

 VAR_12 = VAR_4->ym_active_chs;


 if (VAR_10 && VAR_12) FUNC_2(VAR_7, VAR_11, VAR_8<<VAR_9);
 else FUNC_3(VAR_7, 0, VAR_8<<VAR_9);

 if (VAR_4->writebuffsel == 1) {
  VAR_4->writebuff0[VAR_6 & 0xffff] = 0xffff;
 } else {
  VAR_4->writebuff1[VAR_6 & 0xffff] = 0xffff;
 }
 VAR_6 = 0;


 if (VAR_2) {
  VAR_8 = VAR_1;
  if (VAR_3 + VAR_2 >= 0x10000) VAR_8++;
 }


 VAR_4->writebuffsel ^= 1;
 VAR_4->length = VAR_8;
 VAR_4->stereo = VAR_9;

 FUNC_1(VAR_0);

 return VAR_12;
}
