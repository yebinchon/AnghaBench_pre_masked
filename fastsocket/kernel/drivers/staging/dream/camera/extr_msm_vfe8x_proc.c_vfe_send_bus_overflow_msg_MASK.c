
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int msgBusOverflow; } ;
struct vfe_message {TYPE_1__ _u; int _d; } ;
struct TYPE_4__ {int vfePmData; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 struct vfe_message* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,struct vfe_message*,int) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct vfe_message *VAR_3;
 VAR_3 =
  FUNC_0(sizeof(struct vfe_message), VAR_0);
 if (!VAR_3)
  return;

 VAR_3->_d = VAR_1;





 FUNC_2(VAR_1,
  VAR_3, sizeof(struct vfe_message));
}
