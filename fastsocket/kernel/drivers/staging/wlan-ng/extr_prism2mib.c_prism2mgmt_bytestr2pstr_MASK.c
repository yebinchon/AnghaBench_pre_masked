
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_5__ {scalar_t__ len; int data; } ;
typedef TYPE_1__ p80211pstrd_t ;
struct TYPE_6__ {int data; scalar_t__ len; } ;
typedef TYPE_2__ hfa384x_bytestr_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

void FUNC_2(hfa384x_bytestr_t *VAR_0, p80211pstrd_t *VAR_1)
{
 VAR_1->len = (u8) (FUNC_0((u16) (VAR_0->len)));
 FUNC_1(VAR_1->data, VAR_0->data, VAR_1->len);
}
