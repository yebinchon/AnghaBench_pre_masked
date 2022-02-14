
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8a66597_td {int maxpacket; int address; TYPE_1__* urb; } ;
struct r8a66597 {int dummy; } ;
typedef int __le16 ;
struct TYPE_2__ {scalar_t__ setup_packet; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct r8a66597*,int,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct r8a66597 *VAR_7,
     struct r8a66597_td *VAR_8)
{
 int VAR_9;
 __le16 *VAR_10 = (__le16 *)VAR_8->urb->setup_packet;
 unsigned long VAR_11 = VAR_6;

 FUNC_2(VAR_7, FUNC_1(VAR_8->address) | VAR_8->maxpacket,
         VAR_1);
 FUNC_2(VAR_7, ~(VAR_4 | VAR_3), VAR_2);

 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  FUNC_2(VAR_7, FUNC_0(VAR_10[VAR_9]), VAR_11);
  VAR_11 += 2;
 }
 FUNC_2(VAR_7, VAR_5, VAR_0);
}
