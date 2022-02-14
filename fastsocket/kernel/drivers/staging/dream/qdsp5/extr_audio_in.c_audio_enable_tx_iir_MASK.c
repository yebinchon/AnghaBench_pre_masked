
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_in {int iir_enable; scalar_t__ running; } ;


 int FUNC_0 (struct audio_in*) ;

__attribute__((used)) static void FUNC_1(struct audio_in *VAR_0, int VAR_1)
{
 if (VAR_0->iir_enable != VAR_1) {
  VAR_0->iir_enable = VAR_1;
  if (VAR_0->running)
   FUNC_0(VAR_0);
 }
}
