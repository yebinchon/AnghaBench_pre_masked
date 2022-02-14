
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdio_func {scalar_t__ tmpbuf; } ;
typedef int __le16 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sdio_func*,scalar_t__,unsigned int,int) ;

u16 FUNC_2(struct sdio_func *VAR_0, unsigned int VAR_1, int *VAR_2)
{
 int VAR_3;

 if (VAR_2)
  *VAR_2 = 0;

 VAR_3 = FUNC_1(VAR_0, VAR_0->tmpbuf, VAR_1, 2);
 if (VAR_3) {
  if (VAR_2)
   *VAR_2 = VAR_3;
  return 0xFFFF;
 }

 return FUNC_0((__le16 *)VAR_0->tmpbuf);
}
