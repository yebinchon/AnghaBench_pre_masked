
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smd_channel {int current_packet; } ;


 int FUNC_0 (struct smd_channel*) ;

__attribute__((used)) static int FUNC_1(struct smd_channel *VAR_0)
{
 if (VAR_0->current_packet) {
  int VAR_1 = FUNC_0(VAR_0);
  if (VAR_1 > VAR_0->current_packet)
   VAR_1 = VAR_0->current_packet;
  return VAR_1;
 } else {
  return 0;
 }
}
