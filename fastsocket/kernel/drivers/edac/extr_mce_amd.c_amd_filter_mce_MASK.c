
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mce {int status; int bank; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct mce *VAR_1)
{
 u8 VAR_2 = (VAR_1->status >> 16) & 0x1f;




 if (VAR_1->bank == 4 && VAR_2 == 0x5 && !VAR_0)
  return 1;

 return 0;
}
