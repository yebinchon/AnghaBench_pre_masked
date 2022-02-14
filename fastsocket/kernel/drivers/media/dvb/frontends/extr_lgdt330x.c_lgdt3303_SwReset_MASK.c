
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgdt330x_state {int dummy; } ;
typedef int reset ;


 int FUNC_0 (struct lgdt330x_state*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct lgdt330x_state* VAR_0)
{
 u8 VAR_1;
 u8 VAR_2[] = {
  0x02,
  0x00
 };

 VAR_1 = FUNC_0(VAR_0,
        VAR_2, sizeof(VAR_2));
 if (VAR_1 == 0) {


  VAR_2[1] = 0x01;
  VAR_1 = FUNC_0(VAR_0,
         VAR_2, sizeof(VAR_2));
 }
 return VAR_1;
}
