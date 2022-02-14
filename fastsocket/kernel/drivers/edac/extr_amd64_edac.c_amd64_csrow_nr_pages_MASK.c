
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct amd64_pvt {int dbam1; int dbam0; int channel_count; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* dbam_to_cs ) (struct amd64_pvt*,scalar_t__,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct amd64_pvt*,scalar_t__,int) ;

__attribute__((used)) static u32 FUNC_2(struct amd64_pvt *VAR_1, u8 VAR_2, int VAR_3)
{
 u32 VAR_4, VAR_5;
 u32 VAR_6 = VAR_2 ? VAR_1->dbam1 : VAR_1->dbam0;
 VAR_4 = (VAR_6 >> ((VAR_3 / 2) * 4)) & 0xF;

 VAR_5 = VAR_1->ops->dbam_to_cs(VAR_1, VAR_2, VAR_4) << (20 - VAR_0);

 FUNC_0("  (csrow=%d) DBAM map index= %d\n", VAR_3, VAR_4);
 FUNC_0("    nr_pages= %u  channel-count = %d\n",
  VAR_5, VAR_1->channel_count);

 return VAR_5;
}
