
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_0; int member_1; } ;
typedef TYPE_1__ u16 ;
struct sd {int dummy; } ;


 int FUNC_0 (TYPE_1__ const**) ;
 int VAR_0 ;
 int FUNC_1 (struct sd*,TYPE_1__ const,TYPE_1__ const) ;

__attribute__((used)) static int FUNC_2(struct sd *VAR_1)
{
 int VAR_2 = 0, VAR_3;

 const u16 VAR_4[][2] = {
  { VAR_0, 0x00 },
  { 0x1436, 0x00 },
  { 0x1432, 0x03 },
  { 0x143a, 0xf9 },
  { 0x0509, 0x38 },
  { 0x050a, 0x38 },
  { 0x050b, 0x38 },
  { 0x050c, 0x2a },
  { 0x050d, 0x01 },


  { 0x1431, 0x00 },
  { 0x1433, 0x34 },
  { 0x1438, 0x18 },



  { 0x1439, 0x00 },


  { 0x143b, 0x05 },
  { 0x143c, 0x00 },





  { 0x143e, 0x01 },
  { 0x143d, 0x00 },

  { 0x1442, 0xe2 },
  { 0x1500, 0xd0 },
  { 0x1500, 0xd0 },
  { 0x1500, 0x50 },

  { 0x1501, 0xaf },


  { 0x1502, 0xc2 },


  { 0x1503, 0x45 },


  { 0x1505, 0x02 },




  { 0x150e, 0x8e },
  { 0x150f, 0x37 },
  { 0x15c0, 0x00 },
  { 0x15c3, 0x08 },


  { 0x143f, 0x01 },

 };

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_4) && !VAR_2; VAR_3++) {
  VAR_2 = FUNC_1(VAR_1, VAR_4[VAR_3][0],
            VAR_4[VAR_3][1]);
 }

 return VAR_2;
}
