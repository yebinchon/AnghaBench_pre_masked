
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;

void FUNC_1(char *VAR_0, unsigned int VAR_1) {
  FUNC_0(VAR_0, "%d.%d.%d.%d", VAR_1 & 0xFF, (VAR_1 >> 8) & 0xFF, (VAR_1 >> 16) & 0xFF, VAR_1 >> 24);
}
