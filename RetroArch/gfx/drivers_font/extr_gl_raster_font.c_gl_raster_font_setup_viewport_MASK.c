
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* gl; int tex; } ;
typedef TYPE_2__ gl_raster_t ;
struct TYPE_7__ {int shader_data; TYPE_1__* shader; } ;
struct TYPE_5__ {int (* use ) (TYPE_3__*,int ,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int) ;
 int FUNC_5 (unsigned int,unsigned int,int,int) ;

__attribute__((used)) static void FUNC_6(unsigned VAR_6, unsigned VAR_7,
      gl_raster_t *VAR_8, bool VAR_9)
{
   FUNC_5(VAR_6, VAR_7, VAR_9, 0);

   FUNC_3(VAR_0);
   FUNC_2(VAR_3, VAR_2);
   FUNC_1(VAR_1);

   FUNC_0(VAR_4, VAR_8->tex);

   if (VAR_8->gl->shader && VAR_8->gl->shader->use)
      VAR_8->gl->shader->use(VAR_8->gl,
            VAR_8->gl->shader_data, VAR_5, 1);
}
