
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_device {int pos_register; int slot; unsigned char* pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned char FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static unsigned char FUNC_5(struct mca_device *VAR_3, int VAR_4)
{
 unsigned char VAR_5;
 unsigned long VAR_6;

 if (VAR_4 < 0 || VAR_4 >= 8)
  return 0;

 FUNC_3(&VAR_2, VAR_6);
 if (VAR_3->pos_register) {


  FUNC_2(0, VAR_0);
  FUNC_2(VAR_3->pos_register, VAR_1);

  VAR_5 = FUNC_1(FUNC_0(VAR_4));
  FUNC_2(0xff, VAR_1);
 } else {



  FUNC_2(0xff, VAR_1);



  FUNC_2(0x8|(VAR_3->slot & 0xf), VAR_0);
  VAR_5 = FUNC_1(FUNC_0(VAR_4));
  FUNC_2(0, VAR_0);
 }
 FUNC_4(&VAR_2, VAR_6);

 VAR_3->pos[VAR_4] = VAR_5;

 return VAR_5;
}
