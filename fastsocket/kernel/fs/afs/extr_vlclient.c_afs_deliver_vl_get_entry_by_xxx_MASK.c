
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct afs_call {scalar_t__ reply_size; scalar_t__ reply_max; int * buffer; struct afs_cache_vlocation* reply; } ;
struct afs_cache_vlocation {int vidmask; void** vid; int * srvtmask; TYPE_1__* servers; void* nservers; void** name; } ;
typedef int __be32 ;
struct TYPE_2__ {int s_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct afs_call*,struct sk_buff*) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct afs_call *VAR_10,
        struct sk_buff *VAR_11, bool VAR_12)
{
 struct afs_cache_vlocation *VAR_13;
 __be32 *VAR_14;
 u32 VAR_15;
 int VAR_16;

 FUNC_0(",,%u", VAR_12);

 FUNC_2(VAR_10, VAR_11);
 if (!VAR_12)
  return 0;

 if (VAR_10->reply_size != VAR_10->reply_max)
  return -VAR_9;


 VAR_13 = VAR_10->reply;
 VAR_14 = VAR_10->buffer;

 for (VAR_16 = 0; VAR_16 < 64; VAR_16++)
  VAR_13->name[VAR_16] = FUNC_3(*VAR_14++);
 VAR_13->name[VAR_16] = 0;
 VAR_14++;

 VAR_14++;
 VAR_13->nservers = FUNC_3(*VAR_14++);

 for (VAR_16 = 0; VAR_16 < 8; VAR_16++)
  VAR_13->servers[VAR_16].s_addr = *VAR_14++;

 VAR_14 += 8;

 for (VAR_16 = 0; VAR_16 < 8; VAR_16++) {
  VAR_15 = FUNC_3(*VAR_14++);
  VAR_13->srvtmask[VAR_16] = 0;
  if (VAR_15 & VAR_5)
   VAR_13->srvtmask[VAR_16] |= VAR_8;
  if (VAR_15 & VAR_4)
   VAR_13->srvtmask[VAR_16] |= VAR_7;
  if (VAR_15 & VAR_3)
   VAR_13->srvtmask[VAR_16] |= VAR_6;
 }

 VAR_13->vid[0] = FUNC_3(*VAR_14++);
 VAR_13->vid[1] = FUNC_3(*VAR_14++);
 VAR_13->vid[2] = FUNC_3(*VAR_14++);

 VAR_14++;

 VAR_15 = FUNC_3(*VAR_14++);
 VAR_13->vidmask = 0;
 if (VAR_15 & VAR_2)
  VAR_13->vidmask |= VAR_8;
 if (VAR_15 & VAR_1)
  VAR_13->vidmask |= VAR_7;
 if (VAR_15 & VAR_0)
  VAR_13->vidmask |= VAR_6;
 if (!VAR_13->vidmask)
  return -VAR_9;

 FUNC_1(" = 0 [done]");
 return 0;
}
