
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio {int eq_enable; scalar_t__ running; } ;


 int FUNC_0 (struct audio*) ;

__attribute__((used)) static int FUNC_1(struct audio *VAR_0, int VAR_1)
{
 if (VAR_0->eq_enable != VAR_1) {
  VAR_0->eq_enable = VAR_1;
  if (VAR_0->running)
   FUNC_0(VAR_0);
 }
 return 0;
}
