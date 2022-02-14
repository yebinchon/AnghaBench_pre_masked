
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, unsigned VAR_1) {
 if(VAR_1 <= 0x007F)
  FUNC_0(VAR_0++, VAR_1);
 else if(VAR_1 <= 0x07FF) {
  FUNC_0(VAR_0++, 0xC0 | (VAR_1>>6));
  FUNC_0(VAR_0++, 0x80 | (VAR_1 & 0x3F));
 } else if(VAR_1 <= 0xFFFF) {
  FUNC_0(VAR_0++, 0xE0 | (VAR_1>>12));
  FUNC_0(VAR_0++, 0x80 | ((VAR_1>>6) & 0x3F));
  FUNC_0(VAR_0++, 0x80 | (VAR_1 & 0x3F));
 } else {
  FUNC_0(VAR_0++, 0xF0 | (VAR_1>>18));
  FUNC_0(VAR_0++, 0x80 | ((VAR_1>>12) & 0x3F));
  FUNC_0(VAR_0++, 0x80 | ((VAR_1>>6) & 0x3F));
  FUNC_0(VAR_0++, 0x80 | (VAR_1 & 0x3F));
 }
 *VAR_0 = 0;
}
