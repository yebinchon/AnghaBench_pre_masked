
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1 (const char *VAR_1)
{
 unsigned long VAR_2;

 while ((VAR_2 = *VAR_1++) != '\0') {
  FUNC_0(VAR_2, 0, 0, 0, VAR_0);
  if (VAR_2 == '\n')
    FUNC_0('\r', 0, 0, 0, VAR_0);
 }
}
