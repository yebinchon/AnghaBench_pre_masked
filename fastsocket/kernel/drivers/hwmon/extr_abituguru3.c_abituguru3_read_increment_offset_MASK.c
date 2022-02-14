
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct abituguru3_data {int dummy; } ;


 int FUNC_0 (struct abituguru3_data*,int,int,int,int*) ;

__attribute__((used)) static int FUNC_1(struct abituguru3_data *VAR_0,
         u8 VAR_1, u8 VAR_2, u8 VAR_3,
         u8 *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  if ((VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2 + VAR_6, VAR_3,
    VAR_4 + VAR_6 * VAR_3)) != VAR_3) {
   if (VAR_7 < 0)
    return VAR_7;
   return VAR_6 * VAR_3 + VAR_7;
  }

 return VAR_6 * VAR_3;
}
