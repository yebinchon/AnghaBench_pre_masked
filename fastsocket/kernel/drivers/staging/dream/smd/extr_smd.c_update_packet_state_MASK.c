
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smd_channel {unsigned int current_packet; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct smd_channel*,unsigned int*,int) ;
 int FUNC_2 (struct smd_channel*) ;

__attribute__((used)) static void FUNC_3(struct smd_channel *VAR_1)
{
 unsigned VAR_2[5];
 int VAR_3;


 if (VAR_1->current_packet != 0)
  return;


 if (FUNC_2(VAR_1) < VAR_0)
  return;

 VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_0);
 FUNC_0(VAR_3 != VAR_0);

 VAR_1->current_packet = VAR_2[0];
}
