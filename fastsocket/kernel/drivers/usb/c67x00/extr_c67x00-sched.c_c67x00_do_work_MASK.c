
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c67x00_hcd {scalar_t__ current_frame; scalar_t__ last_frame; int lock; int td_list; int sie; int urb_count; int endpoint_disable; } ;


 int FUNC_0 (struct c67x00_hcd*) ;
 int FUNC_1 (struct c67x00_hcd*) ;
 int FUNC_2 (struct c67x00_hcd*) ;
 scalar_t__ FUNC_3 (struct c67x00_hcd*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct c67x00_hcd*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct c67x00_hcd *VAR_0)
{
 FUNC_8(&VAR_0->lock);

 if (!FUNC_0(VAR_0))
  goto out;

 FUNC_1(VAR_0);



 FUNC_6(&VAR_0->endpoint_disable);

 if (!FUNC_7(&VAR_0->td_list))
  goto out;

 VAR_0->current_frame = FUNC_3(VAR_0);
 if (VAR_0->current_frame == VAR_0->last_frame)
  goto out;
 VAR_0->last_frame = VAR_0->current_frame;


 if (!VAR_0->urb_count) {
  FUNC_4(VAR_0->sie);
  goto out;
 }

 FUNC_2(VAR_0);
 if (!FUNC_7(&VAR_0->td_list))

  FUNC_5(VAR_0);

 out:
 FUNC_9(&VAR_0->lock);
}
