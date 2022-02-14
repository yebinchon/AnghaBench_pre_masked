
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smd_channel {TYPE_1__* send; } ;
struct TYPE_2__ {unsigned int head; int fHEAD; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (struct smd_channel*) ;

__attribute__((used)) static void FUNC_2(struct smd_channel *VAR_1, unsigned VAR_2)
{
 FUNC_0(VAR_2 > FUNC_1(VAR_1));
 VAR_1->send->head = (VAR_1->send->head + VAR_2) & (VAR_0 - 1);
 VAR_1->send->fHEAD = 1;
}
