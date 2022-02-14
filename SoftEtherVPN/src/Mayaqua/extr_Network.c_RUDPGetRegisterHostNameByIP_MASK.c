
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_5__ {int addr; } ;
typedef TYPE_1__ IP ;


 int FUNC_0 (char*,int,int *,int) ;
 int FUNC_1 (char*,TYPE_1__*,char*) ;
 int FUNC_2 (char*,int ,int ,char,char) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *,int) ;
 int VAR_0 ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (char*) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_8(char *VAR_3, UINT VAR_4, IP *VAR_5)
{
 char VAR_6[16];

 if (VAR_3 == ((void*)0))
 {
  return;
 }

 if (VAR_5 != ((void*)0) && FUNC_3(VAR_5))
 {
  UCHAR VAR_7[VAR_0];

  FUNC_6(VAR_7, VAR_5->addr, 4);
  FUNC_0(VAR_6, sizeof(VAR_6), VAR_7, 2);
 }
 else
 {
  UCHAR VAR_8[2];
  FUNC_5(VAR_8, 2);
  FUNC_0(VAR_6, sizeof(VAR_6), VAR_8, 2);
 }

 FUNC_7(VAR_6);
 FUNC_2(VAR_3, VAR_4,
  (FUNC_4() ? VAR_2 : VAR_1),
  VAR_6[2], VAR_6[3]);


 if (0)
 {
  FUNC_1("Hash Src IP: %r\n"
     "Hash Dst HN: %s\n",
     VAR_5,
     VAR_3);
 }
}
