
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ib_umad_port {int dummy; } ;
struct ib_umad_device {int start_port; int end_port; int ref; TYPE_1__* port; } ;
struct ib_device {scalar_t__ node_type; int phys_port_cnt; } ;
struct TYPE_3__ {struct ib_umad_device* umad_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ib_device*,int *,struct ib_umad_device*) ;
 scalar_t__ FUNC_1 (struct ib_device*,int,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 struct ib_umad_device* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(struct ib_device *VAR_5)
{
 struct ib_umad_device *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 if (FUNC_6(VAR_5->node_type) != VAR_2)
  return;

 if (VAR_5->node_type == VAR_1)
  VAR_7 = VAR_8 = 0;
 else {
  VAR_7 = 1;
  VAR_8 = VAR_5->phys_port_cnt;
 }

 VAR_6 = FUNC_5(sizeof *VAR_6 +
      (VAR_8 - VAR_7 + 1) * sizeof (struct ib_umad_port),
      VAR_0);
 if (!VAR_6)
  return;

 FUNC_3(&VAR_6->ref);

 VAR_6->start_port = VAR_7;
 VAR_6->end_port = VAR_8;

 for (VAR_9 = VAR_7; VAR_9 <= VAR_8; ++VAR_9) {
  VAR_6->port[VAR_9 - VAR_7].umad_dev = VAR_6;

  if (FUNC_1(VAR_5, VAR_9, &VAR_6->port[VAR_9 - VAR_7]))
   goto err;
 }

 FUNC_0(VAR_5, &VAR_4, VAR_6);

 return;

err:
 while (--VAR_9 >= VAR_7)
  FUNC_2(&VAR_6->port[VAR_9 - VAR_7]);

 FUNC_4(&VAR_6->ref, VAR_3);
}
