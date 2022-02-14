
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgdt330x_state {int dummy; } ;
typedef int reset ;


 int VAR_0 ;
 int FUNC_0 (struct lgdt330x_state*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct lgdt330x_state* VAR_1)
{
 u8 VAR_2;
 u8 VAR_3[] = {
  VAR_0,
  0x00

 };

 VAR_2 = FUNC_0(VAR_1,
        VAR_3, sizeof(VAR_3));
 if (VAR_2 == 0) {


  VAR_3[1] = 0x7f;
  VAR_2 = FUNC_0(VAR_1,
         VAR_3, sizeof(VAR_3));
 }
 return VAR_2;
}
