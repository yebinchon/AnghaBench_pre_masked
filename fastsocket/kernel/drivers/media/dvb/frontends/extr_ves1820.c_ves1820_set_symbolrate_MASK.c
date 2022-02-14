
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct ves1820_state {TYPE_1__* config; } ;
typedef int s32 ;
typedef int s16 ;
struct TYPE_2__ {int xin; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int* VAR_0 ;
 int FUNC_2 (struct ves1820_state*,int,int) ;

__attribute__((used)) static int FUNC_3(struct ves1820_state *VAR_1, u32 VAR_2)
{
 s32 VAR_3;
 s32 VAR_4;
 s16 VAR_5 = 0;
 u16 VAR_6 = 0;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u64 VAR_10;
 u64 VAR_11;

 if (VAR_2 > VAR_1->config->xin / 2)
  VAR_2 = VAR_1->config->xin / 2;

 if (VAR_2 < 500000)
  VAR_2 = 500000;

 if (VAR_2 < VAR_1->config->xin / 16)
  VAR_6 = 1;
 if (VAR_2 < VAR_1->config->xin / 32)
  VAR_6 = 2;
 if (VAR_2 < VAR_1->config->xin / 64)
  VAR_6 = 3;


 VAR_11 = VAR_1->config->xin * 10;
 VAR_10 = VAR_11; FUNC_1(VAR_10, 123);
 if (VAR_2 < VAR_10)
  VAR_5 = 1;
 VAR_10 = VAR_11; FUNC_1(VAR_10, 160);
 if (VAR_2 < VAR_10)
  VAR_5 = 0;
 VAR_10 = VAR_11; FUNC_1(VAR_10, 246);
 if (VAR_2 < VAR_10)
  VAR_5 = 1;
 VAR_10 = VAR_11; FUNC_1(VAR_10, 320);
 if (VAR_2 < VAR_10)
  VAR_5 = 0;
 VAR_10 = VAR_11; FUNC_1(VAR_10, 492);
 if (VAR_2 < VAR_10)
  VAR_5 = 1;
 VAR_10 = VAR_11; FUNC_1(VAR_10, 640);
 if (VAR_2 < VAR_10)
  VAR_5 = 0;
 VAR_10 = VAR_11; FUNC_1(VAR_10, 984);
 if (VAR_2 < VAR_10)
  VAR_5 = 1;

 VAR_8 = VAR_1->config->xin >> 4;
 VAR_2 <<= VAR_6;
 VAR_7 = (VAR_2 << 4) / VAR_8;
 VAR_9 = ((VAR_2 << 4) % VAR_8) << 8;
 VAR_7 = (VAR_7 << 8) + VAR_9 / VAR_8;
 VAR_9 = (VAR_9 % VAR_8) << 8;
 VAR_7 = (VAR_7 << 8) + FUNC_0(VAR_9, VAR_8);

 VAR_3 = VAR_7;
 VAR_4 = (((VAR_1->config->xin << 5) / VAR_2) + 1) / 2;

 if (VAR_4 > 0xFF)
  VAR_4 = 0xFF;

 VAR_5 = (VAR_5 << 4) | VAR_0[0x0E];

 VAR_6 = (VAR_6 << 6) | VAR_0[0x03];

 FUNC_2(VAR_1, 0x03, VAR_6);
 FUNC_2(VAR_1, 0x0a, VAR_3 & 0xff);
 FUNC_2(VAR_1, 0x0b, (VAR_3 >> 8) & 0xff);
 FUNC_2(VAR_1, 0x0c, (VAR_3 >> 16) & 0x3f);

 FUNC_2(VAR_1, 0x0d, VAR_4);
 FUNC_2(VAR_1, 0x0e, VAR_5);

 return 0;
}
