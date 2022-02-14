
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zr36060 {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct zr36060*,int ,int,char*) ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int
FUNC_2 (struct zr36060 *VAR_4)
{
 char VAR_5[16];
 int VAR_6;

 FUNC_0(3, "%s: write SOS\n", VAR_4->name);
 VAR_5[0] = 0xff;
 VAR_5[1] = 0xda;
 VAR_5[2] = 0x00;
 VAR_5[3] = 2 + 1 + (2 * VAR_0) + 3;
 VAR_5[4] = VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5[5 + (VAR_6 * 2)] = VAR_6;
  VAR_5[6 + (VAR_6 * 2)] = (VAR_3[VAR_6] << 4) |
     VAR_2[VAR_6];
 }
 VAR_5[2 + 1 + (2 * VAR_0) + 2] = 00;
 VAR_5[2 + 1 + (2 * VAR_0) + 3] = 0x3f;
 VAR_5[2 + 1 + (2 * VAR_0) + 4] = 00;
 return FUNC_1(VAR_4, VAR_1,
         4 + 1 + (2 * VAR_0) + 3,
         VAR_5);
}
