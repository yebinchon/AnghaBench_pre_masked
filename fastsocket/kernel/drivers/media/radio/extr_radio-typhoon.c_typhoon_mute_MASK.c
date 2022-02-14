
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typhoon {int muted; int mutefreq; } ;


 int FUNC_0 (struct typhoon*,int ) ;
 int FUNC_1 (struct typhoon*,int ) ;

__attribute__((used)) static void FUNC_2(struct typhoon *VAR_0)
{
 if (VAR_0->muted == 1)
  return;
 FUNC_1(VAR_0, 0);
 FUNC_0(VAR_0, VAR_0->mutefreq);
 VAR_0->muted = 1;
}
