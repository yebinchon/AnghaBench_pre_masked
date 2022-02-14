
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_streaming {struct urb** urb; } ;
struct urb {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct urb*) ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (struct uvc_streaming*) ;

__attribute__((used)) static void FUNC_3(struct uvc_streaming *VAR_1, int VAR_2)
{
 struct urb *VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  VAR_3 = VAR_1->urb[VAR_4];
  if (VAR_3 == ((void*)0))
   continue;

  FUNC_1(VAR_3);
  FUNC_0(VAR_3);
  VAR_1->urb[VAR_4] = ((void*)0);
 }

 if (VAR_2)
  FUNC_2(VAR_1);
}
