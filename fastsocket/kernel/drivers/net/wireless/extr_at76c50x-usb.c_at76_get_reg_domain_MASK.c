
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct reg_domain {int member_0; char* member_1; int member_2; scalar_t__ code; } ;


 int FUNC_0 (struct reg_domain const*) ;

__attribute__((used)) static struct reg_domain const *FUNC_1(u16 VAR_0)
{
 int VAR_1;
 static struct reg_domain const VAR_2[] = {
  { 0x10, "FCC (USA)", 0x7ff },
  { 0x20, "IC (Canada)", 0x7ff },
  { 0x30, "ETSI (most of Europe)", 0x1fff },
  { 0x31, "Spain", 0x600 },
  { 0x32, "France", 0x1e00 },
  { 0x40, "MKK (Japan)", 0x2000 },
  { 0x41, "MKK1 (Japan)", 0x3fff },
  { 0x50, "Israel", 0x3fc },
  { 0x00, "<unknown>", 0xffffffff }
 };


 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_2) - 1; VAR_1++)
  if (VAR_0 == VAR_2[VAR_1].code)
   break;

 return &VAR_2[VAR_1];
}
