
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pid; } ;
struct TYPE_6__ {TYPE_2__ pes; } ;
struct TYPE_4__ {int ts; } ;
struct dmxdev_filter {TYPE_3__ params; TYPE_1__ feed; int type; } ;
struct dmxdev {int dummy; } ;
struct dmx_pes_filter_params {scalar_t__ pes_type; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dmxdev*,struct dmxdev_filter*,int ) ;
 int FUNC_2 (struct dmxdev_filter*) ;
 int FUNC_3 (struct dmxdev_filter*) ;
 int FUNC_4 (struct dmxdev_filter*,int ) ;
 int FUNC_5 (struct dmxdev_filter*) ;
 int FUNC_6 (TYPE_3__*,struct dmx_pes_filter_params*,int) ;

__attribute__((used)) static int FUNC_7(struct dmxdev *VAR_5,
         struct dmxdev_filter *VAR_6,
         struct dmx_pes_filter_params *VAR_7)
{
 int VAR_8;

 FUNC_5(VAR_6);
 FUNC_2(VAR_6);

 if (VAR_7->pes_type > VAR_3 || VAR_7->pes_type < 0)
  return -VAR_4;

 VAR_6->type = VAR_1;
 FUNC_6(&VAR_6->params, VAR_7,
        sizeof(struct dmx_pes_filter_params));
 FUNC_0(&VAR_6->feed.ts);

 FUNC_4(VAR_6, VAR_0);

 VAR_8 = FUNC_1(VAR_5, VAR_6,
     VAR_6->params.pes.pid);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_7->flags & VAR_2)
  return FUNC_3(VAR_6);

 return 0;
}
