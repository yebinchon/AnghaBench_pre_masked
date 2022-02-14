
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int* VAR_1 ;
 double FUNC_1 (double,float) ;
 int FUNC_2 (float,float) ;

__attribute__((used)) static void FUNC_3(int VAR_2, int VAR_3)
{
 float VAR_4 = (float) VAR_2 / 100.0f;
 int VAR_5;
 VAR_4 = 1 / VAR_4;

 if (VAR_2 == 100)
  VAR_3 = 0;


 VAR_1[0x2880>>1] &= ~(1<<12);

 VAR_1[0x295C>>1] = 0;
 for (VAR_5 = 0; VAR_5 < 256; VAR_5++)
 {
  unsigned char VAR_6;
  unsigned short VAR_7;
  const unsigned short VAR_8=143, VAR_9=177, VAR_10=97;
  double VAR_11;

  if (VAR_3)
  {

   VAR_11 = (( -128 * FUNC_0(-FUNC_2((float) VAR_5/64.0f + 2.0f , 2.0f))) +
    ( -64 * FUNC_0(-FUNC_2((float) VAR_5/64.0f + 1.0f , 2.0f))) +
    (VAR_10 * FUNC_0(-FUNC_2((float) VAR_5/64.0f - 1.0f , 2.0f))) +
    (VAR_8 * FUNC_0(-FUNC_2((float) VAR_5/64.0f - 2.0f , 2.0f))) +
    (VAR_9 * FUNC_0(-FUNC_2((float) VAR_5/64.0f - 3.0f , 2.0f))) +
    ( 256 * FUNC_0(-FUNC_2((float) VAR_5/64.0f - 4.0f , 2.0f))) +
    ( 320 * FUNC_0(-FUNC_2((float) VAR_5/64.0f - 5.0f , 2.0f))) +
    ( 384 * FUNC_0(-FUNC_2((float) VAR_5/64.0f - 6.0f , 2.0f)))) / 1.772637;
   VAR_11 += 0.5;
  }
  else
  {
   VAR_11 = (double)VAR_5;
  }

  VAR_6 = (unsigned char)(255.0 * FUNC_1(VAR_11/255.0, VAR_4));

  VAR_7 = (VAR_6<<8) | VAR_6;
  VAR_1[0x295E>>1]= VAR_7;
  VAR_1[0x295E>>1]= VAR_6;
 }

 VAR_0 = 1;
}
