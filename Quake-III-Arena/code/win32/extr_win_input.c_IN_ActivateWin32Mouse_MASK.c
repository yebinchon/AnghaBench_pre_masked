
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hWnd; } ;
struct TYPE_5__ {int left; int top; int right; int bottom; } ;
typedef TYPE_1__ RECT ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_6( void ) {
 int VAR_6, VAR_7;
 RECT VAR_8;

 VAR_6 = FUNC_1 (VAR_1);
 VAR_7 = FUNC_1 (VAR_2);

 FUNC_2 ( VAR_3.hWnd, &VAR_8);
 if (VAR_8.left < 0)
  VAR_8.left = 0;
 if (VAR_8.top < 0)
  VAR_8.top = 0;
 if (VAR_8.right >= VAR_6)
  VAR_8.right = VAR_6-1;
 if (VAR_8.bottom >= VAR_7-1)
  VAR_8.bottom = VAR_7-1;
 VAR_4 = (VAR_8.right + VAR_8.left)/2;
 VAR_5 = (VAR_8.top + VAR_8.bottom)/2;

 FUNC_4 (VAR_4, VAR_5);

 FUNC_3 ( VAR_3.hWnd );
 FUNC_0 (&VAR_8);
 while (FUNC_5 (VAR_0) >= 0)
  ;
}
