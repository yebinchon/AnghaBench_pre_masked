
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {TYPE_2__* data; } ;
struct TYPE_3__ {int chunk; } ;
struct TYPE_4__ {TYPE_1__ req; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct connectdata *VAR_2)
{
  VAR_2->data->req.chunk = VAR_0;
  FUNC_0(VAR_2->data, VAR_1);
}
