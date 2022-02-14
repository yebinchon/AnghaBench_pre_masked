
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zr36050 {int width; int height; int* h_samp_ratio; int* v_samp_ratio; int name; } ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ,int,int,int) ;
 int FUNC_1 (struct zr36050*,int ,int,char*) ;
 char* VAR_3 ;

__attribute__((used)) static int
FUNC_2 (struct zr36050 *VAR_4)
{
 char VAR_5[34];
 int VAR_6;

 FUNC_0(3, "%s: write SOF (%dx%d, %d components)\n", VAR_4->name,
  VAR_4->width, VAR_4->height, VAR_1);
 VAR_5[0] = 0xff;
 VAR_5[1] = 0xc0;
 VAR_5[2] = 0x00;
 VAR_5[3] = (3 * VAR_1) + 8;
 VAR_5[4] = VAR_0;
 VAR_5[5] = (VAR_4->height) >> 8;
 VAR_5[6] = (VAR_4->height) & 0xff;
 VAR_5[7] = (VAR_4->width) >> 8;
 VAR_5[8] = (VAR_4->width) & 0xff;
 VAR_5[9] = VAR_1;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5[10 + (VAR_6 * 3)] = VAR_6;
  VAR_5[11 + (VAR_6 * 3)] = (VAR_4->h_samp_ratio[VAR_6] << 4) | (VAR_4->v_samp_ratio[VAR_6]);
  VAR_5[12 + (VAR_6 * 3)] = VAR_3[VAR_6];
 }
 return FUNC_1(VAR_4, VAR_2,
         (3 * VAR_1) + 10, VAR_5);
}
