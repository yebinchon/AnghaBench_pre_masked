
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ context; } ;
struct message {scalar_t__ done; scalar_t__ size; } ;


 int FUNC_0 (struct message*) ;
 int FUNC_1 (struct message*,struct urb*) ;
 int FUNC_2 (struct urb*) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_0)
{
 struct message *VAR_1 = (struct message *)VAR_0->context;

 if (VAR_1->done >= VAR_1->size) {
  FUNC_2(VAR_0);
  FUNC_0(VAR_1);
 } else
  FUNC_1(VAR_1, VAR_0);
}
