
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,unsigned int,unsigned int,unsigned int) ;

void FUNC_3(u32 *VAR_0, unsigned int VAR_1, unsigned int VAR_2,
      unsigned int VAR_3,
      u32 *VAR_4, unsigned int VAR_5, unsigned int VAR_6,
      unsigned int VAR_7, unsigned int VAR_8)
{
 *VAR_0 = FUNC_2(*VAR_0, VAR_1, VAR_2, VAR_3);
 *VAR_4 = FUNC_2(*VAR_4, VAR_5, VAR_6, VAR_7);


 if (!VAR_8)
  return;


 VAR_3 = FUNC_0(*VAR_0);
 VAR_7 = FUNC_0(*VAR_4);

 if (VAR_3 + VAR_7 < VAR_8) {

  unsigned int VAR_9 = FUNC_1(VAR_2 ^ (VAR_1 - 1));

  unsigned int VAR_10 = FUNC_1(VAR_6 ^ (VAR_5 - 1));


  do {
   if (VAR_7 >= VAR_10 ||
       (VAR_3 <= VAR_7 && VAR_3 < VAR_9)) {
    *VAR_0 = FUNC_2(*VAR_0, VAR_1, VAR_2, VAR_3 + 1);
    VAR_3 = FUNC_0(*VAR_0);
   } else {
    *VAR_4 = FUNC_2(*VAR_4, VAR_5, VAR_6, VAR_7 + 1);
    VAR_7 = FUNC_0(*VAR_4);
   }
  } while (VAR_7 + VAR_3 < VAR_8);
 }
}
