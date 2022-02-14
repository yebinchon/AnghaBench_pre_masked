
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {unsigned short* vc_screenbuf; size_t vc_x; size_t vc_y; size_t vc_cols; int vc_cursor_type; } ;
 int FUNC_0 (int ,unsigned short,size_t,size_t) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_1, int VAR_2)
{
    unsigned short VAR_3;

    VAR_3 = VAR_1->vc_screenbuf[VAR_1->vc_x + VAR_1->vc_y * VAR_1->vc_cols];
    switch (VAR_2) {
    case 134:
 FUNC_0(VAR_0, VAR_3, VAR_1->vc_y, VAR_1->vc_x);
 break;
    case 133:
    case 135:
 switch (VAR_1->vc_cursor_type & 0x0f) {
 case 128:
 case 130:
 case 131:
 case 129:
 case 132:
     FUNC_0(VAR_0, (VAR_3 & 255) + (0 << 8) + (7 << 11),
       VAR_1->vc_y, VAR_1->vc_x);
     break;
 }
 break;
    }
}
