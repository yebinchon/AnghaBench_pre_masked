
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_in {int audmgr; int audpre; int audrec; int wait; scalar_t__ enabled; } ;


 int FUNC_0 (struct audio_in*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct audio_in *VAR_0)
{
 if (VAR_0->enabled) {
  VAR_0->enabled = 0;

  FUNC_0(VAR_0, 0);

  FUNC_3(&VAR_0->wait);

  FUNC_2(VAR_0->audrec);
  FUNC_2(VAR_0->audpre);
  FUNC_1(&VAR_0->audmgr);
 }
 return 0;
}
