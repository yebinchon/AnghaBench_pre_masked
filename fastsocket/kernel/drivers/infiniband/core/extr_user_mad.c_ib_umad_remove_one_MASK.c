
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_umad_device {int end_port; int start_port; int ref; int * port; } ;
struct ib_device {int dummy; } ;


 struct ib_umad_device* FUNC_0 (struct ib_device*,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct ib_device *VAR_2)
{
 struct ib_umad_device *VAR_3 = FUNC_0(VAR_2, &VAR_1);
 int VAR_4;

 if (!VAR_3)
  return;

 for (VAR_4 = 0; VAR_4 <= VAR_3->end_port - VAR_3->start_port; ++VAR_4)
  FUNC_1(&VAR_3->port[VAR_4]);

 FUNC_2(&VAR_3->ref, VAR_0);
}
