
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * parent; } ;
struct TYPE_9__ {char* name; TYPE_2__ dev; TYPE_1__* algo_data; int class; int owner; } ;
struct TYPE_6__ {int running; int aux_ch; scalar_t__ address; } ;
struct intel_dp {TYPE_4__ adapter; TYPE_1__ algo; } ;
struct TYPE_8__ {int kdev; } ;
struct intel_connector {TYPE_3__ base; } ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_2 (struct intel_dp*,int) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (TYPE_4__*,char,int) ;
 int FUNC_5 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_6(struct intel_dp *VAR_3,
    struct intel_connector *VAR_4, const char *VAR_5)
{
 int VAR_6;

 FUNC_0("i2c_init %s\n", VAR_5);
 VAR_3->algo.running = 0;
 VAR_3->algo.address = 0;
 VAR_3->algo.aux_ch = VAR_2;

 FUNC_4(&VAR_3->adapter, '\0', sizeof(VAR_3->adapter));
 VAR_3->adapter.owner = VAR_1;
 VAR_3->adapter.class = VAR_0;
 FUNC_5(VAR_3->adapter.name, VAR_5, sizeof(VAR_3->adapter.name) - 1);
 VAR_3->adapter.name[sizeof(VAR_3->adapter.name) - 1] = '\0';
 VAR_3->adapter.algo_data = &VAR_3->algo;
 VAR_3->adapter.dev.parent = &VAR_4->base.kdev;

 FUNC_3(VAR_3);
 VAR_6 = FUNC_1(&VAR_3->adapter);
 FUNC_2(VAR_3, 0);
 return VAR_6;
}
