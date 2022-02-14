
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t e_shstrndx; unsigned int e_shnum; } ;
struct TYPE_4__ {int sh_name; } ;
struct TYPE_5__ {char* strtab; TYPE_1__ shdr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static const char *FUNC_0(unsigned VAR_4)
{
 const char *VAR_5;
 const char *VAR_6;
 VAR_5 = VAR_3[VAR_2.e_shstrndx].strtab;
 VAR_6 = "<noname>";
 if (VAR_4 < VAR_2.e_shnum) {
  VAR_6 = VAR_5 + VAR_3[VAR_4].shdr.sh_name;
 }
 else if (VAR_4 == VAR_0) {
  VAR_6 = "ABSOLUTE";
 }
 else if (VAR_4 == VAR_1) {
  VAR_6 = "COMMON";
 }
 return VAR_6;
}
