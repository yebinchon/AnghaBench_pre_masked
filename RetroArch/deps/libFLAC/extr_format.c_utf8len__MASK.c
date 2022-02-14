
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FLAC__byte ;


 int FUNC_0 (int) ;

__attribute__((used)) static unsigned FUNC_1(const FLAC__byte *VAR_0)
{
 FUNC_0(0 != VAR_0);
 if ((VAR_0[0] & 0x80) == 0) {
  return 1;
 }
 else if ((VAR_0[0] & 0xE0) == 0xC0 && (VAR_0[1] & 0xC0) == 0x80) {
  if ((VAR_0[0] & 0xFE) == 0xC0)
   return 0;
  return 2;
 }
 else if ((VAR_0[0] & 0xF0) == 0xE0 && (VAR_0[1] & 0xC0) == 0x80 && (VAR_0[2] & 0xC0) == 0x80) {
  if (VAR_0[0] == 0xE0 && (VAR_0[1] & 0xE0) == 0x80)
   return 0;

  if (VAR_0[0] == 0xED && (VAR_0[1] & 0xE0) == 0xA0)
   return 0;
  if (VAR_0[0] == 0xEF && VAR_0[1] == 0xBF && (VAR_0[2] & 0xFE) == 0xBE)
   return 0;
  return 3;
 }
 else if ((VAR_0[0] & 0xF8) == 0xF0 && (VAR_0[1] & 0xC0) == 0x80 && (VAR_0[2] & 0xC0) == 0x80 && (VAR_0[3] & 0xC0) == 0x80) {
  if (VAR_0[0] == 0xF0 && (VAR_0[1] & 0xF0) == 0x80)
   return 0;
  return 4;
 }
 else if ((VAR_0[0] & 0xFC) == 0xF8 && (VAR_0[1] & 0xC0) == 0x80 && (VAR_0[2] & 0xC0) == 0x80 && (VAR_0[3] & 0xC0) == 0x80 && (VAR_0[4] & 0xC0) == 0x80) {
  if (VAR_0[0] == 0xF8 && (VAR_0[1] & 0xF8) == 0x80)
   return 0;
  return 5;
 }
 else if ((VAR_0[0] & 0xFE) == 0xFC && (VAR_0[1] & 0xC0) == 0x80 && (VAR_0[2] & 0xC0) == 0x80 && (VAR_0[3] & 0xC0) == 0x80 && (VAR_0[4] & 0xC0) == 0x80 && (VAR_0[5] & 0xC0) == 0x80) {
  if (VAR_0[0] == 0xFC && (VAR_0[1] & 0xFC) == 0x80)
   return 0;
  return 6;
 }
 else {
  return 0;
 }
}
