
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
struct rf_channel {int const rf3; int channel; int const rf4; int const rf1; int const rf2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (struct rt2x00_dev*,int,int const) ;
 scalar_t__ FUNC_2 (struct rt2x00_dev*,int ) ;
 int FUNC_3 (int const*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_2,
         struct rf_channel *VAR_3, const int VAR_4)
{



 FUNC_3(&VAR_3->rf3, VAR_1, FUNC_0(VAR_4));




 if (FUNC_2(VAR_2, VAR_0)) {
  static const u32 VAR_5[] = {
   0x000008aa, 0x000008ae, 0x000008ae, 0x000008b2,
   0x000008b2, 0x000008b6, 0x000008b6, 0x000008ba,
   0x000008ba, 0x000008be, 0x000008b7, 0x00000902,
   0x00000902, 0x00000906
  };

  FUNC_1(VAR_2, 2, VAR_5[VAR_3->channel - 1]);
  if (VAR_3->rf4)
   FUNC_1(VAR_2, 4, VAR_3->rf4);
 }

 FUNC_1(VAR_2, 1, VAR_3->rf1);
 FUNC_1(VAR_2, 2, VAR_3->rf2);
 FUNC_1(VAR_2, 3, VAR_3->rf3);
 if (VAR_3->rf4)
  FUNC_1(VAR_2, 4, VAR_3->rf4);
}
