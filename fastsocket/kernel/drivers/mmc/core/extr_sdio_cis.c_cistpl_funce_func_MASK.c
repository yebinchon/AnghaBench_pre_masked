
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdio_func {unsigned char max_blksize; unsigned char enable_timeout; TYPE_2__* card; } ;
struct TYPE_3__ {unsigned int sdio_vsn; } ;
struct TYPE_4__ {TYPE_1__ cccr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned char const) ;
 unsigned char FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sdio_func *VAR_4,
        const unsigned char *VAR_5, unsigned VAR_6)
{
 unsigned VAR_7;
 unsigned VAR_8;


 if (FUNC_0(VAR_5[0]))
  return -VAR_0;

 VAR_7 = VAR_4->card->cccr.sdio_vsn;
 VAR_8 = (VAR_7 == VAR_3) ? 28 : 42;

 if (VAR_6 < VAR_8 || VAR_5[0] != 1)
  return -VAR_1;


 VAR_4->max_blksize = VAR_5[12] | (VAR_5[13] << 8);


 if (VAR_7 > VAR_3)
  VAR_4->enable_timeout = (VAR_5[28] | (VAR_5[29] << 8)) * 10;
 else
  VAR_4->enable_timeout = FUNC_1(VAR_2);

 return 0;
}
