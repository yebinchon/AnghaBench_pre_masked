
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
struct pbuf {scalar_t__ payload; } ;
struct TYPE_2__ {scalar_t__ num_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

struct pbuf* FUNC_0(struct pbuf *VAR_3,u8_t VAR_4,u8_t VAR_5,u8_t VAR_6)
{
 ((u8_t*)VAR_3->payload)[0] = VAR_1;
 ((u8_t*)VAR_3->payload)[1] = (VAR_4&0xff);
 ((u8_t*)VAR_3->payload)[2] = ((VAR_4>>8)|(VAR_5<<2));
 ((u8_t*)VAR_3->payload)[3] = VAR_6-VAR_0-1;

 if(VAR_2->num_cmd>0) VAR_2->num_cmd--;
 return VAR_3;
}
