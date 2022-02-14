
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_par {scalar_t__ dmaCurrent; scalar_t__ dmaPut; } ;


 int FUNC_0 (struct nvidia_par*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct nvidia_par *VAR_0)
{
 if (VAR_0->dmaCurrent != VAR_0->dmaPut) {
  VAR_0->dmaPut = VAR_0->dmaCurrent;
  FUNC_0(VAR_0, VAR_0->dmaPut);
 }
}
