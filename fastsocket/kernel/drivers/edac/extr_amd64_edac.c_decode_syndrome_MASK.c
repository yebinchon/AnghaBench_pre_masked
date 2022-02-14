
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;


 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(u16 VAR_0, u16 *VAR_1, unsigned VAR_2,
      unsigned VAR_3)
{
 unsigned int VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2 / VAR_3; VAR_5++) {
  u16 VAR_6 = VAR_0;
  unsigned VAR_7 = VAR_5 * VAR_3;
  unsigned VAR_8 = (VAR_5 + 1) * VAR_3;


  for (VAR_4 = 1; VAR_4 < (1U << 16); VAR_4 <<= 1) {


   if (VAR_7 < VAR_8 && VAR_1[VAR_7] & VAR_4) {
    u16 VAR_9 = VAR_1[VAR_7++];


    if (VAR_6 & VAR_4) {

     VAR_6 ^= VAR_9;

     if (!VAR_6)
      return VAR_5;
    }

   } else if (VAR_6 & VAR_4)

    break;
  }
 }

 FUNC_0("syndrome(%x) not found\n", VAR_0);
 return -1;
}
