
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_par {int pci_dev; } ;
struct fb_info {int* bl_curve; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fb_info* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct nvidia_par *VAR_3,
  int VAR_4)
{
 struct fb_info *VAR_5 = FUNC_0(VAR_3->pci_dev);
 int VAR_6;



 VAR_6 = VAR_2 + VAR_5->bl_curve[VAR_4] * VAR_0;

 if (VAR_6 < 0)
  VAR_6 = 0;
 else if (VAR_6 < VAR_2)
  VAR_6 = VAR_2;
 else if (VAR_6 > VAR_1)
  VAR_6 = VAR_1;

 return VAR_6;
}
