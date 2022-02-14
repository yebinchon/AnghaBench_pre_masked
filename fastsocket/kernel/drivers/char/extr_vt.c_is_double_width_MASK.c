
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct interval {int member_0; int member_1; } ;


 scalar_t__ FUNC_0 (struct interval const*) ;
 int FUNC_1 (int ,struct interval const*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(uint32_t VAR_0)
{
 static const struct interval VAR_1[] = {
  { 0x1100, 0x115F }, { 0x2329, 0x232A }, { 0x2E80, 0x303E },
  { 0x3040, 0xA4CF }, { 0xAC00, 0xD7A3 }, { 0xF900, 0xFAFF },
  { 0xFE10, 0xFE19 }, { 0xFE30, 0xFE6F }, { 0xFF00, 0xFF60 },
  { 0xFFE0, 0xFFE6 }, { 0x20000, 0x2FFFD }, { 0x30000, 0x3FFFD }
 };
 return FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_1) - 1);
}
