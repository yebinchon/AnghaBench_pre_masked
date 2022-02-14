
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
struct rf_channel {int const rf3; int const rf1; int channel; int const rf4; int const rf2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rt2x00_dev*,int,int) ;
 int FUNC_3 (struct rt2x00_dev*,int,int const) ;
 scalar_t__ FUNC_4 (struct rt2x00_dev*,int ) ;
 int FUNC_5 (int const*,int ,int) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (struct rt2x00_dev*,int ,int const*) ;

__attribute__((used)) static void FUNC_8(struct rt2x00_dev *VAR_7,
         struct rf_channel *VAR_8, const int VAR_9)
{
 u8 VAR_10;




 FUNC_5(&VAR_8->rf3, VAR_6, FUNC_0(VAR_9));





 if (!FUNC_4(VAR_7, VAR_3))
  FUNC_5(&VAR_8->rf1, VAR_2, 1);
 FUNC_5(&VAR_8->rf3, VAR_5, 1);




 if (FUNC_4(VAR_7, VAR_4)) {
  static const u32 VAR_11[] = {
   0x00080cbe, 0x00080d02, 0x00080d06, 0x00080d0a,
   0x00080d0e, 0x00080d12, 0x00080d16, 0x00080d1a,
   0x00080d1e, 0x00080d22, 0x00080d26, 0x00080d2a,
   0x00080d2e, 0x00080d3a
  };

  FUNC_3(VAR_7, 1, VAR_8->rf1);
  FUNC_3(VAR_7, 2, VAR_11[VAR_8->channel - 1]);
  FUNC_3(VAR_7, 3, VAR_8->rf3);
  if (VAR_8->rf4)
   FUNC_3(VAR_7, 4, VAR_8->rf4);
 }

 FUNC_3(VAR_7, 1, VAR_8->rf1);
 FUNC_3(VAR_7, 2, VAR_8->rf2);
 FUNC_3(VAR_7, 3, VAR_8->rf3);
 if (VAR_8->rf4)
  FUNC_3(VAR_7, 4, VAR_8->rf4);




 VAR_10 = 0x46;
 FUNC_6(&VAR_10, VAR_0, VAR_8->channel == 14);
 FUNC_2(VAR_7, 70, VAR_10);

 FUNC_1(1);





 if (!FUNC_4(VAR_7, VAR_3)) {
  FUNC_5(&VAR_8->rf1, VAR_2, 0);
  FUNC_3(VAR_7, 1, VAR_8->rf1);
 }

 FUNC_5(&VAR_8->rf3, VAR_5, 0);
 FUNC_3(VAR_7, 3, VAR_8->rf3);




 FUNC_7(VAR_7, VAR_1, &VAR_8->rf1);
}
