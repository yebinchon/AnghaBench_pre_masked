
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct CHIPSTATE {scalar_t__ mode; int prevmode; int wt; scalar_t__ radio; struct v4l2_subdev sd; struct CHIPDESC* desc; } ;
struct CHIPDESC {int (* getmode ) (struct CHIPSTATE*) ;int (* setmode ) (struct CHIPSTATE*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct CHIPSTATE*) ;
 int FUNC_7 (struct CHIPSTATE*,int) ;
 int FUNC_8 (struct CHIPSTATE*,int) ;
 int FUNC_9 (struct CHIPSTATE*,int) ;
 int FUNC_10 (struct CHIPSTATE*,int) ;
 int FUNC_11 (struct CHIPSTATE*,int) ;
 int FUNC_12 () ;
 int FUNC_13 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_14(void *VAR_9)
{
 struct CHIPSTATE *VAR_10 = VAR_9;
 struct CHIPDESC *VAR_11 = VAR_10->desc;
 struct v4l2_subdev *VAR_12 = &VAR_10->sd;
 int VAR_13;

 FUNC_13(1, VAR_7, VAR_12, "thread started\n");
 FUNC_5();
 for (;;) {
  FUNC_4(VAR_0);
  if (!FUNC_0())
   FUNC_3();
  FUNC_4(VAR_1);
  FUNC_12();
  if (FUNC_0())
   break;
  FUNC_13(1, VAR_7, VAR_12, "thread wakeup\n");


  if (VAR_10->radio || VAR_10->mode != 0)
   continue;


  VAR_13 = VAR_11->getmode(VAR_10);
  if (VAR_13 == VAR_10->prevmode)
   continue;


  FUNC_13(1, VAR_7, VAR_12, "thread checkmode\n");

  VAR_10->prevmode = VAR_13;

  if (VAR_13 & VAR_6)
   VAR_11->setmode(VAR_10, VAR_6);
  if (VAR_13 & VAR_3)
   VAR_11->setmode(VAR_10, VAR_6);
  else if (VAR_13 & VAR_2)
   VAR_11->setmode(VAR_10, VAR_2);
  else if (VAR_13 & VAR_4)
   VAR_11->setmode(VAR_10, VAR_4);
  else
   VAR_11->setmode(VAR_10, VAR_5);


  FUNC_1(&VAR_10->wt, VAR_8+FUNC_2(2000));
 }

 FUNC_13(1, VAR_7, VAR_12, "thread exiting\n");
 return 0;
}
