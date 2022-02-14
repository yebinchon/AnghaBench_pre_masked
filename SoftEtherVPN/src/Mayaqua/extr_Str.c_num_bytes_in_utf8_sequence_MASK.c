
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static int FUNC_1(unsigned char VAR_0) {
 if (VAR_0 == 0xC0 || VAR_0 == 0xC1 || VAR_0 > 0xF4 || FUNC_0(VAR_0)) {
  return 0;
 }
 else if ((VAR_0 & 0x80) == 0) {
  return 1;
 }
 else if ((VAR_0 & 0xE0) == 0xC0) {
  return 2;
 }
 else if ((VAR_0 & 0xF0) == 0xE0) {
  return 3;
 }
 else if ((VAR_0 & 0xF8) == 0xF0) {
  return 4;
 }
 return 0;
}
