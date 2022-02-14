
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
typedef int type ;
struct vc_data {int vc_cursor_type; int vc_x; int vc_y; TYPE_1__* vc_sw; scalar_t__ vc_pos; } ;
struct TYPE_2__ {int (* con_putc ) (struct vc_data*,int,int ,int ) ;} ;


 scalar_t__ FUNC_0 (struct vc_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int VAR_0 ;
 int FUNC_3 (struct vc_data*,int,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_1)
{
 int VAR_2 = FUNC_1((u16 *) VAR_1->vc_pos);
 u32 VAR_3 = VAR_1->vc_cursor_type;

 if (! (VAR_3 & 0x10)) return;
 if (VAR_0 != -1) return;
 VAR_0 = VAR_2;
 VAR_2 |= ((VAR_3 >> 8) & 0xff00 );
 VAR_2 ^= ((VAR_3) & 0xff00 );
 if ((VAR_3 & 0x20) && ((VAR_0 & 0x7000) == (VAR_2 & 0x7000))) VAR_2 ^= 0x7000;
 if ((VAR_3 & 0x40) && ((VAR_2 & 0x700) == ((VAR_2 & 0x7000) >> 4))) VAR_2 ^= 0x0700;
 FUNC_2(VAR_2, (u16 *) VAR_1->vc_pos);
 if (FUNC_0(VAR_1))
  VAR_1->vc_sw->con_putc(VAR_1, VAR_2, VAR_1->vc_y, VAR_1->vc_x);
}
