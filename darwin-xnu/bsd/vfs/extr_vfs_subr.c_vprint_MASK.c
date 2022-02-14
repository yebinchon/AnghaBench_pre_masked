
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {size_t v_type; int v_usecount; int v_writecount; int v_flag; } ;
typedef int sbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 (char*,char*,int) ;
 char** VAR_5 ;
 scalar_t__ FUNC_2 (struct vnode*) ;

void
FUNC_3(const char *VAR_6, struct vnode *VAR_7)
{
 char VAR_8[64];

 if (VAR_6 != ((void*)0))
  FUNC_0("%s: ", VAR_6);
 FUNC_0("type %s, usecount %d, writecount %d",
        VAR_5[VAR_7->v_type], VAR_7->v_usecount, VAR_7->v_writecount);
 VAR_8[0] = '\0';
 if (VAR_7->v_flag & VAR_2)
  FUNC_1(VAR_8, "|VROOT", sizeof(VAR_8));
 if (VAR_7->v_flag & VAR_4)
  FUNC_1(VAR_8, "|VTEXT", sizeof(VAR_8));
 if (VAR_7->v_flag & VAR_3)
  FUNC_1(VAR_8, "|VSYSTEM", sizeof(VAR_8));
 if (VAR_7->v_flag & VAR_1)
  FUNC_1(VAR_8, "|VNOFLUSH", sizeof(VAR_8));
 if (VAR_7->v_flag & VAR_0)
  FUNC_1(VAR_8, "|VBWAIT", sizeof(VAR_8));
 if (FUNC_2(VAR_7))
  FUNC_1(VAR_8, "|VALIASED", sizeof(VAR_8));
 if (VAR_8[0] != '\0')
  FUNC_0(" flags (%s)", &VAR_8[1]);
}
