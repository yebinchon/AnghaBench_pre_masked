
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_dev {scalar_t__ ext_priv; } ;
struct budget {int video_port; int feedlock; scalar_t__ feeding; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct budget*) ;
 int FUNC_3 (struct budget*) ;

void FUNC_4(struct saa7146_dev *VAR_0, int VAR_1)
{
 struct budget *VAR_2 = (struct budget *) VAR_0->ext_priv;

 FUNC_0(&VAR_2->feedlock);
 VAR_2->video_port = VAR_1;
 if (VAR_2->feeding) {
  FUNC_3(VAR_2);
  FUNC_2(VAR_2);
 }
 FUNC_1(&VAR_2->feedlock);
}
