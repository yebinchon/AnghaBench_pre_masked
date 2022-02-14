
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int v_scale; } ;
struct TYPE_9__ {TYPE_1__ video; } ;
struct TYPE_8__ {int dy; int dx; } ;
typedef TYPE_1__ PE_Video ;


 TYPE_5__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int) ;



 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ,unsigned char*) ;
 int VAR_7 ;

int
FUNC_5(PE_Video * VAR_8, int VAR_9)
{
 static int VAR_10 = -1;

 if (VAR_8 && (VAR_8 != &VAR_0.video)) VAR_8->v_scale = VAR_0.video.v_scale;

 switch (VAR_9) {

 case 130:
  FUNC_0(VAR_8, VAR_9);
  VAR_10 = FUNC_3();
  FUNC_1("kPEDisableScreen %d\n", VAR_10);
  break;

 case 129:
  FUNC_0(VAR_8, VAR_9);
  if (VAR_8)
   VAR_0.video = *VAR_8;
  FUNC_1("kPEEnableScreen %d\n", VAR_10);
  if (VAR_10 != -1)
   FUNC_2(VAR_10);
  break;

 case 128:




  if (!VAR_7) {
   VAR_3.dx = 0;
   VAR_3.dy = 0;
   FUNC_4(&VAR_3,
            VAR_4,
            VAR_5,
            VAR_6,
            (unsigned char *) VAR_2);
   VAR_7 = VAR_1;
  }
  FUNC_0(VAR_8, VAR_9);
  break;

 default:
  FUNC_0(VAR_8, VAR_9);
  break;
 }

 return 0;
}
