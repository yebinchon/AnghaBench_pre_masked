
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int dummy; } ;
struct cx25840_state {scalar_t__ aud_input; int audclk_freq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct i2c_client*,int,int) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_1, u32 VAR_2)
{
 struct cx25840_state *VAR_3 = FUNC_4(FUNC_2(VAR_1));

 if (VAR_3->aud_input != VAR_0) {
  switch (VAR_2) {
  case 32000:




   FUNC_1(VAR_1, 0x108, 0x1006040f);
   FUNC_1(VAR_1, 0x110, 0x01bb39ee);





   FUNC_0(VAR_1, 0x127, 0x50);

   if (FUNC_3(VAR_3))
    break;



   FUNC_1(VAR_1, 0x900, 0x0801f77f);
   FUNC_1(VAR_1, 0x904, 0x0801f77f);
   FUNC_1(VAR_1, 0x90c, 0x0801f77f);
   break;

  case 44100:




   FUNC_1(VAR_1, 0x108, 0x1009040f);
   FUNC_1(VAR_1, 0x110, 0x00ec6bd6);





   FUNC_0(VAR_1, 0x127, 0x50);

   if (FUNC_3(VAR_3))
    break;



   FUNC_1(VAR_1, 0x900, 0x08016d59);
   FUNC_1(VAR_1, 0x904, 0x08016d59);
   FUNC_1(VAR_1, 0x90c, 0x08016d59);
   break;

  case 48000:




   FUNC_1(VAR_1, 0x108, 0x100a040f);
   FUNC_1(VAR_1, 0x110, 0x0098d6e5);





   FUNC_0(VAR_1, 0x127, 0x50);

   if (FUNC_3(VAR_3))
    break;



   FUNC_1(VAR_1, 0x900, 0x08014faa);
   FUNC_1(VAR_1, 0x904, 0x08014faa);
   FUNC_1(VAR_1, 0x90c, 0x08014faa);
   break;
  }
 } else {
  switch (VAR_2) {
  case 32000:




   FUNC_1(VAR_1, 0x108, 0x1e08040f);
   FUNC_1(VAR_1, 0x110, 0x012a0869);





   FUNC_0(VAR_1, 0x127, 0x54);

   if (FUNC_3(VAR_3))
    break;



   FUNC_1(VAR_1, 0x8f8, 0x08010000);



   FUNC_1(VAR_1, 0x900, 0x08020000);
   FUNC_1(VAR_1, 0x904, 0x08020000);
   FUNC_1(VAR_1, 0x90c, 0x08020000);
   break;

  case 44100:




   FUNC_1(VAR_1, 0x108, 0x1809040f);
   FUNC_1(VAR_1, 0x110, 0x00ec6bd6);





   FUNC_0(VAR_1, 0x127, 0x50);

   if (FUNC_3(VAR_3))
    break;



   FUNC_1(VAR_1, 0x8f8, 0x080160cd);



   FUNC_1(VAR_1, 0x900, 0x08017385);
   FUNC_1(VAR_1, 0x904, 0x08017385);
   FUNC_1(VAR_1, 0x90c, 0x08017385);
   break;

  case 48000:




   FUNC_1(VAR_1, 0x108, 0x180a040f);
   FUNC_1(VAR_1, 0x110, 0x0098d6e5);





   FUNC_0(VAR_1, 0x127, 0x50);

   if (FUNC_3(VAR_3))
    break;



   FUNC_1(VAR_1, 0x8f8, 0x08018000);



   FUNC_1(VAR_1, 0x900, 0x08015555);
   FUNC_1(VAR_1, 0x904, 0x08015555);
   FUNC_1(VAR_1, 0x90c, 0x08015555);
   break;
  }
 }

 VAR_3->audclk_freq = VAR_2;

 return 0;
}
