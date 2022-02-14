
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tcal; int sac; int format; } ;
struct tccb {TYPE_1__ tcah; } ;


 int VAR_0 ;
 int FUNC_0 (struct tccb*,int ,size_t) ;

void FUNC_1(struct tccb *VAR_1, size_t VAR_2, u32 VAR_3)
{
 FUNC_0(VAR_1, 0, VAR_2);
 VAR_1->tcah.format = VAR_0;
 VAR_1->tcah.sac = VAR_3;
 VAR_1->tcah.tcal = 12;
}
