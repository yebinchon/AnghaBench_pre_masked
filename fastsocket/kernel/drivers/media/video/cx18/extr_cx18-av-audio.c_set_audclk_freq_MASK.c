
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx18_av_state {scalar_t__ aud_input; int audclk_freq; } ;
struct cx18 {struct cx18_av_state av_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx18*,int,int) ;
 int FUNC_1 (struct cx18*,int,int) ;

__attribute__((used)) static int FUNC_2(struct cx18 *VAR_2, u32 VAR_3)
{
 struct cx18_av_state *VAR_4 = &VAR_2->av_state;

 if (VAR_3 != 32000 && VAR_3 != 44100 && VAR_3 != 48000)
  return -VAR_1;
 if (VAR_4->aud_input > VAR_0) {
  switch (VAR_3) {
  case 32000:




   FUNC_1(VAR_2, 0x108, 0x200d040f);



   FUNC_1(VAR_2, 0x10c, 0x002be2fe);



   FUNC_1(VAR_2, 0x110, 0x0176740c);



   FUNC_1(VAR_2, 0x900, 0x0801f77f);
   FUNC_1(VAR_2, 0x904, 0x0801f77f);
   FUNC_1(VAR_2, 0x90c, 0x0801f77f);


   FUNC_0(VAR_2, 0x127, 0x60);


   FUNC_1(VAR_2, 0x12c, 0x11202fff);






   FUNC_1(VAR_2, 0x128, 0xa00d2ef8);
   break;

  case 44100:




   FUNC_1(VAR_2, 0x108, 0x180e040f);



   FUNC_1(VAR_2, 0x10c, 0x002be2fe);



   FUNC_1(VAR_2, 0x110, 0x0062a1f2);



   FUNC_1(VAR_2, 0x900, 0x08016d59);
   FUNC_1(VAR_2, 0x904, 0x08016d59);
   FUNC_1(VAR_2, 0x90c, 0x08016d59);


   FUNC_0(VAR_2, 0x127, 0x58);


   FUNC_1(VAR_2, 0x12c, 0x112092ff);






   FUNC_1(VAR_2, 0x128, 0xa01d4bf8);
   break;

  case 48000:




   FUNC_1(VAR_2, 0x108, 0x160e040f);



   FUNC_1(VAR_2, 0x10c, 0x002be2fe);



   FUNC_1(VAR_2, 0x110, 0x005227ad);



   FUNC_1(VAR_2, 0x900, 0x08014faa);
   FUNC_1(VAR_2, 0x904, 0x08014faa);
   FUNC_1(VAR_2, 0x90c, 0x08014faa);


   FUNC_0(VAR_2, 0x127, 0x56);


   FUNC_1(VAR_2, 0x12c, 0x11205fff);






   FUNC_1(VAR_2, 0x128, 0xa01193f8);
   break;
  }
 } else {
  switch (VAR_3) {
  case 32000:




   FUNC_1(VAR_2, 0x108, 0x300d040f);



   FUNC_1(VAR_2, 0x10c, 0x002be2fe);



   FUNC_1(VAR_2, 0x110, 0x0176740c);



   FUNC_1(VAR_2, 0x8f8, 0x08010000);



   FUNC_1(VAR_2, 0x900, 0x08020000);
   FUNC_1(VAR_2, 0x904, 0x08020000);
   FUNC_1(VAR_2, 0x90c, 0x08020000);


   FUNC_0(VAR_2, 0x127, 0x70);


   FUNC_1(VAR_2, 0x12c, 0x11201fff);






   FUNC_1(VAR_2, 0x128, 0xa00d2ef8);
   break;

  case 44100:




   FUNC_1(VAR_2, 0x108, 0x240e040f);



   FUNC_1(VAR_2, 0x10c, 0x002be2fe);



   FUNC_1(VAR_2, 0x110, 0x0062a1f2);



   FUNC_1(VAR_2, 0x8f8, 0x080160cd);



   FUNC_1(VAR_2, 0x900, 0x08017385);
   FUNC_1(VAR_2, 0x904, 0x08017385);
   FUNC_1(VAR_2, 0x90c, 0x08017385);


   FUNC_0(VAR_2, 0x127, 0x64);


   FUNC_1(VAR_2, 0x12c, 0x112061ff);






   FUNC_1(VAR_2, 0x128, 0xa01d4bf8);
   break;

  case 48000:




   FUNC_1(VAR_2, 0x108, 0x200d040f);



   FUNC_1(VAR_2, 0x10c, 0x002be2fe);



   FUNC_1(VAR_2, 0x110, 0x0176740c);



   FUNC_1(VAR_2, 0x8f8, 0x08018000);



   FUNC_1(VAR_2, 0x900, 0x08015555);
   FUNC_1(VAR_2, 0x904, 0x08015555);
   FUNC_1(VAR_2, 0x90c, 0x08015555);


   FUNC_0(VAR_2, 0x127, 0x60);


   FUNC_1(VAR_2, 0x12c, 0x11203fff);






   FUNC_1(VAR_2, 0x128, 0xa01193f8);
   break;
  }
 }

 VAR_4->audclk_freq = VAR_3;

 return 0;
}
