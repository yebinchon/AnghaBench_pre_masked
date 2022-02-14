
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int symbol_rate_max; int symbol_rate_min; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct cx24123_state {TYPE_3__ frontend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct cx24123_state*,int) ;
 int FUNC_2 (struct cx24123_state*,int,int) ;
 int FUNC_3 (char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct cx24123_state *VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7;
 u8 VAR_8;


 if ((VAR_3 > VAR_2->frontend.ops.info.symbol_rate_max) ||
     (VAR_3 < VAR_2->frontend.ops.info.symbol_rate_min))
  return -VAR_0;



 if (VAR_3 < (VAR_1*2)/2)
  VAR_8 = 2;
 else if (VAR_3 < (VAR_1*3)/2)
  VAR_8 = 3;
 else if (VAR_3 < (VAR_1*4)/2)
  VAR_8 = 4;
 else if (VAR_3 < (VAR_1*5)/2)
  VAR_8 = 5;
 else if (VAR_3 < (VAR_1*6)/2)
  VAR_8 = 6;
 else if (VAR_3 < (VAR_1*7)/2)
  VAR_8 = 7;
 else if (VAR_3 < (VAR_1*8)/2)
  VAR_8 = 8;
 else
  VAR_8 = 9;


 VAR_5 = VAR_8 * VAR_1;
 VAR_4 = VAR_3 << 6;
 VAR_6 = VAR_4 / VAR_5;

 VAR_4 = (VAR_4 % VAR_5) << 6;
 VAR_6 = (VAR_6 << 6) + (VAR_4 / VAR_5);

 VAR_4 = (VAR_4 % VAR_5) << 6;
 VAR_6 = (VAR_6 << 6) + (VAR_4 / VAR_5);

 VAR_4 = (VAR_4 % VAR_5) << 5;
 VAR_6 = (VAR_6 << 5) + (VAR_4 / VAR_5);


 FUNC_2(VAR_2, 0x01, VAR_8 * 6);

 FUNC_2(VAR_2, 0x08, (VAR_6 >> 16) & 0x3f);
 FUNC_2(VAR_2, 0x09, (VAR_6 >> 8) & 0xff);
 FUNC_2(VAR_2, 0x0a, VAR_6 & 0xff);


 VAR_7 = FUNC_0(VAR_5, VAR_3);
 VAR_4 = FUNC_1(VAR_2, 0x0c) & ~0xe0;
 FUNC_2(VAR_2, 0x0c, VAR_4 | VAR_7 << 5);

 FUNC_3("srate=%d, ratio=0x%08x, sample_rate=%i sample_gain=%d\n",
  VAR_3, VAR_6, VAR_5, VAR_7);

 return 0;
}
