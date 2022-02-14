
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,int) ;

__attribute__((used)) static unsigned FUNC_2(unsigned VAR_1, unsigned VAR_2)
{
 VAR_1 = FUNC_1(VAR_1, VAR_2 + 8);
 VAR_1 = FUNC_1(VAR_1, 0xbU);
 if (VAR_1 < 8) {
  FUNC_0("max_rec %x out of range\n", VAR_1);
  VAR_1 = 8;
 }

 return (1 << (VAR_1 + 1)) - VAR_0;
}
