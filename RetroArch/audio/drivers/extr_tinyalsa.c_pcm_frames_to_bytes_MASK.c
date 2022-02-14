
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int channels; int format; } ;
struct pcm {TYPE_1__ config; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(const struct pcm *VAR_0, unsigned int VAR_1)
{
   return VAR_1 * VAR_0->config.channels *
      (FUNC_0(VAR_0->config.format) >> 3);
}
