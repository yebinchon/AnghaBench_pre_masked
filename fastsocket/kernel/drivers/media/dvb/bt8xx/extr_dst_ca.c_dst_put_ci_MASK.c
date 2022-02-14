
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dst_state {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int,char*) ;
 scalar_t__ FUNC_1 (struct dst_state*,scalar_t__*,scalar_t__*,int,int) ;
 int FUNC_2 (struct dst_state*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct dst_state *VAR_3, u8 *VAR_4, int VAR_5, u8 *VAR_6, int VAR_7)
{
 u8 VAR_8 = 0;

 while (VAR_8 < VAR_1) {
  FUNC_0(VAR_2, VAR_0, 1, " Put Command");
  if (FUNC_1(VAR_3, VAR_4, VAR_6, VAR_5, VAR_7)) {
   FUNC_2(VAR_3);
   VAR_8++;
  } else {
   break;
  }
 }

 if(VAR_8 == VAR_1)
  return -1;

 return 0;
}
