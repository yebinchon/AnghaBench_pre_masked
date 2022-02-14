
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typhoon {scalar_t__ muted; int curvol; int curfreq; } ;


 int FUNC_0 (struct typhoon*,int ) ;
 int FUNC_1 (struct typhoon*,int ) ;

__attribute__((used)) static void FUNC_2(struct typhoon *VAR_0)
{
 if (VAR_0->muted == 0)
  return;
 FUNC_0(VAR_0, VAR_0->curfreq);
 FUNC_1(VAR_0, VAR_0->curvol);
 VAR_0->muted = 0;
}
