
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zr36050 {int dri; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct zr36050*,int ,int,char*) ;

__attribute__((used)) static int
FUNC_2 (struct zr36050 *VAR_1)
{
 char VAR_2[6];

 FUNC_0(3, "%s: write DRI\n", VAR_1->name);
 VAR_2[0] = 0xff;
 VAR_2[1] = 0xdd;
 VAR_2[2] = 0x00;
 VAR_2[3] = 0x04;
 VAR_2[4] = VAR_1->dri >> 8;
 VAR_2[5] = VAR_1->dri & 0xff;
 return FUNC_1(VAR_1, VAR_0, 6, VAR_2);
}
