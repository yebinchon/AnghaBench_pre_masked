
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;

void FUNC_2 (unsigned long VAR_0, void *VAR_1, unsigned long VAR_2)
{
 unsigned int VAR_3 = 0, VAR_4;
 unsigned char *VAR_5;

 VAR_5 = (unsigned char *)VAR_1;

 if (!VAR_2)
  return;

 switch (((unsigned long) VAR_1) & 0x3)
 {
  case 0x00:
  while (VAR_2--)
  {
   *(unsigned int *)VAR_5 = FUNC_0(FUNC_1(VAR_0));
   VAR_5 += 4;
  }
  break;

  case 0x02:
  --VAR_2;

  VAR_3 = FUNC_0(FUNC_1(VAR_0));
  *(unsigned short *)VAR_5 = VAR_3 >> 16;
  VAR_5 += 2;

  while (VAR_2--)
  {
   VAR_4 = FUNC_0(FUNC_1(VAR_0));
   *(unsigned int *)VAR_5 = (VAR_3 & 0xffff) << 16 | (VAR_4 >> 16);
   VAR_5 += 4;
   VAR_3 = VAR_4;
  }
  *(unsigned short *)VAR_5 = VAR_3 & 0xffff;
  break;
  case 0x01:
  --VAR_2;

  VAR_3 = FUNC_0(FUNC_1(VAR_0));
  *(unsigned char *)VAR_5 = VAR_3 >> 24;
  VAR_5++;
  *(unsigned short *)VAR_5 = (VAR_3 >> 8) & 0xffff;
  VAR_5 += 2;
  while (VAR_2--)
  {
   VAR_4 = FUNC_0(FUNC_1(VAR_0));
   *(unsigned int *)VAR_5 = (VAR_3 & 0xff) << 24 | (VAR_4 >> 8);
   VAR_5 += 4;
   VAR_3 = VAR_4;
  }
  *VAR_5 = VAR_3 & 0xff;
  break;
  case 0x03:
  --VAR_2;

  VAR_3 = FUNC_0(FUNC_1(VAR_0));
  *VAR_5 = VAR_3 >> 24;
  VAR_5++;
  while (VAR_2--)
  {
   VAR_4 = FUNC_0(FUNC_1(VAR_0));
   *(unsigned int *)VAR_5 = (VAR_3 & 0xffffff) << 8 | VAR_4 >> 24;
   VAR_5 += 4;
   VAR_3 = VAR_4;
  }
  *(unsigned short *)VAR_5 = (VAR_3 >> 8) & 0xffff;
  VAR_5 += 2;
  *VAR_5 = VAR_3 & 0xff;
  break;
 }
}
