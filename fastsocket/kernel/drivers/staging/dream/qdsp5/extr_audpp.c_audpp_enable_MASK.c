
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audpp_state {int lock; scalar_t__ enabled; int mod; int ** private; int ** func; scalar_t__ open_count; } ;
typedef int * audpp_event_func ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct audpp_state*,int,int ,int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int *,int *,struct audpp_state*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 struct audpp_state VAR_6 ;

int FUNC_11(int VAR_7, audpp_event_func VAR_8, void *VAR_9)
{
 struct audpp_state *VAR_10 = &VAR_6;
 int VAR_11 = 0;

 if (VAR_7 < -1 || VAR_7 > 4)
  return -VAR_3;

 if (VAR_7 == -1)
  VAR_7 = 5;

 FUNC_7(VAR_10->lock);
 if (VAR_10->func[VAR_7]) {
  VAR_11 = -VAR_2;
  goto out;
 }

 VAR_10->func[VAR_7] = VAR_8;
 VAR_10->private[VAR_7] = VAR_9;

 FUNC_0(VAR_4, 1);
 if (VAR_10->open_count++ == 0) {
  FUNC_10("audpp: enable\n");
  VAR_11 = FUNC_6("AUDPPTASK", &VAR_10->mod, &VAR_5, VAR_10);
  if (VAR_11 < 0) {
   FUNC_9("audpp: cannot open AUDPPTASK\n");
   VAR_10->open_count = 0;
   VAR_10->func[VAR_7] = ((void*)0);
   VAR_10->private[VAR_7] = ((void*)0);
   goto out;
  }
  FUNC_0(VAR_4, 2);
  FUNC_5(VAR_10->mod);
  FUNC_1(1);
 } else {
  unsigned long VAR_12;
  FUNC_4(VAR_12);
  if (VAR_10->enabled)
   FUNC_2(VAR_10, VAR_7,
      VAR_0, VAR_1);
  FUNC_3(VAR_12);
 }

 VAR_11 = 0;
out:
 FUNC_8(VAR_10->lock);
 return VAR_11;
}
