
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ubyte ;
struct TYPE_3__ {int x; int y; } ;
struct TYPE_4__ {TYPE_1__ pos; } ;
struct classic_ctrl_t {int type; int ls_raw; int btns; int rs_raw; float r_shoulder; float l_shoulder; TYPE_2__ rjs; TYPE_2__ ljs; } ;


 int FUNC_0 (short) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (struct classic_ctrl_t*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_3(struct classic_ctrl_t* VAR_4, ubyte* VAR_5) {







 if (VAR_4->type==2) {
  FUNC_2(VAR_4, FUNC_0(*(short*)(VAR_5 + 8)));


  VAR_4->ljs.pos.x = (VAR_5[0] >> 4) | (VAR_5[1] << 4);
  VAR_4->rjs.pos.x = (VAR_5[2] >> 4) | (VAR_5[3] << 4);
  VAR_4->ljs.pos.y = (VAR_5[4] >> 4) | (VAR_5[5] << 4);
  VAR_4->rjs.pos.y = (VAR_5[6] >> 4) | (VAR_5[7] << 4);

  VAR_4->ls_raw = VAR_4->btns & VAR_0 ? 0x1F : 0;
  VAR_4->rs_raw = VAR_4->btns & VAR_1 ? 0x1F : 0;
 }
 else {
  FUNC_2(VAR_4, FUNC_0(*(short*)(VAR_5 + 4)));


  VAR_4->ls_raw = (((VAR_5[2] & 0x60) >> 2) | ((VAR_5[3] & 0xE0) >> 5));
  VAR_4->rs_raw = (VAR_5[3] & 0x1F);






  VAR_4->r_shoulder = ((float)VAR_3 / 0x1F);
  VAR_4->l_shoulder = ((float)VAR_2 / 0x1F);


  VAR_4->ljs.pos.x = (VAR_5[0] & 0x3F);
  VAR_4->ljs.pos.y = (VAR_5[1] & 0x3F);
  VAR_4->rjs.pos.x = ((VAR_5[0] & 0xC0) >> 3) | ((VAR_5[1] & 0xC0) >> 5) | ((VAR_5[2] & 0x80) >> 7);
  VAR_4->rjs.pos.y = (VAR_5[2] & 0x1F);
 }


 FUNC_1(&VAR_4->ljs, VAR_4->ljs.pos.x, VAR_4->ljs.pos.y);
 FUNC_1(&VAR_4->rjs, VAR_4->rjs.pos.x, VAR_4->rjs.pos.y);

}
