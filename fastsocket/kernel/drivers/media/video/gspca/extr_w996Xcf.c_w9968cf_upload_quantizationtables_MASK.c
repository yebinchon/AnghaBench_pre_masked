
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sd {int dummy; } ;


 unsigned int* VAR_0 ;
 unsigned int* VAR_1 ;
 int FUNC_0 (struct sd*,int,int) ;

__attribute__((used)) static void FUNC_1(struct sd *VAR_2)
{
 u16 VAR_3, VAR_4;
 int VAR_5, VAR_6;

 FUNC_0(VAR_2, 0x39, 0x0010);

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < 32; VAR_5++, VAR_6 += 2) {
  VAR_3 = VAR_1[VAR_6] | ((unsigned)(VAR_1[VAR_6 + 1]) << 8);
  VAR_4 = VAR_0[VAR_6] | ((unsigned)(VAR_0[VAR_6 + 1]) << 8);
  FUNC_0(VAR_2, 0x40 + VAR_5, VAR_3);
  FUNC_0(VAR_2, 0x60 + VAR_5, VAR_4);
 }
 FUNC_0(VAR_2, 0x39, 0x0012);
}
