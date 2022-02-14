
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx18_stream {scalar_t__ type; int waitq; int s_flags; int handle; struct cx18* cx; } ;
struct cx18 {int tot_capturing; int ana_capturing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct cx18_stream*) ;
 int FUNC_6 (struct cx18*,int ,int,int ,...) ;
 int FUNC_7 (struct cx18*,int,int ) ;
 unsigned long VAR_10 ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct cx18_stream *VAR_11, int VAR_12)
{
 struct cx18 *VAR_13 = VAR_11->cx;
 unsigned long VAR_14;

 if (!FUNC_5(VAR_11))
  return -VAR_9;




 FUNC_0("Stop Capture\n");

 if (FUNC_3(&VAR_13->tot_capturing) == 0)
  return 0;

 FUNC_8(VAR_6, &VAR_11->s_flags);
 if (VAR_11->type == VAR_4)
  FUNC_6(VAR_13, VAR_0, 2, VAR_11->handle, !VAR_12);
 else
  FUNC_6(VAR_13, VAR_0, 1, VAR_11->handle);

 VAR_14 = VAR_10;

 if (VAR_11->type == VAR_4 && VAR_12) {
  FUNC_1("ignoring gop_end: not (yet?) supported by the firmware\n");
 }

 if (VAR_11->type != VAR_5)
  FUNC_2(&VAR_13->ana_capturing);
 FUNC_2(&VAR_13->tot_capturing);


 FUNC_4(VAR_7, &VAR_11->s_flags);


 FUNC_6(VAR_13, VAR_1, 1, VAR_11->handle);

 FUNC_6(VAR_13, VAR_2, 1, VAR_11->handle);
 VAR_11->handle = VAR_8;
 FUNC_4(VAR_6, &VAR_11->s_flags);

 if (FUNC_3(&VAR_13->tot_capturing) > 0)
  return 0;

 FUNC_7(VAR_13, 5, VAR_3);
 FUNC_9(&VAR_11->waitq);

 return 0;
}
