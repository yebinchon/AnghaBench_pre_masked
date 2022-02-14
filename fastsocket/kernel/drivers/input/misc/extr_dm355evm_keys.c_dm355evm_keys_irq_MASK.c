
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct dm355evm_keys {int input; int dev; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int event; int keycode; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int,...) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct dm355evm_keys *VAR_7 = VAR_6;
 int VAR_8;





 for (;;) {
  static u16 VAR_9;
  u16 VAR_10;
  int VAR_11;
  int VAR_12;

  VAR_8 = FUNC_2(VAR_0);
  if (VAR_8 < 0) {
   FUNC_1(VAR_7->dev, "input high err %d\n",
     VAR_8);
   break;
  }
  VAR_10 = VAR_8 << 8;

  VAR_8 = FUNC_2(VAR_1);
  if (VAR_8 < 0) {
   FUNC_1(VAR_7->dev, "input low err %d\n",
     VAR_8);
   break;
  }
  VAR_10 |= VAR_8;
  if (VAR_10 == 0xdead)
   break;
  if (VAR_10 == VAR_9) {
   VAR_9 = 0;
   continue;
  }
  VAR_9 = VAR_10;


  VAR_10 &= ~0x0800;


  VAR_11 = VAR_3;
  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_4); VAR_12++) {
   if (VAR_4[VAR_12].event != VAR_10)
    continue;
   VAR_11 = VAR_4[VAR_12].keycode;
   break;
  }
  FUNC_1(VAR_7->dev,
   "input event 0x%04x--> keycode %d\n",
   VAR_10, VAR_11);


  FUNC_3(VAR_7->input, VAR_11, 1);
  FUNC_4(VAR_7->input);
  FUNC_3(VAR_7->input, VAR_11, 0);
  FUNC_4(VAR_7->input);
 }
 return VAR_2;
}
