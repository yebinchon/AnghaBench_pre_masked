
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amd64_pvt {int dclr0; scalar_t__ ext_model; int dchr0; } ;
typedef enum mem_type { ____Placeholder_mem_type } mem_type ;
struct TYPE_2__ {int x86; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int,int ) ;
 TYPE_1__ VAR_8 ;
 int * VAR_9 ;

__attribute__((used)) static enum mem_type FUNC_2(struct amd64_pvt *VAR_10, int VAR_11)
{
 enum mem_type VAR_12;


 if (VAR_8.x86 >= 0x15)
  VAR_12 = (VAR_10->dclr0 & FUNC_0(16)) ? VAR_4 : VAR_7;
 else if (VAR_8.x86 == 0x10 || VAR_10->ext_model >= VAR_1) {
  if (VAR_10->dchr0 & VAR_0)
   VAR_12 = (VAR_10->dclr0 & FUNC_0(16)) ? VAR_4 : VAR_7;
  else
   VAR_12 = (VAR_10->dclr0 & FUNC_0(16)) ? VAR_3 : VAR_6;
 } else {
  VAR_12 = (VAR_10->dclr0 & FUNC_0(18)) ? VAR_2 : VAR_5;
 }

 FUNC_1("CS%d: %s\n", VAR_11, VAR_9[VAR_12]);

 return VAR_12;
}
