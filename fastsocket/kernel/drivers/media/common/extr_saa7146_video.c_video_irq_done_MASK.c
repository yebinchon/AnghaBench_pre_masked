
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_dmaqueue {int * curr; } ;
struct saa7146_vv {struct saa7146_dmaqueue video_q; } ;
struct saa7146_dev {int slock; struct saa7146_vv* vv_data; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct saa7146_dev*,struct saa7146_dmaqueue*,int ) ;
 int FUNC_2 (struct saa7146_dev*,struct saa7146_dmaqueue*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct saa7146_dev *VAR_1, unsigned long VAR_2)
{
 struct saa7146_vv *VAR_3 = VAR_1->vv_data;
 struct saa7146_dmaqueue *VAR_4 = &VAR_3->video_q;

 FUNC_3(&VAR_1->slock);
 FUNC_0(("called.\n"));


 if( ((void*)0) != VAR_4->curr ) {
  FUNC_1(VAR_1,VAR_4,VAR_0);
 }
 FUNC_2(VAR_1,VAR_4,0);

 FUNC_4(&VAR_1->slock);
}
