
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_version {int minor; int major; } ;
struct ldc_packet {int dummy; } ;
struct ldc_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ldc_packet* FUNC_0 (struct ldc_channel*,int ,int ,struct ldc_version*,int,unsigned long*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (struct ldc_channel*,struct ldc_packet*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ldc_channel *VAR_4,
       struct ldc_version *VAR_5)
{
 struct ldc_packet *VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_0(VAR_4, VAR_2, VAR_3,
       VAR_5, sizeof(*VAR_5), &VAR_7);
 if (VAR_6) {
  FUNC_1(VAR_1, "SEND VER ACK maj[%u] min[%u]\n",
         VAR_5->major, VAR_5->minor);

  return FUNC_2(VAR_4, VAR_6, VAR_7);
 }
 return -VAR_0;
}
