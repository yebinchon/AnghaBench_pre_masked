
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lcs_channel {int buf_idx; scalar_t__ state; size_t io_idx; int wait_q; TYPE_1__* ccwdev; struct lcs_buffer* iob; } ;
struct lcs_buffer {scalar_t__ state; int (* callback ) (struct lcs_channel*,struct lcs_buffer*) ;} ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int ,char*,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct lcs_channel*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct lcs_channel*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (struct lcs_channel*,struct lcs_buffer*) ;
 int VAR_5 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(unsigned long VAR_6)
{
 unsigned long VAR_7;
 struct lcs_channel *VAR_8;
 struct lcs_buffer *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_8 = (struct lcs_channel *) VAR_6;
 FUNC_0(5, VAR_5, "tlet%s", FUNC_2(&VAR_8->ccwdev->dev));


 VAR_9 = VAR_8->iob;
 VAR_10 = VAR_8->buf_idx;
 while (VAR_9[VAR_10].state == VAR_0) {

  if (VAR_9[VAR_10].callback != ((void*)0))
   VAR_9[VAR_10].callback(VAR_8, VAR_9 + VAR_10);
  VAR_10 = (VAR_10 + 1) & (VAR_4 - 1);
 }
 VAR_8->buf_idx = VAR_10;

 if (VAR_8->state == VAR_2)

  VAR_11 = FUNC_4(VAR_8);
 FUNC_5(FUNC_3(VAR_8->ccwdev), VAR_7);
 if (VAR_8->state == VAR_3 &&
     VAR_8->iob[VAR_8->io_idx].state == VAR_1) {

  VAR_11 = FUNC_1(VAR_8);
 }
 FUNC_6(FUNC_3(VAR_8->ccwdev), VAR_7);


 FUNC_8(&VAR_8->wait_q);
}
