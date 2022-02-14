
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*,int,int,int) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, size_t VAR_1, int VAR_2)
{
  VAR_2 += 150;
  FUNC_0(VAR_0, VAR_1, "%02d:%02d:%02d", VAR_2 / 60 / 75,
    (VAR_2 / 75) % 60, VAR_2 % 75);
}
