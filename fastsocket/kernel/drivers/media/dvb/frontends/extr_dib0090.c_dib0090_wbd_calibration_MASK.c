
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dib0090_state {int reset; int wbd_offset; } ;
typedef enum frontend_tune_state { ____Placeholder_frontend_tune_state } frontend_tune_state ;




 int VAR_0 ;
 int FUNC_0 (struct dib0090_state*,int) ;
 int FUNC_1 (struct dib0090_state*,int,int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct dib0090_state *VAR_1, enum frontend_tune_state *VAR_2)
{
 switch (*VAR_2) {
 case 129:

  FUNC_1(VAR_1, 0x10, 0xdb09 | (1 << 10));
  FUNC_1(VAR_1, 0x24, VAR_0 & 0x0fff);

  *VAR_2 = 128;
  return 90;
 case 128:
  VAR_1->wbd_offset = FUNC_0(VAR_1, 0x1d);
  FUNC_2("WBD calibration offset = %d", VAR_1->wbd_offset);

  *VAR_2 = 129;
  VAR_1->reset &= ~0x2;
  break;
 default:
  break;
 }
 return 0;
}
