
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audpp_state {void** private; scalar_t__ open_count; int lock; int * mod; int ** func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct audpp_state*,int,int ,int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 struct audpp_state VAR_3 ;

void FUNC_10(int VAR_4, void *VAR_5)
{
 struct audpp_state *VAR_6 = &VAR_3;
 unsigned long VAR_7;

 if (VAR_4 < -1 || VAR_4 > 4)
  return;

 if (VAR_4 == -1)
  VAR_4 = 5;

 FUNC_7(VAR_6->lock);
 FUNC_0(VAR_2, 1);
 if (!VAR_6->func[VAR_4])
  goto out;
 if (VAR_6->private[VAR_4] != VAR_5)
  goto out;

 FUNC_4(VAR_7);
 FUNC_2(VAR_6, VAR_4, VAR_0, VAR_1);
 VAR_6->func[VAR_4] = ((void*)0);
 VAR_6->private[VAR_4] = ((void*)0);
 FUNC_3(VAR_7);

 if (--VAR_6->open_count == 0) {
  FUNC_9("audpp: disable\n");
  FUNC_0(VAR_2, 2);
  FUNC_1(0);
  FUNC_5(VAR_6->mod);
  FUNC_6(VAR_6->mod);
  VAR_6->mod = ((void*)0);
 }
out:
 FUNC_8(VAR_6->lock);
}
