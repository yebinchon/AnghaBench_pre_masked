
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port_num; } ;
struct ib_event {int event; TYPE_1__ element; int * device; } ;
struct ehca_shca {int ib_device; } ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;


 int FUNC_0 (int *,char*,int,char const*) ;
 int FUNC_1 (struct ib_event*) ;

__attribute__((used)) static void FUNC_2(struct ehca_shca *VAR_0, int VAR_1,
    enum ib_event_type VAR_2, const char *VAR_3)
{
 struct ib_event VAR_4;

 FUNC_0(&VAR_0->ib_device, "port %d %s.", VAR_1, VAR_3);
 VAR_4.device = &VAR_0->ib_device;
 VAR_4.event = VAR_2;
 VAR_4.element.port_num = VAR_1;
 FUNC_1(&VAR_4);
}
