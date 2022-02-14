
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char unw_word ;


 int VAR_0 ;
 int FUNC_0 (int ,int,unsigned char,void*) ;

__attribute__((used)) static unsigned char *
FUNC_1 (unsigned char *VAR_1, unsigned char VAR_2, void *VAR_3)
{
  int VAR_4 = (VAR_2 & 0x20) != 0;
  unw_word VAR_5;

  VAR_5 = (VAR_2 & 0x1f);
  FUNC_0(VAR_0, VAR_4, VAR_5, VAR_3);
  return VAR_1;
}
