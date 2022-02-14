
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct amd64_pvt {int ext_model; int mc_node_id; int * ops; } ;
struct amd64_family_type {int ctl_name; int ops; } ;
struct TYPE_2__ {int x86; int x86_model; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 struct amd64_family_type* VAR_5 ;
 int FUNC_1 (char*,int ,char*,int ) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static struct amd64_family_type *FUNC_2(struct amd64_pvt *VAR_7)
{
 u8 VAR_8 = VAR_6.x86;
 struct amd64_family_type *VAR_9 = ((void*)0);

 switch (VAR_8) {
 case 0xf:
  VAR_9 = &VAR_5[VAR_3];
  VAR_7->ops = &VAR_5[VAR_3].ops;
  break;

 case 0x10:
  VAR_9 = &VAR_5[VAR_0];
  VAR_7->ops = &VAR_5[VAR_0].ops;
  break;

 case 0x15:
  VAR_9 = &VAR_5[VAR_1];
  VAR_7->ops = &VAR_5[VAR_1].ops;
  break;

 case 0x16:
  VAR_9 = &VAR_5[VAR_2];
  VAR_7->ops = &VAR_5[VAR_2].ops;
  break;

 default:
  FUNC_0("Unsupported family!\n");
  return ((void*)0);
 }

 VAR_7->ext_model = VAR_6.x86_model >> 4;

 FUNC_1("%s %sdetected (node %d).\n", VAR_9->ctl_name,
       (VAR_8 == 0xf ?
    (VAR_7->ext_model >= VAR_4 ? "revF or later "
            : "revE or earlier ")
     : ""), VAR_7->mc_node_id);
 return VAR_9;
}
