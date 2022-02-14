
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
struct drm_encoder {size_t encoder_type; TYPE_1__ base; } ;
struct TYPE_4__ {char* name; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*,int,char*,char*,int) ;

char *FUNC_1(struct drm_encoder *VAR_1)
{
 static char VAR_2[32];

 FUNC_0(VAR_2, 32, "%s-%d",
   VAR_0[VAR_1->encoder_type].name,
   VAR_1->base.id);
 return VAR_2;
}
