
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio {scalar_t__ out_needed; int audmgr; int dec_id; int audplay; int read_wait; int write_wait; scalar_t__ enabled; } ;


 int FUNC_0 (struct audio*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct audio*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct audio *VAR_0)
{
 FUNC_3("audamrnb_disable()\n");
 if (VAR_0->enabled) {
  VAR_0->enabled = 0;
  FUNC_0(VAR_0, 0);
  FUNC_5(&VAR_0->write_wait);
  FUNC_5(&VAR_0->read_wait);
  FUNC_4(VAR_0->audplay);
  FUNC_2(VAR_0->dec_id, VAR_0);
  FUNC_1(&VAR_0->audmgr);
  VAR_0->out_needed = 0;
 }
 return 0;
}
