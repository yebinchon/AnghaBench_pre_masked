
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

int FUNC_3(const char *VAR_1, char *VAR_2, int VAR_3)
{
 u32 VAR_4 = VAR_0.hdr.cmd_line_ptr;
 addr_t VAR_5;
 char VAR_6;
 int VAR_7 = -1;
 const char *VAR_8 = ((void*)0);
 char *VAR_9 = VAR_2;
 enum {
  st_wordstart,
  st_wordcmp,
  st_wordskip,
  st_bufcpy
 } VAR_10 = st_wordstart;

 if (!VAR_4 || VAR_4 >= 0x100000)
  return -1;

 VAR_5 = VAR_4 & 0xf;
 FUNC_2(VAR_4 >> 4);

 while (VAR_5 < 0x10000 && (VAR_6 = FUNC_1(VAR_5++))) {
  switch (VAR_10) {
  case st_wordstart:
   if (FUNC_0(VAR_6))
    break;


   VAR_10 = st_wordcmp;
   VAR_8 = VAR_1;


  case st_wordcmp:
   if (VAR_6 == '=' && !*VAR_8) {
    VAR_7 = 0;
    VAR_9 = VAR_2;
    VAR_10 = st_bufcpy;
   } else if (FUNC_0(VAR_6)) {
    VAR_10 = st_wordstart;
   } else if (VAR_6 != *VAR_8++) {
    VAR_10 = st_wordskip;
   }
   break;

  case st_wordskip:
   if (FUNC_0(VAR_6))
    VAR_10 = st_wordstart;
   break;

  case st_bufcpy:
   if (FUNC_0(VAR_6)) {
    VAR_10 = st_wordstart;
   } else {
    if (VAR_7 < VAR_3-1)
     *VAR_9++ = VAR_6;
    VAR_7++;
   }
   break;
  }
 }

 if (VAR_3)
  *VAR_9 = '\0';

 return VAR_7;
}
