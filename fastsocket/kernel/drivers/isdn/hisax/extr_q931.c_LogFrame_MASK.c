
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct IsdnCardState {char* dlog; } ;


 int FUNC_0 (struct IsdnCardState*,char*,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*,int *,int) ;

void
FUNC_2(struct IsdnCardState *VAR_1, u_char * VAR_2, int VAR_3)
{
 char *VAR_4;

 if (VAR_3 < 1)
  return;
 VAR_4 = VAR_1->dlog;
 if (VAR_3 < VAR_0 / 3 - 10) {
  *VAR_4++ = 'H';
  *VAR_4++ = 'E';
  *VAR_4++ = 'X';
  *VAR_4++ = ':';
  VAR_4 += FUNC_1(VAR_4, VAR_2, VAR_3);
  VAR_4--;
  *VAR_4++ = '\n';
  *VAR_4 = 0;
  FUNC_0(VAR_1, ((void*)0), VAR_1->dlog);
 } else
  FUNC_0(VAR_1, "LogFrame: ", "warning Frame too big (%d)", VAR_3);
}
