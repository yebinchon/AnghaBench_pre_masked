
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* red; int* green; int* blue; } ;
struct fb_info {TYPE_1__ cmap; } ;
struct TYPE_4__ {int lut; int reset; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5 (unsigned int VAR_1, unsigned int VAR_2,
       unsigned int VAR_3, unsigned int VAR_4,
       struct fb_info *VAR_5)
{


 static int VAR_6 = -1;
 unsigned long VAR_7;

 VAR_2 >>= 8;
 VAR_3 >>= 8;
 VAR_4 >>= 8;

 FUNC_1(VAR_7);



 if (VAR_1 != VAR_6+1) {
  int VAR_8;


  FUNC_4(0, &VAR_0->reset);
  FUNC_2();


  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   FUNC_3(VAR_5->cmap.red[VAR_8] >> 8, &VAR_0->lut);
   FUNC_2();
   FUNC_3(VAR_5->cmap.green[VAR_8] >> 8, &VAR_0->lut);
   FUNC_2();
   FUNC_3(VAR_5->cmap.blue[VAR_8] >> 8, &VAR_0->lut);
   FUNC_2();
  }
 }

 FUNC_3(VAR_2, &VAR_0->lut);
 FUNC_2();
 FUNC_3(VAR_3, &VAR_0->lut);
 FUNC_2();
 FUNC_3(VAR_4, &VAR_0->lut);

 FUNC_0(VAR_7);
 VAR_6 = VAR_1;
 return 0;
}
