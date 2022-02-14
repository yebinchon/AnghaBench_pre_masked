
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timeout; } ;
struct saa7134_dev {int ts_started; TYPE_1__ ts_q; } ;
struct TYPE_4__ {scalar_t__ field; int state; } ;
struct saa7134_buf {TYPE_2__ vb; scalar_t__ top_seen; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,struct saa7134_buf*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (struct saa7134_buf*) ;
 int FUNC_5 (struct saa7134_dev*) ;
 int FUNC_6 (struct saa7134_dev*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct saa7134_dev *VAR_4,
      struct saa7134_buf *VAR_5,
      struct saa7134_buf *VAR_6)
{

 FUNC_2("buffer_activate [%p]",VAR_5);
 VAR_5->vb.state = VAR_2;
 VAR_5->top_seen = 0;

 if (((void*)0) == VAR_6)
  VAR_6 = VAR_5;
 if (VAR_1 == VAR_5->vb.field) {
  FUNC_2("- [top]     buf=%p next=%p\n",VAR_5,VAR_6);
  FUNC_7(FUNC_0(5),FUNC_4(VAR_5));
  FUNC_7(FUNC_1(5),FUNC_4(VAR_6));
 } else {
  FUNC_2("- [bottom]  buf=%p next=%p\n",VAR_5,VAR_6);
  FUNC_7(FUNC_0(5),FUNC_4(VAR_6));
  FUNC_7(FUNC_1(5),FUNC_4(VAR_5));
 }


 FUNC_5(VAR_4);

 FUNC_3(&VAR_4->ts_q.timeout, VAR_3+VAR_0);

 if (!VAR_4->ts_started)
  FUNC_6(VAR_4);

 return 0;
}
