
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static inline int FUNC_4(unsigned int VAR_3, char VAR_4)
{
 unsigned long VAR_5;
 uint16_t VAR_6;

 if (VAR_4 != '0' && VAR_4 != '1')
  return -VAR_0;

 FUNC_0(&VAR_2, VAR_5);
 VAR_6 = FUNC_2(VAR_1);
 if (VAR_4 == '0')
  VAR_6 &= ~(1 << VAR_3);
 else
  VAR_6 |= 1 << VAR_3;
 FUNC_3(VAR_1, VAR_6);
 FUNC_1(&VAR_2, VAR_5);

 return 0;

}
