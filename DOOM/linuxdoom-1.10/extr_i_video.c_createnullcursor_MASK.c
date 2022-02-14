
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int function; } ;
typedef TYPE_1__ XGCValues ;
struct TYPE_7__ {int flags; scalar_t__ red; scalar_t__ pixel; } ;
typedef TYPE_2__ XColor ;
typedef int Window ;
typedef int Pixmap ;
typedef int GC ;
typedef int Display ;
typedef int Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_1 (int *,int ,int,int,int) ;
 int FUNC_2 (int *,int ,int ,TYPE_2__*,TYPE_2__*,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

Cursor
FUNC_6
( Display* VAR_2,
  Window VAR_3 )
{
    Pixmap VAR_4;
    XGCValues VAR_5;
    GC VAR_6;
    XColor VAR_7;
    Cursor VAR_8;

    VAR_4 = FUNC_1(VAR_2, VAR_3, 1, 1, 1 );
    VAR_5.function = VAR_1;
    VAR_6 = FUNC_0(VAR_2, VAR_4, VAR_0, &VAR_5);
    FUNC_3(VAR_2, VAR_4, VAR_6, 0, 0, 1, 1);
    VAR_7.pixel = 0;
    VAR_7.red = 0;
    VAR_7.flags = 04;
    VAR_8 = FUNC_2(VAR_2, VAR_4, VAR_4,
     &VAR_7,&VAR_7, 0,0);
    FUNC_5(VAR_2,VAR_4);
    FUNC_4(VAR_2,VAR_6);
    return VAR_8;
}
