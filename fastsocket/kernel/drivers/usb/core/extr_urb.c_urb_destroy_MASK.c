
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_flags; struct urb* transfer_buffer; } ;
struct kref {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct urb*) ;
 struct urb* FUNC_1 (struct kref*) ;

__attribute__((used)) static void FUNC_2(struct kref *VAR_1)
{
 struct urb *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->transfer_flags & VAR_0)
  FUNC_0(VAR_2->transfer_buffer);

 FUNC_0(VAR_2);
}
