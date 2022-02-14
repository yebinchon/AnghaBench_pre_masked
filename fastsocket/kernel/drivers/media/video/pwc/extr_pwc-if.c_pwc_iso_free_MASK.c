
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct pwc_device {TYPE_1__* sbuf; } ;
struct TYPE_2__ {struct urb* urb; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct urb*) ;

__attribute__((used)) static void FUNC_2(struct pwc_device *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct urb *VAR_3;

  VAR_3 = VAR_1->sbuf[VAR_2].urb;
  if (VAR_3) {
   FUNC_0("Freeing URB\n");
   FUNC_1(VAR_3);
   VAR_1->sbuf[VAR_2].urb = ((void*)0);
  }
 }
}
