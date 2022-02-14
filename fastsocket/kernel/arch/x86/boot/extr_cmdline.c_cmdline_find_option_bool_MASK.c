
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int addr_t ;
struct TYPE_3__ {int cmd_line_ptr; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (char) ;
 char FUNC_1 (int ) ;
 int FUNC_2 (int) ;

int FUNC_3(const char *VAR_1)
{
 u32 VAR_2 = VAR_0.hdr.cmd_line_ptr;
 addr_t VAR_3;
 char VAR_4;
 int VAR_5 = 0, VAR_6 = 0;
 const char *VAR_7 = ((void*)0);
 enum {
  st_wordstart,
  st_wordcmp,
  st_wordskip,
 } VAR_8 = st_wordstart;

 if (!VAR_2 || VAR_2 >= 0x100000)
  return -1;

 VAR_3 = VAR_2 & 0xf;
 FUNC_2(VAR_2 >> 4);

 while (VAR_3 < 0x10000) {
  VAR_4 = FUNC_1(VAR_3++);
  VAR_5++;

  switch (VAR_8) {
  case st_wordstart:
   if (!VAR_4)
    return 0;
   else if (FUNC_0(VAR_4))
    break;

   VAR_8 = st_wordcmp;
   VAR_7 = VAR_1;
   VAR_6 = VAR_5;


  case st_wordcmp:
   if (!*VAR_7)
    if (!VAR_4 || FUNC_0(VAR_4))
     return VAR_6;
    else
     VAR_8 = st_wordskip;
   else if (!VAR_4)
    return 0;
   else if (VAR_4 != *VAR_7++)
    VAR_8 = st_wordskip;
   break;

  case st_wordskip:
   if (!VAR_4)
    return 0;
   else if (FUNC_0(VAR_4))
    VAR_8 = st_wordstart;
   break;
  }
 }

 return 0;
}
