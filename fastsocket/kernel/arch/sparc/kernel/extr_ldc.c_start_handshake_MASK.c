
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_version {int minor; int major; } ;
struct ldc_packet {int dummy; } ;
struct ldc_channel {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ldc_packet* FUNC_0 (struct ldc_channel*,int ,int ,struct ldc_version*,int,unsigned long*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (struct ldc_channel*,struct ldc_packet*,unsigned long) ;
 struct ldc_version* VAR_5 ;

__attribute__((used)) static int FUNC_3(struct ldc_channel *VAR_6)
{
 struct ldc_packet *VAR_7;
 struct ldc_version *VAR_8;
 unsigned long VAR_9;

 VAR_8 = &VAR_5[0];

 FUNC_1(VAR_1, "SEND VER INFO maj[%u] min[%u]\n",
        VAR_8->major, VAR_8->minor);

 VAR_7 = FUNC_0(VAR_6, VAR_3, VAR_4,
       VAR_8, sizeof(*VAR_8), &VAR_9);
 if (VAR_7) {
  int VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_9);
  if (!VAR_10)
   VAR_6->flags &= ~VAR_2;
  return VAR_10;
 }
 return -VAR_0;
}
