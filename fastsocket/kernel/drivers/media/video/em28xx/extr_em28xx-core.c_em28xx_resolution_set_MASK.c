
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {int vbi_width; int norm; int vbi_height; int vscale; int hscale; int progressive; } ;


 int VAR_0 ;
 int FUNC_0 (struct em28xx*,int,int,int,int) ;
 int FUNC_1 (struct em28xx*,int ,int,int,int) ;
 int FUNC_2 (struct em28xx*,int ,int ) ;
 int FUNC_3 (struct em28xx*) ;
 int FUNC_4 (struct em28xx*) ;
 int FUNC_5 (struct em28xx*) ;
 int FUNC_6 (struct em28xx*) ;

int FUNC_7(struct em28xx *VAR_1)
{
 int VAR_2, VAR_3;
 VAR_2 = FUNC_6(VAR_1);
 VAR_3 = FUNC_5(VAR_1);


 VAR_1->vbi_width = 720;
 if (VAR_1->norm & VAR_0)
  VAR_1->vbi_height = 12;
 else
  VAR_1->vbi_height = 18;

 if (!VAR_1->progressive)
  VAR_3 >>= FUNC_5(VAR_1);

 FUNC_3(VAR_1);


 FUNC_0(VAR_1, 1, (VAR_2 - 4) >> 2, 1, (VAR_3 - 4) >> 2);
 if (FUNC_4(VAR_1) == 1)
  FUNC_1(VAR_1, 0, 2, VAR_2 >> 2, VAR_3 >> 2);
 else
  FUNC_1(VAR_1, 0, 0, VAR_2 >> 2, VAR_3 >> 2);

 return FUNC_2(VAR_1, VAR_1->hscale, VAR_1->vscale);
}
