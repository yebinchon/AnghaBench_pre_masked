
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ sif; } ;


 int FUNC_0 (struct sd*,int,int) ;

__attribute__((used)) static void FUNC_1(struct sd *VAR_0)
{
 unsigned long VAR_1 = VAR_0->sif ? (352 * 288 * 2) : (640 * 480 * 2),
        VAR_2 = 0x0000,
        VAR_3 = VAR_2 + VAR_1 / 2,
        VAR_4 = VAR_3 + VAR_1 / 4,
        VAR_5 = VAR_4 + VAR_1 / 4,
        VAR_6 = VAR_5 + VAR_1 / 2,
        VAR_7 = VAR_6 + VAR_1 / 4;

 FUNC_0(VAR_0, 0x00, 0xff00);
 FUNC_0(VAR_0, 0x00, 0xbf10);

 FUNC_0(VAR_0, 0x03, 0x405d);
 FUNC_0(VAR_0, 0x04, 0x0030);

 FUNC_0(VAR_0, 0x20, VAR_2 & 0xffff);
 FUNC_0(VAR_0, 0x21, VAR_2 >> 16);
 FUNC_0(VAR_0, 0x24, VAR_3 & 0xffff);
 FUNC_0(VAR_0, 0x25, VAR_3 >> 16);
 FUNC_0(VAR_0, 0x28, VAR_4 & 0xffff);
 FUNC_0(VAR_0, 0x29, VAR_4 >> 16);

 FUNC_0(VAR_0, 0x22, VAR_5 & 0xffff);
 FUNC_0(VAR_0, 0x23, VAR_5 >> 16);
 FUNC_0(VAR_0, 0x26, VAR_6 & 0xffff);
 FUNC_0(VAR_0, 0x27, VAR_6 >> 16);
 FUNC_0(VAR_0, 0x2a, VAR_7 & 0xffff);
 FUNC_0(VAR_0, 0x2b, VAR_7 >> 16);

 FUNC_0(VAR_0, 0x32, VAR_5 & 0xffff);
 FUNC_0(VAR_0, 0x33, VAR_5 >> 16);

 FUNC_0(VAR_0, 0x34, VAR_5 & 0xffff);
 FUNC_0(VAR_0, 0x35, VAR_5 >> 16);

 FUNC_0(VAR_0, 0x36, 0x0000);
 FUNC_0(VAR_0, 0x37, 0x0804);
 FUNC_0(VAR_0, 0x38, 0x0000);
 FUNC_0(VAR_0, 0x3f, 0x0000);
}
