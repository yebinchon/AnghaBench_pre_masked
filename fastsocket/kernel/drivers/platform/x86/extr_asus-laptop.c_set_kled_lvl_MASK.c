
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int *,int,int *) ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{
 if (VAR_2 > 0)
  VAR_2 = (1 << 7) | (VAR_2 & 0x7F);
 else
  VAR_2 = 0;

 if (FUNC_1(VAR_1, ((void*)0), VAR_2, ((void*)0))) {
  FUNC_0("Keyboard LED display write failed\n");
  return -VAR_0;
 }
 return 0;
}
