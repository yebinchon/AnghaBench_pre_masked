
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tridentfb_par {int io_virt; int chip_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tridentfb_par*,int) ;
 int FUNC_2 (struct tridentfb_par*,int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct tridentfb_par *VAR_3)
{

 FUNC_3(VAR_3->io_virt, 0x0B);


 FUNC_4(VAR_3->io_virt, VAR_0, 0x80);
 if (!FUNC_0(VAR_3->chip_id))
  FUNC_4(VAR_3->io_virt, VAR_2, 0x92);


 FUNC_2(VAR_3, VAR_1, 0x3D4);
 FUNC_2(VAR_3, FUNC_1(VAR_3, 0x3D5) & ~0x01, 0x3D5);
}
