
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmr2 {int curvol; int card_type; int io; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct fmr2 *VAR_0)
{
 int VAR_1[16] = { 0x021, 0x084, 0x090, 0x104,
   0x110, 0x204, 0x210, 0x402,
   0x404, 0x408, 0x410, 0x801,
   0x802, 0x804, 0x808, 0x810 };
 int VAR_2, VAR_3;
 int VAR_4 = VAR_1[VAR_0->curvol & 0x0f];

 if (VAR_0->card_type != 11)
  return 1;

 for (VAR_2 = 12; --VAR_2 >= 0; ) {
  VAR_3 = ((VAR_4 >> VAR_2) & 1) << 6;
  FUNC_0(VAR_3 | 4, VAR_0->io);
  FUNC_1(4, VAR_0->io);
  FUNC_0(VAR_3 | 0x24, VAR_0->io);
  FUNC_1(4, VAR_0->io);
  FUNC_0(VAR_3 | 4, VAR_0->io);
  FUNC_1(4, VAR_0->io);
 }
 for (VAR_2 = 6; --VAR_2 >= 0; ) {
  VAR_3 = ((0x18 >> VAR_2) & 1) << 6;
  FUNC_0(VAR_3 | 4, VAR_0->io);
  FUNC_1(4, VAR_0->io);
  FUNC_0(VAR_3 | 0x24, VAR_0->io);
  FUNC_1(4, VAR_0->io);
  FUNC_0(VAR_3 | 4, VAR_0->io);
  FUNC_1(4, VAR_0->io);
 }
 FUNC_1(4, VAR_0->io);
 FUNC_0(0x14, VAR_0->io);
 return 0;
}
