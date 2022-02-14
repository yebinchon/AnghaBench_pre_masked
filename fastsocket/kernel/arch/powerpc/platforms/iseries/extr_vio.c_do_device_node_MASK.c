
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unit ;
typedef int u32 ;
struct vio_resource {int* rsrcname; int* type; int* model; } ;
struct proc_dir_entry {int dummy; } ;
struct device_node {int pde; int full_name; void* type; void* name; } ;
typedef int reg ;
typedef int path ;


 int FUNC_0 (struct device_node*,char*,int,int*) ;
 int FUNC_1 (struct device_node*,char*,char const*) ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (char*,struct device_node*) ;
 int FUNC_4 (struct device_node*) ;
 void* FUNC_5 (struct device_node*,char*,int *) ;
 int FUNC_6 (struct device_node*,struct proc_dir_entry*) ;
 struct proc_dir_entry* FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (char*,int,char*,char const*,int) ;
 scalar_t__ FUNC_9 (int ,char) ;

__attribute__((used)) static struct device_node *FUNC_10(struct device_node *VAR_0,
  const char *VAR_1, u32 VAR_2, u32 VAR_3, const char *VAR_4,
  const char *VAR_5, struct vio_resource *VAR_6)
{
 struct device_node *VAR_7;
 char VAR_8[32];

 FUNC_8(VAR_8, sizeof(VAR_8), "/vdevice/%s@%08x", VAR_1, VAR_2);
 VAR_7 = FUNC_3(VAR_8, VAR_0);
 if (!VAR_7)
  return ((void*)0);
 if (!FUNC_1(VAR_7, "name", VAR_1) ||
  !FUNC_1(VAR_7, "device_type", VAR_4) ||
  !FUNC_1(VAR_7, "compatible", VAR_5) ||
  !FUNC_0(VAR_7, "reg", sizeof(VAR_2), &VAR_2) ||
  !FUNC_0(VAR_7, "linux,unit_address",
   sizeof(VAR_3), &VAR_3)) {
  goto node_free;
 }
 if (VAR_6) {
  if (!FUNC_0(VAR_7, "linux,vio_rsrcname",
    sizeof(VAR_6->rsrcname), VAR_6->rsrcname) ||
   !FUNC_0(VAR_7, "linux,vio_type",
    sizeof(VAR_6->type), VAR_6->type) ||
   !FUNC_0(VAR_7, "linux,vio_model",
    sizeof(VAR_6->model), VAR_6->model))
   goto node_free;
 }
 VAR_7->name = FUNC_5(VAR_7, "name", ((void*)0));
 VAR_7->type = FUNC_5(VAR_7, "device_type", ((void*)0));
 FUNC_4(VAR_7);
 return VAR_7;

 node_free:
 FUNC_2(VAR_7);
 return ((void*)0);
}
