
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {int* ipv6_addr; } ;
typedef TYPE_1__ IP ;


 scalar_t__ FUNC_0 (int*,int*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int**,int) ;

UINT FUNC_6(IP *VAR_9)
{
 UINT VAR_10 = 0;

 if (FUNC_4(VAR_9) == 0)
 {
  return 0;
 }

 if (VAR_9->ipv6_addr[0] == 0xff)
 {
  IP VAR_11, VAR_12;

  FUNC_1(&VAR_11);

  FUNC_2(&VAR_12);

  VAR_10 |= VAR_5;

  if (FUNC_0(VAR_9->ipv6_addr, VAR_11.ipv6_addr, 16) == 0)
  {
   VAR_10 |= VAR_0;
  }
  else if (FUNC_0(VAR_9->ipv6_addr, VAR_12.ipv6_addr, 16) == 0)
  {
   VAR_10 |= VAR_1;
  }
  else
  {
   if (VAR_9->ipv6_addr[1] == 0x02 && VAR_9->ipv6_addr[2] == 0 && VAR_9->ipv6_addr[3] == 0 &&
    VAR_9->ipv6_addr[4] == 0 && VAR_9->ipv6_addr[5] == 0 && VAR_9->ipv6_addr[6] == 0 &&
    VAR_9->ipv6_addr[7] == 0 && VAR_9->ipv6_addr[8] == 0 && VAR_9->ipv6_addr[9] == 0 &&
    VAR_9->ipv6_addr[10] == 0 && VAR_9->ipv6_addr[11] == 0x01 && VAR_9->ipv6_addr[12] == 0xff)
   {
    VAR_10 |= VAR_6;
   }
  }
 }
 else
 {
  VAR_10 |= VAR_7;

  if (VAR_9->ipv6_addr[0] == 0xfe && (VAR_9->ipv6_addr[1] & 0xc0) == 0x80)
  {
   VAR_10 |= VAR_3;
  }
  else
  {
   VAR_10 |= VAR_2;

   if (FUNC_5(&VAR_9->ipv6_addr, 16))
   {
    VAR_10 |= VAR_8;
   }
   else
   {
    IP VAR_13;

    FUNC_3(&VAR_13);

    if (FUNC_0(VAR_9->ipv6_addr, VAR_13.ipv6_addr, 16) == 0)
    {
     VAR_10 |= VAR_4;
    }
   }
  }
 }

 return VAR_10;
}
