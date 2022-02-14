
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend_private {scalar_t__ exit; scalar_t__ release_jiffies; TYPE_1__* dvbdev; } ;
struct dvb_frontend {struct dvb_frontend_private* frontend_priv; } ;
struct TYPE_2__ {int writers; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_4)
{
 struct dvb_frontend_private *VAR_5 = VAR_4->frontend_priv;

 if (VAR_5->exit != VAR_0)
  return 1;

 if (VAR_5->dvbdev->writers == 1)
  if (FUNC_0(VAR_3, VAR_5->release_jiffies +
      VAR_2 * VAR_1))
   return 1;

 return 0;
}
