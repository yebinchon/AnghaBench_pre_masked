
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;

__attribute__((used)) static int FUNC_0(const long *VAR_4, unsigned int *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 const u16 *VAR_8 = (const u16*) VAR_4;





 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (*VAR_8 == (0xffff)) {




   VAR_5[VAR_6] = *((u32*)VAR_8);
   VAR_8 += 2;
  } else if (*VAR_8 & (0x8000)) {

   VAR_5[VAR_6] = *VAR_8 & (~(0x8000));
   VAR_8++;
   VAR_7++;
  } else {



   VAR_5[VAR_6] = *((u32*)VAR_8);
   VAR_8 += 2;
   VAR_7++;
  }
 }

 return VAR_7;
}
