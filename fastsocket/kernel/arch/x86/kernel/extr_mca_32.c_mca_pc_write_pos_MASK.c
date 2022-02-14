
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_device {int slot; unsigned char* pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (unsigned char,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct mca_device *VAR_3, int VAR_4,
        unsigned char VAR_5)
{
 unsigned long VAR_6;

 if (VAR_4 < 0 || VAR_4 >= 8)
  return;

 FUNC_2(&VAR_2, VAR_6);



 FUNC_1(0xff, VAR_1);



 FUNC_1(0x8|(VAR_3->slot&0xf), VAR_0);
 FUNC_1(VAR_5, FUNC_0(VAR_4));
 FUNC_1(0, VAR_0);

 FUNC_3(&VAR_2, VAR_6);



 VAR_3->pos[VAR_4] = VAR_5;

}
