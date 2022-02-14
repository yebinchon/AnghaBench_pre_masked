
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct resource {int start; int end; int flags; int name; } ;
struct TYPE_9__ {void** head; } ;
struct i2o_message {void** body; TYPE_3__ u; } ;
struct TYPE_7__ {TYPE_4__* virt; } ;
struct i2o_controller {int mem_alloc; int io_alloc; int unit; int name; TYPE_5__* pdev; struct resource io_resource; struct resource mem_resource; TYPE_1__ status_block; } ;
struct device {int dummy; } ;
struct TYPE_10__ {int current_mem_size; int desired_mem_size; int current_mem_base; int current_io_size; int desired_io_size; int current_io_base; } ;
typedef TYPE_4__ i2o_status_block ;
struct TYPE_12__ {int phys; int len; int virt; } ;
struct TYPE_11__ {TYPE_2__* bus; struct device dev; } ;
struct TYPE_8__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct i2o_message*) ;
 int VAR_7 ;
 int FUNC_2 (struct i2o_message*) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct resource*,struct resource*,int,int,int,int,int *,int *) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct device*,int ,int,int ) ;
 int FUNC_6 (struct device*,int,int,int ) ;
 struct i2o_message* FUNC_7 (struct i2o_controller*,int ) ;
 int FUNC_8 (struct i2o_controller*,struct i2o_message*) ;
 int FUNC_9 (struct i2o_controller*,struct i2o_message*,int) ;
 TYPE_6__ VAR_9 ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,int ,int) ;
 int FUNC_12 (char*,int ,...) ;
 int FUNC_13 (char*,int ) ;
 struct resource* FUNC_14 (TYPE_5__*,struct resource*) ;

__attribute__((used)) static int FUNC_15(struct i2o_controller *VAR_10)
{
 struct i2o_message *VAR_11;
 i2o_status_block *VAR_12 = VAR_10->status_block.virt;
 struct device *VAR_13 = &VAR_10->pdev->dev;
 struct resource *VAR_14;
 int VAR_15;

 if (VAR_12->current_mem_size < VAR_12->desired_mem_size) {
  struct resource *VAR_16 = &VAR_10->mem_resource;
  VAR_16->name = VAR_10->pdev->bus->name;
  VAR_16->flags = VAR_6;
  VAR_16->start = 0;
  VAR_16->end = 0;
  FUNC_12("%s: requires private memory resources.\n", VAR_10->name);
  VAR_14 = FUNC_14(VAR_10->pdev, VAR_16);
  if (VAR_14 == ((void*)0))
   FUNC_13("%s: Can't find parent resource!\n", VAR_10->name);
  if (VAR_14 && FUNC_3(VAR_14, VAR_16, VAR_12->desired_mem_size, VAR_12->desired_mem_size, VAR_12->desired_mem_size, 1 << 20,
           ((void*)0), ((void*)0)) >= 0) {
   VAR_10->mem_alloc = 1;
   VAR_12->current_mem_size = 1 + VAR_16->end - VAR_16->start;
   VAR_12->current_mem_base = VAR_16->start;
   FUNC_12("%s: allocated %llu bytes of PCI memory at "
    "0x%016llX.\n", VAR_10->name,
    (unsigned long long)(1 + VAR_16->end - VAR_16->start),
    (unsigned long long)VAR_16->start);
  }
 }

 if (VAR_12->current_io_size < VAR_12->desired_io_size) {
  struct resource *VAR_17 = &VAR_10->io_resource;
  VAR_17->name = VAR_10->pdev->bus->name;
  VAR_17->flags = VAR_5;
  VAR_17->start = 0;
  VAR_17->end = 0;
  FUNC_12("%s: requires private memory resources.\n", VAR_10->name);
  VAR_14 = FUNC_14(VAR_10->pdev, VAR_17);
  if (VAR_14 == ((void*)0))
   FUNC_13("%s: Can't find parent resource!\n", VAR_10->name);
  if (VAR_14 && FUNC_3(VAR_14, VAR_17, VAR_12->desired_io_size, VAR_12->desired_io_size, VAR_12->desired_io_size, 1 << 20,
           ((void*)0), ((void*)0)) >= 0) {
   VAR_10->io_alloc = 1;
   VAR_12->current_io_size = 1 + VAR_17->end - VAR_17->start;
   VAR_12->current_mem_base = VAR_17->start;
   FUNC_12("%s: allocated %llu bytes of PCI I/O at "
    "0x%016llX.\n", VAR_10->name,
    (unsigned long long)(1 + VAR_17->end - VAR_17->start),
    (unsigned long long)VAR_17->start);
  }
 }

 VAR_11 = FUNC_7(VAR_10, VAR_4);
 if (FUNC_1(VAR_11))
  return FUNC_2(VAR_11);

 VAR_9.phys = FUNC_5(VAR_13, VAR_9.virt, VAR_9.len,
      VAR_7);
 if (!VAR_9.phys) {
  FUNC_8(VAR_10, VAR_11);
  return -VAR_1;
 }

 VAR_11->u.head[0] = FUNC_4(FUNC_0(12) | VAR_8);
 VAR_11->u.head[1] =
     FUNC_4(VAR_3 << 24 | VAR_2 << 12 |
   VAR_0);







 VAR_11->body[0] = FUNC_4(VAR_10->unit + 2);
 VAR_11->body[1] = FUNC_4(0x00000000);
 VAR_11->body[2] = FUNC_4(0x54000000 | VAR_9.len);
 VAR_11->body[3] = FUNC_4(VAR_9.phys);
 VAR_11->body[4] = FUNC_4(0x54000000 | VAR_12->current_mem_size);
 VAR_11->body[5] = FUNC_4(VAR_12->current_mem_base);
 VAR_11->body[6] = FUNC_4(0xd4000000 | VAR_12->current_io_size);
 VAR_11->body[6] = FUNC_4(VAR_12->current_io_base);

 VAR_15 = FUNC_9(VAR_10, VAR_11, 120);

 FUNC_6(VAR_13, VAR_9.phys, VAR_9.len,
    VAR_7);

 if (VAR_15 < 0)
  FUNC_11("%s: Unable to set SysTab (status=%#x).\n", VAR_10->name,
   -VAR_15);
 else
  FUNC_10("%s: SysTab set.\n", VAR_10->name);

 return VAR_15;
}
