
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio {scalar_t__ out_needed; int audmgr; int wait; scalar_t__ enabled; } ;


 int FUNC_0 (struct audio*) ;
 int FUNC_1 (struct audio*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,struct audio*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct audio *VAR_0)
{
 FUNC_4("audio_disable()\n");
 if (VAR_0->enabled) {
  VAR_0->enabled = 0;
  FUNC_1(VAR_0, 0);

  FUNC_3(-1, VAR_0);

  FUNC_5(&VAR_0->wait);
  FUNC_2(&VAR_0->audmgr);
  VAR_0->out_needed = 0;
  FUNC_0(VAR_0);
 }
 return 0;
}
