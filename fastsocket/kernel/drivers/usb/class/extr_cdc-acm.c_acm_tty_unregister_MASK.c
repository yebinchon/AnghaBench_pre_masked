
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acm {int rx_buflimit; size_t minor; struct acm* country_codes; TYPE_2__* ru; TYPE_1__* wb; int ctrlurb; int control; } ;
struct TYPE_4__ {int urb; } ;
struct TYPE_3__ {int urb; } ;


 int VAR_0 ;
 int ** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct acm*) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct acm *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = VAR_3->rx_buflimit;
 FUNC_1(VAR_2, VAR_3->minor);
 FUNC_3(VAR_3->control);
 VAR_1[VAR_3->minor] = ((void*)0);
 FUNC_2(VAR_3->ctrlurb);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_2(VAR_3->wb[VAR_4].urb);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  FUNC_2(VAR_3->ru[VAR_4].urb);
 FUNC_0(VAR_3->country_codes);
 FUNC_0(VAR_3);
}
