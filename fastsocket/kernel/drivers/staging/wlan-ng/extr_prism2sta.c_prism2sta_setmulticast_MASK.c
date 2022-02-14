
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ priv; } ;
typedef TYPE_1__ wlandevice_t ;
typedef int u16 ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ netdevice_t ;
struct TYPE_9__ {scalar_t__ state; } ;
typedef TYPE_3__ hfa384x_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_1(wlandevice_t *VAR_6, netdevice_t *VAR_7)
{
 int VAR_8 = 0;
 hfa384x_t *VAR_9 = (hfa384x_t *) VAR_6->priv;

 u16 VAR_10;


 if (VAR_9->state != VAR_1)
  goto exit;

 if ((VAR_7->flags & (VAR_3 | VAR_2)) != 0)
  VAR_10 = VAR_5;
 else
  VAR_10 = VAR_4;

 VAR_8 =
     FUNC_0(VAR_9, VAR_0,
        VAR_10);
exit:
 return VAR_8;
}
