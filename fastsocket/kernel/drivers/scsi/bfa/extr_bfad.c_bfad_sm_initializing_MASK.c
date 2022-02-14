
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int * bfad_tsk; } ;
typedef enum bfad_sm_event { ____Placeholder_bfad_sm_event } bfad_sm_event ;





 int VAR_0 ;
 int FUNC_0 (struct bfad_s*,int) ;
 int FUNC_1 (struct bfad_s*,int ) ;
 int FUNC_2 (struct bfad_s*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct bfad_s*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct bfad_s *VAR_4, enum bfad_sm_event VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;

 FUNC_2(VAR_4, VAR_5);

 switch (VAR_5) {
 case 129:
  FUNC_4(VAR_4->bfad_tsk);
  FUNC_5(&VAR_4->bfad_lock, VAR_7);
  VAR_4->bfad_tsk = ((void*)0);
  FUNC_6(&VAR_4->bfad_lock, VAR_7);

  VAR_6 = FUNC_3(VAR_4);
  if (VAR_6 != VAR_0)
   break;
  FUNC_1(VAR_4, VAR_2);
  break;

 case 128:
  FUNC_1(VAR_4, VAR_3);
  FUNC_4(VAR_4->bfad_tsk);
  FUNC_5(&VAR_4->bfad_lock, VAR_7);
  VAR_4->bfad_tsk = ((void*)0);
  FUNC_6(&VAR_4->bfad_lock, VAR_7);
  break;

 case 130:
  FUNC_1(VAR_4, VAR_1);
  break;
 default:
  FUNC_0(VAR_4, VAR_5);
 }
}
