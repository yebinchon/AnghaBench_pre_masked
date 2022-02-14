
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct adapter *VAR_6,
         unsigned int VAR_7, int VAR_8)
{
 u32 VAR_9;

 if (VAR_7 > VAR_5)
  return -VAR_2;

 VAR_9 = FUNC_3(VAR_6, VAR_1);
 VAR_9 &= ~(VAR_3 | VAR_4);

 if (VAR_7) {
  VAR_9 |= VAR_3;
  if (VAR_8)
   VAR_9 |= VAR_4;
  VAR_7 = FUNC_2(VAR_5, VAR_7);
  FUNC_4(VAR_6, VAR_0, FUNC_1(VAR_7) |
        FUNC_0(VAR_5));
 }
 FUNC_4(VAR_6, VAR_1, VAR_9);
 return 0;
}
