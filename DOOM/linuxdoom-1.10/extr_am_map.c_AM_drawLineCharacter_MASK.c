
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* y; void* x; } ;
struct TYPE_6__ {void* y; void* x; } ;
struct TYPE_8__ {TYPE_2__ b; TYPE_1__ a; } ;
typedef TYPE_3__ mline_t ;
typedef scalar_t__ fixed_t ;
typedef int angle_t ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (void**,void**,int ) ;
 void* FUNC_2 (scalar_t__,void*) ;

void
FUNC_3
( mline_t* VAR_0,
  int VAR_1,
  fixed_t VAR_2,
  angle_t VAR_3,
  int VAR_4,
  fixed_t VAR_5,
  fixed_t VAR_6 )
{
    int VAR_7;
    mline_t VAR_8;

    for (VAR_7=0;VAR_7<VAR_1;VAR_7++)
    {
 VAR_8.a.x = VAR_0[VAR_7].a.x;
 VAR_8.a.y = VAR_0[VAR_7].a.y;

 if (VAR_2)
 {
     VAR_8.a.x = FUNC_2(VAR_2, VAR_8.a.x);
     VAR_8.a.y = FUNC_2(VAR_2, VAR_8.a.y);
 }

 if (VAR_3)
     FUNC_1(&VAR_8.a.x, &VAR_8.a.y, VAR_3);

 VAR_8.a.x += VAR_5;
 VAR_8.a.y += VAR_6;

 VAR_8.b.x = VAR_0[VAR_7].b.x;
 VAR_8.b.y = VAR_0[VAR_7].b.y;

 if (VAR_2)
 {
     VAR_8.b.x = FUNC_2(VAR_2, VAR_8.b.x);
     VAR_8.b.y = FUNC_2(VAR_2, VAR_8.b.y);
 }

 if (VAR_3)
     FUNC_1(&VAR_8.b.x, &VAR_8.b.y, VAR_3);

 VAR_8.b.x += VAR_5;
 VAR_8.b.y += VAR_6;

 FUNC_0(&VAR_8, VAR_4);
    }
}
